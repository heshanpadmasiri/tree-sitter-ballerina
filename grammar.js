/**
 * @file Tree sitter parser for Ballerina
 * @author Heshan Padmasiri <hpheshan@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "tree_sitter_ballerina",

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
      seq("(", $._type_descriptor, ")")
    ),
    basic_type: $ => choice(
      "int",
      "float",
      "string",
      "boolean",
      $.nil_literal
    ),
    nil_literal: $ => choice("null", "()"),
    _union_type: $ => prec.left(seq($._type_descriptor, "|", $._type_descriptor)),
    _intersection_type: $ => prec.left(seq($._type_descriptor, "&", $._type_descriptor)),
    _optional_type: $ => prec.left(seq($._type_descriptor, "?")),
    _distinct_type: $ => prec.left(seq("distinct", $._type_descriptor)),
    _type_reference: $ => $.identifier,

    word: $ => $.identifier,

    identifier: $ => /[a-zA-Z_]\w*/, // This is strictly not correct according to spec but good enough for now
  }
});
