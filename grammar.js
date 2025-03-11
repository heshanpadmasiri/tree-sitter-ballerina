/**
 * @file Tree sitter parser for Ballerina
 * @author Heshan Padmasiri <hpheshan@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "tree_sitter_ballerina",

  conflicts: $ => [
    [$._required_params],
    [$._included_record_params],
    [$.function_type, $.object_type],
  ],
  rules: {
    source_file: $ => repeat($._module_decl),
    _module_decl: $ => choice(
      $.type_decl
    ),
    type_decl: $ => seq(optional("public"), "type", $.identifier, $._type_descriptor, ";"),
    _type_descriptor: $ => choice(
      $.basic_type,
      $._union_type,
      $._intersection_type,
      $._optional_type,
      $._distinct_type,
      $._type_reference,
      $.array_type,
      $.tuple_type,
      $.map_type,
      $.record_type,
      $.function_type,
      $.object_type,
      seq("(", $._type_descriptor, ")")
    ),
    basic_type: $ => choice(
      "int",
      "float",
      "string",
      "boolean",
      "map",
      $.nil_literal
    ),
    nil_literal: $ => choice("null", "()"),
    _union_type: $ => prec.left(seq($._type_descriptor, "|", $._type_descriptor)),
    _intersection_type: $ => prec.left(seq($._type_descriptor, "&", $._type_descriptor)),
    _optional_type: $ => prec.left(seq($._type_descriptor, "?")),
    _distinct_type: $ => prec.left(seq("distinct", $._type_descriptor)),
    _type_reference: $ => choice($.identifier, $.qualified_identifier),

    array_type: $ => prec.left(seq($._type_descriptor, $._array_dimension, repeat($._array_dimension))),
    _array_dimension: $ => seq("[", optional($._array_length), "]"),
    _array_length: $ => choice($._int_literal, "*"),

    tuple_type: $ => seq("[", $._tuple_members, "]"),
    _tuple_members: $ => choice(
      seq($._type_descriptor, (repeat(prec.left(seq(",", $._type_descriptor)))), optional(seq(",", $._tuple_rest))),
      $._tuple_rest
    ),
    _tuple_rest: $ => seq($._type_descriptor, "..."),

    map_type: $ => seq("map", "<", $._type_descriptor, ">"),

    record_type: $=> choice($._inclusive_record_type_desc, $._exclusive_record_type_desc),
    _inclusive_record_type_desc: $=> seq("record", "{", repeat($._field_desc), "}"),
    _exclusive_record_type_desc: $=> seq("record", "{|", repeat($._field_desc), optional($._record_rest), "|}"),
    _field_desc: $ => choice($._individual_field_desc, $._type_inclusion),
    // TODO: add default expressions
    _individual_field_desc: $ => seq(optional("readonly"), $._type_descriptor, $.identifier, optional("?"), ";"),
    _type_inclusion: $=> seq("*", $._type_reference),
    _record_rest: $ => seq($._type_descriptor, "...", ";"),

    function_type: $ => seq(optional($._function_quals), "function", $._function_signature),
    _function_signature: $ => seq("(", optional($._function_params), ")", optional($._return_type_desc)),
    _function_quals: $ => repeat1(choice("isolated", "transactional")),
    _function_params: $ => choice(
      // TODO: also add defaultable params
      seq($._required_params, optional(seq(",", $._included_record_params)), optional(seq(",", $._rest_param))),
      seq($._included_record_params, optional(seq(",", $._rest_param))),
      $._rest_param),
    _required_params: $ => seq($._type_descriptor, optional($.identifier), repeat(seq(",", $._type_descriptor, optional($.identifier)))),
    _included_record_params: $ => seq($._included_record_param, repeat(seq(",", $._included_record_param))),
    _included_record_param: $ => seq("*", $._type_reference, optional($.identifier)),
    _rest_param: $ => seq($._type_descriptor, "...", optional($.identifier)),
    _return_type_desc: $ => prec.right(seq("returns", $._type_descriptor)),

    object_type: $ => seq(optional($._object_quals), "object", "{", repeat($._object_member), "}"),
    _object_quals: $ => repeat1(choice("isolated", choice("client", "service"))),
    _object_member: $ => choice(
      $.object_field,
      $.method_decl,
      // TODO: add remote and resource methods as well
      $._type_inclusion
    ),
    object_field: $ => seq(optional("public"), $.identifier, $._type_descriptor, ";"),
    method_decl: $ => seq(optional("public"), optional($._function_quals) ,"function", $.identifier,  $._function_signature , ";"),

    
    word: $ => $.identifier,

    qualified_identifier: $ => seq($.identifier, ":", $.identifier),
    identifier: $ => /[a-zA-Z_]\w*/, // This is strictly not correct according to spec but good enough for now
    _int_literal: $ => /[0-9]+/,
  },
});
