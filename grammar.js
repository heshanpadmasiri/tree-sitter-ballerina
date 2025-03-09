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
    type_decl: $ => seq(optional("public"), "type", $.identifier, $.type_descriptor, ";"),
    type_descriptor: $ => choice(
      $._basic_type,
      $._union_type,
      $._intersection_type,
      $._optional_type,
      $._distinct_type),
    _basic_type: $ => choice(
      "int",
      "float",
      "string",
      "boolean",
      $._nil_literal
    ),
    _nil_literal: $ => choice("null", "()"),
    _union_type: $ => prec.left(seq($.type_descriptor, "|", $.type_descriptor)),
    _intersection_type: $ => prec.left(seq($.type_descriptor, "&", $.type_descriptor)),
    _optional_type: $ => prec.left(seq($.type_descriptor, "?")),
    _distinct_type: $ => prec.left(seq("distinct", $.type_descriptor)),

    word: $ => $.identifier,

    identifier: $ => /[a-zA-Z_]\w*/, // This is strictly not correct according to spec but good enough for now
  }
});
