module.exports = grammar({
    name: "ballerina",

    extras: $ => [
        /\s|\\\r?\n/,
        $.comment,
    ],

    rules: {
        source_file:        $ => $.module_part,
        module_part:        $ => seq(repeat($.import_decl), repeat1($.module_defn)),
        import_decl:        $ => seq("import", optional(seq($.org_name, "/")), $.module_name, optional(seq("as", $.import_prefix)), ";"),
        org_name:           $ => $.identifier,
        module_name:        $ => choice(
            $.identifier,
            seq($.module_name, ".", $.identifier)
        ),
        import_prefix:      $ => $.identifier,
        module_defn:        $ => choice(
            $.function_defn,
            $.const_defn,
            $.type_defn
        ),

        function_defn:      $ => seq(optional("public"), "function", $.identifier, $.signature, $.stmt_block),
        signature:          $ => seq("(", optional($.param_list), ")", optional(seq("returns", $.type_desc))),

        const_defn:         $ => seq(optional("public"), "const", $.builtin_type_name, $.identifier, "=", $.const_expr, ";"),

        type_defn:          $ => seq(optional("public"), "type", $.identifier, $.type_desc, ";"),

        type_desc:          $ => $.union_type_desc,
        union_type_desc:    $ => choice(
            $.intersection_type_desc,
            seq($.union_type_desc, "|", $.intersection_type_desc)
        ),
        intersection_type_desc: $ => prec.left(choice(
            $.postfix_type_desc,
            seq($.intersection_type_desc, "&", $.postfix_type_desc)
        )), 
        postfix_type_desc:  $ => choice(
            $.primary_type_desc,
            $.optional_type_desc,
            $.array_type_desc
        ),

        optional_type_desc: $ => seq($.postfix_type_desc, "?"),

        array_type_desc:    $ => seq($.array_member_type_desc, repeat1($.array_dimensions)),
        array_dimensions:   $ => seq("[", optional($.array_length), "]"),
        array_member_type_desc: $ => choice(
            $.type_desc
        ),
        array_length:       $ => choice(
            $.int_literal,
            $.const_reference_expr
        ),

        primary_type_desc:  $ => choice(
            $.builtin_type_name,
            $.nil_type_desc,
            $.singleton_type_desc,
            seq("(", $.type_desc, ")"),
            $.type_reference,
            $.map_type_desc,
            $.record_type_desc,
            $.tuple_type_desc
        ),

        builtin_type_name:  $ => choice(
            "any",
            "anydata",
            "boolean",
            "byte",
            "int",
            "float",
            "string",
            "error",
            "int",
            "boolean"
        ),
         
        nil_type_desc:      $ => $.nil_literal,
        singleton_type_desc:$ => $.simple_const_expr,
        type_reference:     $ => choice(
            $.identifier,
            $.qualified_identifier
        ),

        map_type_desc:      $ => seq("map", "<", $.type_desc, ">"),

        record_type_desc:   $ => choice(
            $.inclusive_record_type_desc,
            $.exclusive_record_type_desc
        ),
        inclusive_record_type_desc: $ => seq("record", "{", repeat($.field_desc), "}"),
        exclusive_record_type_desc: $ => seq("record", "{|", repeat($.field_desc), optional($.rest_field_desc), "|}"),
        field_desc:         $ => choice($.individual_field_desc, $.record_type_inclusion),
        individual_field_desc: $ => seq(optional("readonly"), $.type_desc, $.field_name,
            optional(choice("?",
                            seq("=", $.default_expression))),
            ";"),
        field_name:         $ => $.identifier,
        default_expression: $ => $.expression,
        record_type_inclusion: $ => seq("*", $.type_reference, ";"),
        rest_field_desc:    $ => seq($.type_desc, "...", ";"),

        tuple_type_desc:    $ => seq("[", $.tuple_member_type_desc_list, "]"),
        tuple_member_type_desc_list: $ => choice(
            seq($.type_desc, repeat(seq(",", $.type_desc)), optional(seq(",", $.tuple_rest_desc))),
            $.tuple_rest_desc
        ),
        tuple_rest_desc:    $ => seq($.type_desc, "..."),

        param_list:         $ => seq($.param, repeat(seq(",", $.param)), optional(seq(",", $.rest_param))),
        param:              $ => seq($.type_desc, $.identifier),
        rest_param:         $ => seq($.type_desc, "...", $.identifier),

        stmt_block:         $ => seq("{", repeat($.statement), "}"),

        statement:          $ => choice(
            $.local_var_decl_stmt,
            $.call_stmt,
            $.assign_stmt,
            $.compound_assign_stmt,
            $.destructuring_assign_stmt,
            $.return_stmt,
            $.if_else_stmt,
            $.while_stmt,
            $.break_stmt,
            $.continue_stmt,
            $.foreach_stmt,
            $.panic_stmt,
            $.match_stmt
        ),

        local_var_decl_stmt: $ => seq(optional("final"), $.typed_binding_pattern, "=", $.expression, ";"),
        binding_pattern:     $ => choice(
            $.identifier,
            $.wildcard_binding_pattern
        ),

        call_stmt:           $ => seq($.call_expr, ";"),
        call_expr:           $ => choice(
            $.function_call_expr,
            $.method_call_expr,
            seq($.checking_keyword, $.call_expr)
        ),

        function_call_expr:  $ => seq($.function_call_expr, ";"),

        assign_stmt:         $ => seq($.lvexpr, "=", $.expression, ";"),
        compound_assign_stmt:$ => seq($.lvexpr, $.compound_assignment_operator, $.expression, ";"),
        destructuring_assign_stmt: $ => seq($.wildcard_binding_pattern, "=", $.expression, ";"),
        
        wildcard_binding_pattern: $ => "_",

        lvexpr:              $ => choice(
            $.variable_reference_expr,
            $.field_access_lvexpr,
            $.member_access_lvexpr,
        ),
        variable_reference_expr: $ => $.identifier,
        field_access_lvexpr: $ => prec.left(seq($.lvexpr, ".", $.identifier)),
        member_access_lvexpr:$ => seq($.lvexpr, "[", $.expression, "]"),

        return_stmt:         $ => seq("return", optional($.expression), ";"),

        if_else_stmt:        $ => seq("if", $.expression, $.stmt_block, optional(seq("else", choice($.if_else_stmt, $.stmt_block)))),
        while_stmt:          $ => seq("while", $.expression, $.stmt_block),
        break_stmt:          $ => seq("break", ";"),
        continue_stmt:       $ => seq("continue", ";"),
        foreach_stmt:        $ => seq("foreach", "int", $.identifier, "in", $.additive_expr, "..<", $.additive_expr, $.stmt_block),

        panic_stmt:          $ => seq("panic", $.inner_expr, ";"),

        match_stmt:          $ => seq("match", $.inner_expr, "{", repeat1($.match_clause), "}"),
        match_clause:        $ => seq($.match_pattern_list, "=>", $.stmt_block),
        match_pattern_list:  $ => choice(
            $.match_pattern,
            seq($.match_pattern_list, "|", $.match_pattern)
        ),
        match_pattern:       $ => choice(
            $.wildcard_binding_pattern,
            $.simple_const_expr
        ),

        simple_const_expr:   $ => choice(
            $.literal,
            seq("-", $.int_literal),
            seq("-", $.floating_point_literal),
            $.const_reference_expr
        ),

        expression:          $ => choice(
            $.inner_expr,
            $.list_constructor_expr,
            $.mapping_constructor_expr,
            $.query_expr
        ),
        const_expr:          $ => $.inner_expr,
        const_reference_expr:$ => choice($.identifier, $.qualified_identifier),
        
        inner_expr:          $ => $.logical_or_expr,

        logical_or_expr:     $ => choice(
            $.logical_and_expr,
            seq($.logical_or_expr, "||", $.logical_and_expr)
        ),
        logical_and_expr:    $ => choice(
            $.bitwise_xor_expr,
            seq($.bitwise_or_expr, "|", $.bitwise_xor_expr)
        ),
        bitwise_or_expr:    $ => choice(
            $.bitwise_xor_expr,
            seq($.bitwise_or_expr, "|", $.bitwise_xor_expr)
        ),
        bitwise_xor_expr:    $ => choice(
            $.bitwise_and_expr,
            seq($.bitwise_xor_expr, "^", $.bitwise_and_expr)
        ),
        bitwise_and_expr:    $ => choice(
            $.equality_expr,
            seq($.bitwise_and_expr, "&", $.equality_expr)
        ),


        equality_expr:       $ => choice(
            $.relational_expr,
            seq($.equality_expr, "==", $.relational_expr),
            seq($.equality_expr, "!=", $.relational_expr),
            seq($.equality_expr, "===", $.relational_expr),
            seq($.equality_expr, "!==", $.relational_expr)
        ),
        relational_expr:     $ => choice(
            $.shift_expr,
            seq($.shift_expr, "<", $.shift_expr),
            seq($.shift_expr, "<=", $.shift_expr),
            seq($.shift_expr, ">", $.shift_expr),
            seq($.shift_expr, ">=", $.shift_expr),
            seq($.shift_expr, optional("!"), "is", $.type_desc),
        ),
        shift_expr:          $ => choice(
            $.additive_expr,
            seq($.shift_expr, "<<", $.additive_expr),
            seq($.shift_expr, ">>", $.additive_expr),
            seq($.shift_expr, ">>>", $.additive_expr),
        ),
        additive_expr:       $ => choice(
            $.multiplicative_expr,
            seq($.additive_expr, "+", $.multiplicative_expr),
            seq($.additive_expr, "-", $.multiplicative_expr)
        ),
        multiplicative_expr: $ => choice(
            $.unary_expr,
            seq($.multiplicative_expr, "*", $.unary_expr),
            seq($.multiplicative_expr, "/", $.unary_expr),
            seq($.multiplicative_expr, "%", $.unary_expr)
        ),

        unary_expr:          $ => prec(1, choice(
            $.primary_expr,
            seq("-", $.unary_expr),
            seq("~", $.unary_expr),
            $.type_cast_expr,
            $.checking_expr
        )),
        type_cast_expr:      $ => prec(1, seq("<", $.type_desc, ">", $.unary_expr)),
        checking_expr:       $ => prec(1, seq($.checking_keyword, $.unary_expr)),
        checking_keyword:    $ => choice(
            "check",
            "checkpanic"
        ),
        primary_expr:        $ => choice(
            $.literal,
            $.error_constructor_expr,
            $.member_access_expr,
            $.field_access_expr,
            $.function_call_expr,
            $.method_call_expr,
            $.variable_reference_expr,
            $.conditional_expr,
            seq("(", $.inner_expr, ")")
        ),

        query_expr:          $ => prec.left(seq(optional($.query_construct_type), $.query_pipeline, $.select_clause, optional($.on_conflict_clause))),
        query_construct_type:$ => choice("map", "stream"), // TODO: add table
        query_pipeline:      $ => seq($.from_clause, repeat($.intermediate_clause)),
        intermediate_clause: $ => choice(
            $.from_clause,
            $.where_clause,
            $.let_clause,
            $.join_clause,
            $.order_by_clause,
            $.limit_clause
        ),
        // TODO add keywords to highlight
        from_clause:         $ => seq("from", $.typed_binding_pattern, "in", $.expression),

        where_clause:        $ => seq("where", $.expression),

        let_clause:          $ => seq("let", $.let_var_decl, repeat(seq(",", $.let_var_decl))),
        join_clause:         $ => seq(optional("outer"), "join", $.typed_binding_pattern, "in", $.expression, $.join_on_condition),
        join_on_condition:   $ => seq("on", $.expression, "equals", $.expression),

        order_by_clause:     $ => seq("order", "by", $.order_key, repeat(seq(",", $.order_key))),
        order_key:           $ => seq($.expression, optional($.order_direction)),
        order_direction:     $ => choice("ascending", "descending"),

        limit_clause:        $ => seq("limit", $.expression),

        select_clause:       $ => prec.left(seq("select", $.expression)),

        on_conflict_clause:  $ => prec.left(seq("on", "conflict", $.expression)),

        typed_binding_pattern:$ => seq($.inferable_type_desc, $.binding_pattern),
        inferable_type_desc: $ => choice("var", $.type_desc),

        let_var_decl:        $ => seq($.typed_binding_pattern, "=", $.expression),

        literal:             $ => choice(
            $.nil_literal,
            $.boolean_literal,
            $.int_literal,
            $.floating_point_literal, 
            $.string_literal
        ),
        nil_literal:         $ => choice(seq("(",")"), "null"),
        boolean_literal:     $ => choice("true", "false"),
        
        error_constructor_expr:$ => seq("error", "(", $.inner_expr, ")"),
        list_constructor_expr: $ => seq("[", optional($.expr_list), "]"),
        expr_list:           $ => seq($.expression, repeat(seq(",", $.expression))),
        mapping_constructor_expr:$ => seq("{", optional($.field_list), "}"),
        field_list:          $ => seq($.field, repeat(seq(",", $.field))),
        field:               $ => seq($.field_name, ":", $.expression),

        member_access_expr:  $ => seq($.primary_expr, "[", $.expression, "]"),
        field_access_expr:   $ => prec.left(seq($.primary_expr, ".", $.expression)),

        function_call_expr:  $ => seq($.function_reference, $.arg_list),
        method_call_expr:    $ => seq($.primary_expr, ".", $.identifier, $.arg_list),
        arg_list:            $ => seq("(", optional($.expr_list), ")"),
        function_reference:  $ => choice($.identifier, $.qualified_identifier),

        qualified_identifier:$ => seq($.module_prefix, ":", $.identifier),
        module_prefix:       $ => choice($.identifier),

        variable_reference_expr: $ => choice(
            $.identifier,
            $.qualified_identifier
        ),

        conditional_expr:    $ => choice(
            $.ternary_conditional_expr,
            $.nil_conditional_expr
        ),
        ternary_conditional_expr: $ => prec.left(seq($.expression, "?", $.expression, ":", $.expression)),
        nil_conditional_expr: $ => prec.left(seq($.expression, "?:", $.expression)),


        int_literal:         $ => prec(1, choice(
            $.decimal_number,
            $.hex_int_literal
        )),
        decimal_number:      $ => choice(
            "0",
            seq($.non_zero_digit, repeat($.digit))
        ),
        non_zero_digit:      $ =>/[1-9]/,
        digit:               $ =>/[0-9]/,
        hex_int_literal:     $ => seq($.hex_indicator, $.hex_number),
        hex_indicator:       $ => seq("0x", "0X"),
        hex_number:          $ => repeat1($.hex_digit),
        hex_digit:           $ => choice($.digit, /[a-f]/, /[A-F]/),

        floating_point_literal:$ => choice($.decimal_floating_point_number, $.hex_floating_point_literal),
        decimal_floating_point_number: $ => choice(
            seq($.decimal_number, $.exponent, optional($.floating_point_type_suffix)),
            seq($.dotted_decimal_number, optional($.exponent), optional($.floating_point_type_suffix)),
            seq($.decimal_number, $.floating_point_type_suffix)
        ),
        dotted_decimal_number:$ => choice(
            seq($.decimal_number, ".", repeat1($.digit)),
            seq(".", repeat1($.digit))
        ),
        exponent:            $ => seq($.exponent_indicator, optional($.sign), repeat1($.digit)),
        exponent_indicator:  $ => choice("e", "E"),
        hex_floating_point_literal: $ => seq($.hex_indicator, $.hex_floating_point_number),
        hex_floating_point_number: $ => choice(
            seq($.hex_number, $.hex_exponent),
            seq($.dotted_hex_number, optional($.hex_exponent))
        ),
        dotted_hex_number:   $ => choice(
            seq($.hex_number, ".", $.hex_number),
            seq(".", $.hex_number)
        ),
        hex_exponent:        $ => seq($.hex_exponent_indicator, optional($.sign), repeat1($.digit)),
        hex_exponent_indicator: $ => choice("p", "P"),
        sign:                $ => choice("+", "-"),
        floating_point_type_suffix: $ => choice($.decimal_type_suffix, $.float_type_suffix),
        decimal_type_suffix: $ => choice("d", "D"),
        float_type_suffix:   $ => choice("f", "F"),

        identifier:          $ => /[A-Za-z][A-Za-z0-9_]*/,
        compound_assignment_operator: $ => seq($.binary_operator, "="),
        binary_operator:     $ => choice("+", "-", "*", "/", "&", "|", "^", "<<", ">>", ">>>"),
        string_literal:      $ => $.double_quoted_string_literal,
        double_quoted_string_literal: $ => seq('"', repeat(choice(token.immediate(prec(1, $.string_char)), $.string_escape)), '"'),
        string_char:         $ => /[^\\"\n]+/,
        string_escape:       $ => choice($.string_single_escpace, $.numeric_escape),
        string_single_escpace: $ => choice("\t", "\n", "\r", "\\"),
        numeric_escape:      $ => seq("\\u", "{", $.code_point, "}"),
        code_point:          $ => repeat1($.hex_digit),
        comment:             $ => seq('//', /(\\(.|\r?\n)|[^\\\n])*/)
    },
    conflicts: $ => [
        [$.type_reference, $.const_reference_expr],
        [$.literal, $.nil_type_desc],
        [$.array_type_desc],
        [$.type_reference, $.const_reference_expr, $.variable_reference_expr],
        [$.primary_expr, $.lvexpr], // both can be variable_reference_expr
        [$.primary_expr, $.simple_const_expr], // both can  be literals
        [$.literal, $.simple_const_expr], // both can be floating_point_literal

        // we need look ahead for these
        [$.method_call_expr, $.function_reference],
        [$.method_call_expr, $.field_access_expr, $.unary_expr],
        [$.member_access_expr, $.unary_expr],

        [$.type_desc, $.union_type_desc],
        [$.type_desc, $.intersection_type_desc],
        [$.union_type_desc, $.intersection_type_desc],

        [$.inner_expr, $.logical_or_expr],
        [$.logical_and_expr, $.bitwise_or_expr],
        [$.logical_and_expr, $.bitwise_xor_expr],
        [$.bitwise_or_expr, $.bitwise_xor_expr],
        [$.bitwise_and_expr, $.bitwise_xor_expr],

        [$.bitwise_and_expr, $.equality_expr],

        [$.relational_expr, $.shift_expr],
        [$.additive_expr, $.shift_expr],
        [$.additive_expr, $.multiplicative_expr],

        [$.array_member_type_desc, $.relational_expr],

        [$.union_type_desc],
        [$.intersection_type_desc],
        [$.relational_expr],

        [$.logical_or_expr],
        [$.bitwise_or_expr],
        [$.logical_and_expr],
        [$.bitwise_and_expr],
        [$.bitwise_xor_expr],
        [$.equality_expr],

        [$.shift_expr],
        [$.additive_expr],
        [$.multiplicative_expr],

        [$.hex_int_literal, $.dotted_hex_number],
        [$.variable_reference_expr, $.module_prefix],

        [$.type_reference, $.const_reference_expr, $.module_prefix]
    ],
});
