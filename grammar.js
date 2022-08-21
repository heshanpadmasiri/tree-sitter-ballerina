module.exports = grammar({
    name: "Ballerina",

    rules: {
        source_file:        $ => $.module_part,
        module_part:        $ => seq(repeat($.import_decl), repeat1($.module_decl)),
        import_decl:        $ => seq("import", $.identifier, "/", $.identifier, ";"),
        module_decl:        $ => choice(
            $.function_defn
        ),
        function_defn:      $ => seq(optional("public"), "function", $.identifier, $.signature, $.stmt_block),
        signature:          $ => seq("(", optional($.param_list), ")", optional(seq("returns", $.type_desc))),
        type_desc:          $ => choice(
            $.basic_type_name,
        ),
        basic_type_name:    $ => choice("int", "boolean"),
        param_list:         $ => seq($.param, repeat(seq(",", $.param))),
        param:              $ => seq($.type_desc, $.identifier),
        stmt_block:         $ => seq("{", repeat($.statement), "}"),
        statement:          $ => choice(
            $.local_var_decl_stmt,
            $.function_call_stmt,
            $.assing_stmt,
            $.return_stmt,
            $.if_else_stmt,
            $.while_stmt,
            $.break_stmt,
            $.continue_stmt
        ),
        local_var_decl_stmt: $ => seq($.type_desc, $.identifier, "=", $.expression, ";"),
        function_call_stmt:  $ => seq($.function_call_expr, ";"),
        assing_stmt:         $ => seq($.lvexpr, "=", $.expression, ";"),
        lvexpr:              $ => choice(
            $.identifier
        ),
        return_stmt:         $ => seq("return", optional($.expression), ";"),
        if_else_stmt:        $ => seq("if", $.expression, optional(seq("else", choice($.if_else_stmt, $.stmt_block)))),
        while_stmt:          $ => seq("while", $.expression, $.stmt_block),
        break_stmt:          $ => seq("break", ";"),
        continue_stmt:       $ => seq("continue", ";"),
        expression:          $ => choice(
            $.equality_expr
        ),
        equality_expr:       $ => choice(
            $.relational_expr,
            seq($.equality_expr, "==", $.relational_expr),
            seq($.equality_expr, "!=", $.relational_expr)
        ),
        relational_expr:     $ => choice(
            $.additive_expr,
            seq($.additive_expr, "<", $.additive_expr),
            seq($.additive_expr, "<=", $.additive_expr),
            seq($.additive_expr, ">", $.additive_expr),
            seq($.additive_expr, ">=", $.additive_expr)
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
        unary_expr:          $ => choice(
            $.primary_expr,
            seq("-", $.unary_expr)
        ),
        primary_expr:        $ => choice(
            $.literal,
            $.function_call_expr,
            $.variable_reference_expr,
            seq("(", $.expression, ")")
        ),
        literal:             $ => choice(
            $.integer_literal,
            $.boolean_literal
        ),
        boolean_literal:     $ => choice("true", "false"),
        function_call_expr:  $ => seq($.function_reference, $.arg_list),
        arg_list:            $ => seq("(", optional($.expr_list), ")"),
        function_reference:  $ => choice($.identifier, $.qualified_identifier),
        qualified_identifier:$ => seq($.module_prefix, ":", $.identifier),
        module_prefix:       $ => choice($.identifier),
        expr_list:           $ => seq($.expression, repeat(seq(",", $.expression))),
        variable_reference_expr: $ => choice($.identifier),
        integer_literal:     $ => choice(
            "0",
            /[1-9][0-9]*/,
        ),
        identifier:          $ => /[A-Za-z][A-Za-z0-9_]*/
    }
});
