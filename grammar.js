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
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
