module.exports = grammar({
    name: "ballerina",

    extras: $ => [
        /\s|\\\r?\n/,
        $.comment,
    ],

    rules: {
        source_file:        $ => $.identifier,

        identifier:         $ => choice($.unquoted_identifier, $.quoted_identifier),
        unquoted_identifier:$ => seq(choice($.identifier_intial_char, $.identifier_escape), choice($.identifier_fallowing_char, $.identifier_escape)),
        quoted_identifier:  $ => seq("'", repeat1(choice($.identifier_fallowing_char, $.identifier_escape))),
        identifier_intial_char:$ => choice($.ascii_letter, "_"), // TODO: unicode
        identifier_fallowing_char:$ => choice($.identifier_intial_char, $.digit),
        identifier_escape:  $ => choice($.identifier_single_escapce, $.numeric_escape),
        identifier_single_escapce: $ => /\\[^a-zA-Z_]/, // TODO: unicode
        numeric_escape:     $ => seq("\\u{", $.code_point, "}"),
        code_point:         $ => repeat1($.hex_digit),
        ascii_letter:       $ => /[a-zA-Z]/,
        hex_digit:          $ => choice($.digit, /[a-fA-F]/),
        digit:              $ => /[0-9]/,
        

        comment:            $ => seq('//', /(\\(.|\r?\n)|[^\\\n])*/)
    },
    conflicts: $ => [
    ],
});
