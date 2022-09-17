#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_import = 1,
  anon_sym_SLASH = 2,
  anon_sym_as = 3,
  anon_sym_SEMI = 4,
  anon_sym_DOT = 5,
  anon_sym_public = 6,
  anon_sym_function = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_const = 10,
  anon_sym_EQ = 11,
  anon_sym_type = 12,
  anon_sym_PIPE = 13,
  anon_sym_AMP = 14,
  anon_sym_QMARK = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_any = 18,
  anon_sym_anydata = 19,
  anon_sym_boolean = 20,
  anon_sym_byte = 21,
  anon_sym_int = 22,
  anon_sym_float = 23,
  anon_sym_string = 24,
  anon_sym_error = 25,
  anon_sym_map = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_record = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_LBRACE_PIPE = 32,
  anon_sym_PIPE_RBRACE = 33,
  anon_sym_DOT_DOT_DOT = 34,
  anon_sym_COMMA = 35,
  anon_sym_final = 36,
  sym_wildcard_binding_pattern = 37,
  anon_sym_return = 38,
  anon_sym_if = 39,
  anon_sym_else = 40,
  anon_sym_while = 41,
  anon_sym_break = 42,
  anon_sym_continue = 43,
  anon_sym_foreach = 44,
  anon_sym_in = 45,
  anon_sym_DOT_DOT_LT = 46,
  anon_sym_panic = 47,
  anon_sym_match = 48,
  anon_sym_EQ_GT = 49,
  anon_sym_DASH = 50,
  anon_sym_PIPE_PIPE = 51,
  anon_sym_CARET = 52,
  anon_sym_EQ_EQ = 53,
  anon_sym_BANG_EQ = 54,
  anon_sym_EQ_EQ_EQ = 55,
  anon_sym_BANG_EQ_EQ = 56,
  anon_sym_LT_EQ = 57,
  anon_sym_BANG = 58,
  anon_sym_is = 59,
  anon_sym_PLUS = 60,
  anon_sym_STAR = 61,
  anon_sym_PERCENT = 62,
  anon_sym_TILDE = 63,
  anon_sym_check = 64,
  anon_sym_null = 65,
  anon_sym_true = 66,
  anon_sym_false = 67,
  anon_sym_COLON = 68,
  anon_sym_0 = 69,
  aux_sym_int_literal_token1 = 70,
  sym_floating_point_literal = 71,
  sym_identifier = 72,
  sym_string_literal = 73,
  anon_sym_SLASH_SLASH = 74,
  aux_sym_comment_token1 = 75,
  sym_source_file = 76,
  sym_module_part = 77,
  sym_import_decl = 78,
  sym_org_name = 79,
  sym_module_name = 80,
  sym_import_prefix = 81,
  sym_module_defn = 82,
  sym_type_defn = 83,
  sym_type_desc = 84,
  sym_union_type_desc = 85,
  sym_intersection_type_desc = 86,
  sym_postfix_type_desc = 87,
  sym_optional_type_desc = 88,
  sym_array_type_desc = 89,
  sym_array_dimensions = 90,
  sym_array_member_type_desc = 91,
  sym_array_length = 92,
  sym_primary_type_desc = 93,
  sym_builtin_type_name = 94,
  sym_nil_type_desc = 95,
  sym_singleton_type_desc = 96,
  sym_type_reference = 97,
  sym_map_type_desc = 98,
  sym_record_type_desc = 99,
  sym_inclusive_record_type_desc = 100,
  sym_exclusive_record_type_desc = 101,
  sym_field_desc = 102,
  sym_rest_field_desc = 103,
  sym_tuple_type_desc = 104,
  sym_tuple_member_type_desc_list = 105,
  sym_tuple_rest_desc = 106,
  sym_simple_const_expr = 107,
  sym_const_reference_expr = 108,
  sym_literal = 109,
  sym_nil_literal = 110,
  sym_boolean_literal = 111,
  sym_qualified_identifier = 112,
  sym_module_prefix = 113,
  sym_int_literal = 114,
  sym_comment = 115,
  aux_sym_module_part_repeat1 = 116,
  aux_sym_module_part_repeat2 = 117,
  aux_sym_array_type_desc_repeat1 = 118,
  aux_sym_inclusive_record_type_desc_repeat1 = 119,
  aux_sym_tuple_member_type_desc_list_repeat1 = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_SLASH] = "/",
  [anon_sym_as] = "as",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_public] = "public",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_type] = "type",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_any] = "any",
  [anon_sym_anydata] = "anydata",
  [anon_sym_boolean] = "boolean",
  [anon_sym_byte] = "byte",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_string] = "string",
  [anon_sym_error] = "error",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_record] = "record",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_PIPE] = "{|",
  [anon_sym_PIPE_RBRACE] = "|}",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_COMMA] = ",",
  [anon_sym_final] = "final",
  [sym_wildcard_binding_pattern] = "wildcard_binding_pattern",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_foreach] = "foreach",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT_LT] = "..<",
  [anon_sym_panic] = "panic",
  [anon_sym_match] = "match",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_BANG_EQ_EQ] = "!==",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG] = "!",
  [anon_sym_is] = "is",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_TILDE] = "~",
  [anon_sym_check] = "check",
  [anon_sym_null] = "null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLON] = ":",
  [anon_sym_0] = "0",
  [aux_sym_int_literal_token1] = "int_literal_token1",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym_module_part] = "module_part",
  [sym_import_decl] = "import_decl",
  [sym_org_name] = "org_name",
  [sym_module_name] = "module_name",
  [sym_import_prefix] = "import_prefix",
  [sym_module_defn] = "module_defn",
  [sym_type_defn] = "type_defn",
  [sym_type_desc] = "type_desc",
  [sym_union_type_desc] = "union_type_desc",
  [sym_intersection_type_desc] = "intersection_type_desc",
  [sym_postfix_type_desc] = "postfix_type_desc",
  [sym_optional_type_desc] = "optional_type_desc",
  [sym_array_type_desc] = "array_type_desc",
  [sym_array_dimensions] = "array_dimensions",
  [sym_array_member_type_desc] = "array_member_type_desc",
  [sym_array_length] = "array_length",
  [sym_primary_type_desc] = "primary_type_desc",
  [sym_builtin_type_name] = "builtin_type_name",
  [sym_nil_type_desc] = "nil_type_desc",
  [sym_singleton_type_desc] = "singleton_type_desc",
  [sym_type_reference] = "type_reference",
  [sym_map_type_desc] = "map_type_desc",
  [sym_record_type_desc] = "record_type_desc",
  [sym_inclusive_record_type_desc] = "inclusive_record_type_desc",
  [sym_exclusive_record_type_desc] = "exclusive_record_type_desc",
  [sym_field_desc] = "field_desc",
  [sym_rest_field_desc] = "rest_field_desc",
  [sym_tuple_type_desc] = "tuple_type_desc",
  [sym_tuple_member_type_desc_list] = "tuple_member_type_desc_list",
  [sym_tuple_rest_desc] = "tuple_rest_desc",
  [sym_simple_const_expr] = "simple_const_expr",
  [sym_const_reference_expr] = "const_reference_expr",
  [sym_literal] = "literal",
  [sym_nil_literal] = "nil_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_module_prefix] = "module_prefix",
  [sym_int_literal] = "int_literal",
  [sym_comment] = "comment",
  [aux_sym_module_part_repeat1] = "module_part_repeat1",
  [aux_sym_module_part_repeat2] = "module_part_repeat2",
  [aux_sym_array_type_desc_repeat1] = "array_type_desc_repeat1",
  [aux_sym_inclusive_record_type_desc_repeat1] = "inclusive_record_type_desc_repeat1",
  [aux_sym_tuple_member_type_desc_list_repeat1] = "tuple_member_type_desc_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_anydata] = anon_sym_anydata,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_PIPE] = anon_sym_LBRACE_PIPE,
  [anon_sym_PIPE_RBRACE] = anon_sym_PIPE_RBRACE,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_final] = anon_sym_final,
  [sym_wildcard_binding_pattern] = sym_wildcard_binding_pattern,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT_LT] = anon_sym_DOT_DOT_LT,
  [anon_sym_panic] = anon_sym_panic,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_BANG_EQ_EQ] = anon_sym_BANG_EQ_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_0] = anon_sym_0,
  [aux_sym_int_literal_token1] = aux_sym_int_literal_token1,
  [sym_floating_point_literal] = sym_floating_point_literal,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym_module_part] = sym_module_part,
  [sym_import_decl] = sym_import_decl,
  [sym_org_name] = sym_org_name,
  [sym_module_name] = sym_module_name,
  [sym_import_prefix] = sym_import_prefix,
  [sym_module_defn] = sym_module_defn,
  [sym_type_defn] = sym_type_defn,
  [sym_type_desc] = sym_type_desc,
  [sym_union_type_desc] = sym_union_type_desc,
  [sym_intersection_type_desc] = sym_intersection_type_desc,
  [sym_postfix_type_desc] = sym_postfix_type_desc,
  [sym_optional_type_desc] = sym_optional_type_desc,
  [sym_array_type_desc] = sym_array_type_desc,
  [sym_array_dimensions] = sym_array_dimensions,
  [sym_array_member_type_desc] = sym_array_member_type_desc,
  [sym_array_length] = sym_array_length,
  [sym_primary_type_desc] = sym_primary_type_desc,
  [sym_builtin_type_name] = sym_builtin_type_name,
  [sym_nil_type_desc] = sym_nil_type_desc,
  [sym_singleton_type_desc] = sym_singleton_type_desc,
  [sym_type_reference] = sym_type_reference,
  [sym_map_type_desc] = sym_map_type_desc,
  [sym_record_type_desc] = sym_record_type_desc,
  [sym_inclusive_record_type_desc] = sym_inclusive_record_type_desc,
  [sym_exclusive_record_type_desc] = sym_exclusive_record_type_desc,
  [sym_field_desc] = sym_field_desc,
  [sym_rest_field_desc] = sym_rest_field_desc,
  [sym_tuple_type_desc] = sym_tuple_type_desc,
  [sym_tuple_member_type_desc_list] = sym_tuple_member_type_desc_list,
  [sym_tuple_rest_desc] = sym_tuple_rest_desc,
  [sym_simple_const_expr] = sym_simple_const_expr,
  [sym_const_reference_expr] = sym_const_reference_expr,
  [sym_literal] = sym_literal,
  [sym_nil_literal] = sym_nil_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_module_prefix] = sym_module_prefix,
  [sym_int_literal] = sym_int_literal,
  [sym_comment] = sym_comment,
  [aux_sym_module_part_repeat1] = aux_sym_module_part_repeat1,
  [aux_sym_module_part_repeat2] = aux_sym_module_part_repeat2,
  [aux_sym_array_type_desc_repeat1] = aux_sym_array_type_desc_repeat1,
  [aux_sym_inclusive_record_type_desc_repeat1] = aux_sym_inclusive_record_type_desc_repeat1,
  [aux_sym_tuple_member_type_desc_list_repeat1] = aux_sym_tuple_member_type_desc_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anydata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [sym_wildcard_binding_pattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_panic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module_part] = {
    .visible = true,
    .named = true,
  },
  [sym_import_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_org_name] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_import_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_module_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_type_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_intersection_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_postfix_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_array_dimensions] = {
    .visible = true,
    .named = true,
  },
  [sym_array_member_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_array_length] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_nil_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_singleton_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_type_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_map_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_inclusive_record_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_exclusive_record_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_field_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_field_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_member_type_desc_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_rest_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_const_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_const_reference_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_nil_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_part_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_part_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_desc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inclusive_record_type_desc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_member_type_desc_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(120);
      if (lookahead == '!') ADVANCE(191);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '%') ADVANCE(195);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '0') ADVANCE(205);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '?') ADVANCE(137);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\\') SKIP(119)
      if (lookahead == ']') ADVANCE(139);
      if (lookahead == '^') ADVANCE(185);
      if (lookahead == '_') ADVANCE(169);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '~') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\r') ADVANCE(258);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(206);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'b') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(205);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == '>') ADVANCE(159);
      if (lookahead == '?') ADVANCE(137);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(139);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(166);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '<') ADVANCE(178);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(256);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(176);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'k') ADVANCE(174);
      END_STATE();
    case 61:
      if (lookahead == 'k') ADVANCE(197);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(155);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 113:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 114:
      if (lookahead == '}') ADVANCE(165);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 117:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(261);
      if (lookahead == '\r') ADVANCE(262);
      END_STATE();
    case 118:
      if (eof) ADVANCE(120);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 119:
      if (eof) ADVANCE(120);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(118)
      END_STATE();
    case 120:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(256);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(181);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '}') ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == 'd') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_anydata);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_anydata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_record);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '|') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACE_PIPE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_wildcard_binding_pattern);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_LT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(187);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (lookahead == '.') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 'y') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(117);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 259},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 10},
  [120] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_anydata] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [sym_wildcard_binding_pattern] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1),
    [anon_sym_panic] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [aux_sym_int_literal_token1] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(117),
    [sym_module_part] = STATE(116),
    [sym_import_decl] = STATE(81),
    [sym_module_defn] = STATE(76),
    [sym_type_defn] = STATE(71),
    [sym_comment] = STATE(1),
    [aux_sym_module_part_repeat1] = STATE(55),
    [aux_sym_module_part_repeat2] = STATE(58),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(21), 1,
      anon_sym_PIPE_RBRACE,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_inclusive_record_type_desc_repeat1,
    STATE(17), 1,
      sym_field_desc,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(69), 1,
      sym_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(94), 1,
      sym_rest_field_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [115] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_PIPE_RBRACE,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_inclusive_record_type_desc_repeat1,
    STATE(17), 1,
      sym_field_desc,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(69), 1,
      sym_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    STATE(112), 1,
      sym_rest_field_desc,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [230] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_record,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_null,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(17), 1,
      sym_field_desc,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(82), 1,
      sym_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(52), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE_RBRACE,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(66), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(4), 2,
      sym_comment,
      aux_sym_inclusive_record_type_desc_repeat1,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(43), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [341] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_inclusive_record_type_desc_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(17), 1,
      sym_field_desc,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(82), 1,
      sym_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [453] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_inclusive_record_type_desc_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(17), 1,
      sym_field_desc,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(82), 1,
      sym_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [565] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(7), 1,
      sym_comment,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(60), 1,
      sym_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(92), 1,
      sym_tuple_member_type_desc_list,
    STATE(106), 1,
      sym_module_prefix,
    STATE(107), 1,
      sym_tuple_rest_desc,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [674] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_comment,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(91), 1,
      sym_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [780] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(9), 1,
      sym_comment,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(61), 1,
      sym_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    STATE(115), 1,
      sym_tuple_rest_desc,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [886] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(10), 1,
      sym_comment,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(61), 1,
      sym_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(103), 1,
      sym_tuple_rest_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [992] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(11), 1,
      sym_comment,
    STATE(27), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(99), 1,
      sym_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [1095] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(12), 1,
      sym_comment,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(52), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(99), 1,
      sym_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [1198] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(13), 1,
      sym_comment,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(83), 1,
      sym_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [1301] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_comment,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(85), 1,
      sym_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [1404] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(15), 1,
      sym_comment,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(86), 1,
      sym_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [1507] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_map,
    ACTIONS(19), 1,
      anon_sym_record,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(16), 1,
      sym_comment,
    STATE(41), 1,
      sym_postfix_type_desc,
    STATE(46), 1,
      sym_simple_const_expr,
    STATE(48), 1,
      sym_nil_literal,
    STATE(49), 1,
      sym_qualified_identifier,
    STATE(51), 1,
      sym_intersection_type_desc,
    STATE(54), 1,
      sym_union_type_desc,
    STATE(72), 1,
      sym_array_member_type_desc,
    STATE(73), 1,
      sym_type_desc,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    ACTIONS(31), 2,
      sym_floating_point_literal,
      sym_string_literal,
    STATE(37), 2,
      sym_boolean_literal,
      sym_int_literal,
    STATE(45), 2,
      sym_inclusive_record_type_desc,
      sym_exclusive_record_type_desc,
    STATE(47), 2,
      sym_const_reference_expr,
      sym_literal,
    STATE(42), 3,
      sym_optional_type_desc,
      sym_array_type_desc,
      sym_primary_type_desc,
    STATE(44), 7,
      sym_builtin_type_name,
      sym_nil_type_desc,
      sym_singleton_type_desc,
      sym_type_reference,
      sym_map_type_desc,
      sym_record_type_desc,
      sym_tuple_type_desc,
    ACTIONS(15), 8,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
  [1610] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_comment,
    ACTIONS(78), 6,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PIPE_RBRACE,
      sym_floating_point_literal,
      sym_string_literal,
    ACTIONS(80), 17,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
      anon_sym_map,
      anon_sym_record,
      anon_sym_DASH,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0,
      aux_sym_int_literal_token1,
      sym_identifier,
  [1644] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(18), 1,
      sym_comment,
    ACTIONS(82), 6,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PIPE_RBRACE,
      sym_floating_point_literal,
      sym_string_literal,
    ACTIONS(84), 17,
      anon_sym_any,
      anon_sym_anydata,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_error,
      anon_sym_map,
      anon_sym_record,
      anon_sym_DASH,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_0,
      aux_sym_int_literal_token1,
      sym_identifier,
  [1678] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_array_dimensions,
    STATE(19), 2,
      sym_comment,
      aux_sym_array_type_desc_repeat1,
    ACTIONS(86), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1704] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym_array_type_desc_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(22), 1,
      sym_array_dimensions,
    ACTIONS(91), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1732] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(21), 1,
      sym_comment,
    ACTIONS(96), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1755] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(22), 1,
      sym_comment,
    ACTIONS(101), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1775] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(23), 1,
      sym_comment,
    ACTIONS(103), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1795] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(24), 1,
      sym_comment,
    ACTIONS(105), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1815] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym_comment,
    ACTIONS(107), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1835] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 1,
      sym_comment,
    ACTIONS(109), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1855] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(116), 1,
      anon_sym_QMARK,
    STATE(27), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
    ACTIONS(111), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1879] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_comment,
    ACTIONS(118), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1899] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_comment,
    ACTIONS(120), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1919] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 1,
      sym_comment,
    ACTIONS(122), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1939] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_comment,
    ACTIONS(124), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1959] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(32), 1,
      sym_comment,
    ACTIONS(126), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1979] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(33), 1,
      sym_comment,
    ACTIONS(128), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [1999] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 1,
      sym_comment,
    ACTIONS(130), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2019] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_comment,
    ACTIONS(132), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2039] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_comment,
    ACTIONS(134), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2059] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_comment,
    ACTIONS(136), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2079] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_comment,
    ACTIONS(138), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2099] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_comment,
    ACTIONS(140), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2119] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(40), 1,
      sym_comment,
    ACTIONS(142), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2139] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(116), 1,
      anon_sym_QMARK,
    STATE(41), 1,
      sym_comment,
    ACTIONS(144), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2161] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(42), 1,
      sym_comment,
    ACTIONS(146), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2181] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(43), 1,
      sym_comment,
    ACTIONS(148), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2201] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(44), 1,
      sym_comment,
    ACTIONS(150), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2221] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(45), 1,
      sym_comment,
    ACTIONS(152), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2241] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(46), 1,
      sym_comment,
    ACTIONS(154), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2261] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(47), 1,
      sym_comment,
    ACTIONS(156), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2281] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(48), 1,
      sym_comment,
    ACTIONS(158), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2301] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(49), 1,
      sym_comment,
    ACTIONS(96), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2321] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(50), 1,
      sym_comment,
    ACTIONS(161), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2341] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(165), 1,
      anon_sym_AMP,
    STATE(51), 1,
      sym_comment,
    ACTIONS(163), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2362] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(165), 1,
      anon_sym_AMP,
    STATE(52), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_PIPE,
      anon_sym_LBRACK,
    ACTIONS(167), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2385] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(53), 1,
      sym_comment,
    STATE(96), 1,
      sym_array_length,
    STATE(98), 1,
      sym_qualified_identifier,
    STATE(106), 1,
      sym_module_prefix,
    ACTIONS(174), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
    STATE(97), 2,
      sym_const_reference_expr,
      sym_int_literal,
  [2415] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(180), 1,
      anon_sym_PIPE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(178), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [2435] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      anon_sym_public,
    ACTIONS(9), 1,
      anon_sym_type,
    STATE(55), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_module_part_repeat2,
    STATE(59), 1,
      aux_sym_module_part_repeat1,
    STATE(71), 1,
      sym_type_defn,
    STATE(76), 1,
      sym_module_defn,
    STATE(81), 1,
      sym_import_decl,
  [2466] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      anon_sym_public,
    ACTIONS(187), 1,
      anon_sym_type,
    STATE(71), 1,
      sym_type_defn,
    STATE(76), 1,
      sym_module_defn,
    STATE(56), 2,
      sym_comment,
      aux_sym_module_part_repeat2,
  [2489] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_public,
    ACTIONS(9), 1,
      anon_sym_type,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      aux_sym_module_part_repeat2,
    STATE(57), 1,
      sym_comment,
    STATE(71), 1,
      sym_type_defn,
    STATE(76), 1,
      sym_module_defn,
  [2514] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_public,
    ACTIONS(9), 1,
      anon_sym_type,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      aux_sym_module_part_repeat2,
    STATE(58), 1,
      sym_comment,
    STATE(71), 1,
      sym_type_defn,
    STATE(76), 1,
      sym_module_defn,
  [2539] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(194), 1,
      anon_sym_import,
    STATE(81), 1,
      sym_import_decl,
    ACTIONS(197), 2,
      anon_sym_public,
      anon_sym_type,
    STATE(59), 2,
      sym_comment,
      aux_sym_module_part_repeat1,
  [2557] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    ACTIONS(203), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_tuple_member_type_desc_list_repeat1,
  [2579] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(61), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2596] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(209), 1,
      sym_floating_point_literal,
    STATE(24), 1,
      sym_int_literal,
    STATE(62), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_0,
      aux_sym_int_literal_token1,
  [2613] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(211), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_as,
      anon_sym_SEMI,
      anon_sym_DOT,
  [2628] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(64), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_import,
      anon_sym_public,
      anon_sym_type,
  [2640] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_tuple_member_type_desc_list_repeat1,
  [2656] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(66), 1,
      sym_comment,
    STATE(67), 1,
      sym_module_name,
    STATE(113), 1,
      sym_org_name,
  [2672] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym_comment,
  [2688] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(68), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_import,
      anon_sym_public,
      anon_sym_type,
  [2700] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(233), 1,
      sym_identifier,
    STATE(69), 1,
      sym_comment,
  [2716] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(70), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_as,
      anon_sym_SEMI,
      anon_sym_DOT,
  [2728] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_comment,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_type,
  [2740] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      aux_sym_array_type_desc_repeat1,
    STATE(22), 1,
      sym_array_dimensions,
    STATE(72), 1,
      sym_comment,
  [2756] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2770] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 1,
      sym_comment,
    ACTIONS(241), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_type,
  [2782] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(243), 1,
      anon_sym_as,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      sym_comment,
  [2798] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_comment,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_type,
  [2810] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(77), 1,
      sym_comment,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_type,
  [2822] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(78), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_as,
      anon_sym_SEMI,
      anon_sym_DOT,
  [2834] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(79), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_import,
      anon_sym_public,
      anon_sym_type,
  [2846] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(80), 2,
      sym_comment,
      aux_sym_tuple_member_type_desc_list_repeat1,
  [2860] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_import,
      anon_sym_public,
      anon_sym_type,
  [2872] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym_identifier,
    STATE(82), 1,
      sym_comment,
  [2885] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_GT,
    STATE(83), 1,
      sym_comment,
  [2898] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(84), 1,
      sym_comment,
    STATE(101), 1,
      sym_import_prefix,
  [2911] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_comment,
  [2924] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym_comment,
  [2937] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_LBRACE_PIPE,
    STATE(87), 1,
      sym_comment,
  [2950] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(75), 1,
      sym_module_name,
    STATE(88), 1,
      sym_comment,
  [2963] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(89), 1,
      sym_comment,
    STATE(104), 1,
      sym_import_prefix,
  [2976] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym_comment,
  [2989] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_comment,
  [3002] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_comment,
  [3012] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_comment,
  [3022] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_PIPE_RBRACE,
    STATE(94), 1,
      sym_comment,
  [3032] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(95), 1,
      sym_comment,
  [3042] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_comment,
  [3052] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      sym_comment,
  [3062] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym_comment,
  [3072] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(99), 1,
      sym_comment,
  [3082] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      sym_comment,
  [3092] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      sym_comment,
  [3102] = 3,
    ACTIONS(290), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(292), 1,
      aux_sym_comment_token1,
    STATE(102), 1,
      sym_comment,
  [3112] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      sym_comment,
  [3122] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_comment,
  [3132] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_comment,
  [3142] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(298), 1,
      anon_sym_COLON,
    STATE(106), 1,
      sym_comment,
  [3152] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym_comment,
  [3162] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(300), 1,
      anon_sym_LT,
    STATE(108), 1,
      sym_comment,
  [3172] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(302), 1,
      sym_identifier,
    STATE(109), 1,
      sym_comment,
  [3182] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      sym_comment,
  [3192] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(111), 1,
      sym_comment,
  [3202] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_PIPE_RBRACE,
    STATE(112), 1,
      sym_comment,
  [3212] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(310), 1,
      anon_sym_SLASH,
    STATE(113), 1,
      sym_comment,
  [3222] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(312), 1,
      anon_sym_type,
    STATE(114), 1,
      sym_comment,
  [3232] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      sym_comment,
  [3242] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_comment,
  [3252] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(117), 1,
      sym_comment,
  [3262] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(320), 1,
      anon_sym_PIPE_RBRACE,
    STATE(118), 1,
      sym_comment,
  [3272] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(119), 1,
      sym_comment,
  [3282] = 1,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 115,
  [SMALL_STATE(4)] = 230,
  [SMALL_STATE(5)] = 341,
  [SMALL_STATE(6)] = 453,
  [SMALL_STATE(7)] = 565,
  [SMALL_STATE(8)] = 674,
  [SMALL_STATE(9)] = 780,
  [SMALL_STATE(10)] = 886,
  [SMALL_STATE(11)] = 992,
  [SMALL_STATE(12)] = 1095,
  [SMALL_STATE(13)] = 1198,
  [SMALL_STATE(14)] = 1301,
  [SMALL_STATE(15)] = 1404,
  [SMALL_STATE(16)] = 1507,
  [SMALL_STATE(17)] = 1610,
  [SMALL_STATE(18)] = 1644,
  [SMALL_STATE(19)] = 1678,
  [SMALL_STATE(20)] = 1704,
  [SMALL_STATE(21)] = 1732,
  [SMALL_STATE(22)] = 1755,
  [SMALL_STATE(23)] = 1775,
  [SMALL_STATE(24)] = 1795,
  [SMALL_STATE(25)] = 1815,
  [SMALL_STATE(26)] = 1835,
  [SMALL_STATE(27)] = 1855,
  [SMALL_STATE(28)] = 1879,
  [SMALL_STATE(29)] = 1899,
  [SMALL_STATE(30)] = 1919,
  [SMALL_STATE(31)] = 1939,
  [SMALL_STATE(32)] = 1959,
  [SMALL_STATE(33)] = 1979,
  [SMALL_STATE(34)] = 1999,
  [SMALL_STATE(35)] = 2019,
  [SMALL_STATE(36)] = 2039,
  [SMALL_STATE(37)] = 2059,
  [SMALL_STATE(38)] = 2079,
  [SMALL_STATE(39)] = 2099,
  [SMALL_STATE(40)] = 2119,
  [SMALL_STATE(41)] = 2139,
  [SMALL_STATE(42)] = 2161,
  [SMALL_STATE(43)] = 2181,
  [SMALL_STATE(44)] = 2201,
  [SMALL_STATE(45)] = 2221,
  [SMALL_STATE(46)] = 2241,
  [SMALL_STATE(47)] = 2261,
  [SMALL_STATE(48)] = 2281,
  [SMALL_STATE(49)] = 2301,
  [SMALL_STATE(50)] = 2321,
  [SMALL_STATE(51)] = 2341,
  [SMALL_STATE(52)] = 2362,
  [SMALL_STATE(53)] = 2385,
  [SMALL_STATE(54)] = 2415,
  [SMALL_STATE(55)] = 2435,
  [SMALL_STATE(56)] = 2466,
  [SMALL_STATE(57)] = 2489,
  [SMALL_STATE(58)] = 2514,
  [SMALL_STATE(59)] = 2539,
  [SMALL_STATE(60)] = 2557,
  [SMALL_STATE(61)] = 2579,
  [SMALL_STATE(62)] = 2596,
  [SMALL_STATE(63)] = 2613,
  [SMALL_STATE(64)] = 2628,
  [SMALL_STATE(65)] = 2640,
  [SMALL_STATE(66)] = 2656,
  [SMALL_STATE(67)] = 2672,
  [SMALL_STATE(68)] = 2688,
  [SMALL_STATE(69)] = 2700,
  [SMALL_STATE(70)] = 2716,
  [SMALL_STATE(71)] = 2728,
  [SMALL_STATE(72)] = 2740,
  [SMALL_STATE(73)] = 2756,
  [SMALL_STATE(74)] = 2770,
  [SMALL_STATE(75)] = 2782,
  [SMALL_STATE(76)] = 2798,
  [SMALL_STATE(77)] = 2810,
  [SMALL_STATE(78)] = 2822,
  [SMALL_STATE(79)] = 2834,
  [SMALL_STATE(80)] = 2846,
  [SMALL_STATE(81)] = 2860,
  [SMALL_STATE(82)] = 2872,
  [SMALL_STATE(83)] = 2885,
  [SMALL_STATE(84)] = 2898,
  [SMALL_STATE(85)] = 2911,
  [SMALL_STATE(86)] = 2924,
  [SMALL_STATE(87)] = 2937,
  [SMALL_STATE(88)] = 2950,
  [SMALL_STATE(89)] = 2963,
  [SMALL_STATE(90)] = 2976,
  [SMALL_STATE(91)] = 2989,
  [SMALL_STATE(92)] = 3002,
  [SMALL_STATE(93)] = 3012,
  [SMALL_STATE(94)] = 3022,
  [SMALL_STATE(95)] = 3032,
  [SMALL_STATE(96)] = 3042,
  [SMALL_STATE(97)] = 3052,
  [SMALL_STATE(98)] = 3062,
  [SMALL_STATE(99)] = 3072,
  [SMALL_STATE(100)] = 3082,
  [SMALL_STATE(101)] = 3092,
  [SMALL_STATE(102)] = 3102,
  [SMALL_STATE(103)] = 3112,
  [SMALL_STATE(104)] = 3122,
  [SMALL_STATE(105)] = 3132,
  [SMALL_STATE(106)] = 3142,
  [SMALL_STATE(107)] = 3152,
  [SMALL_STATE(108)] = 3162,
  [SMALL_STATE(109)] = 3172,
  [SMALL_STATE(110)] = 3182,
  [SMALL_STATE(111)] = 3192,
  [SMALL_STATE(112)] = 3202,
  [SMALL_STATE(113)] = 3212,
  [SMALL_STATE(114)] = 3222,
  [SMALL_STATE(115)] = 3232,
  [SMALL_STATE(116)] = 3242,
  [SMALL_STATE(117)] = 3252,
  [SMALL_STATE(118)] = 3262,
  [SMALL_STATE(119)] = 3272,
  [SMALL_STATE(120)] = 3282,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2), SHIFT_REPEAT(30),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2), SHIFT_REPEAT(108),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2), SHIFT_REPEAT(87),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2), SHIFT_REPEAT(62),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2), SHIFT_REPEAT(34),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2), SHIFT_REPEAT(35),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2), SHIFT_REPEAT(36),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2), SHIFT_REPEAT(37),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 2), SHIFT_REPEAT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inclusive_record_type_desc_repeat1, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_desc, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_desc, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_desc_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_desc_repeat1, 2), SHIFT_REPEAT(53),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type_desc, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_array_type_desc, 2), SHIFT(53),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_reference, 1), REDUCE(sym_const_reference_expr, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_prefix, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_desc_repeat1, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_const_expr, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_dimensions, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_dimensions, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_type_desc, 3),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_intersection_type_desc, 1), REDUCE(sym_intersection_type_desc, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclusive_record_type_desc, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inclusive_record_type_desc, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type_name, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type_desc, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclusive_record_type_desc, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nil_literal, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nil_literal, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclusive_record_type_desc, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type_desc, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_type_desc, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_type_desc, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_type_desc, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inclusive_record_type_desc, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_type_desc, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_desc, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_type_desc, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_const_expr, 1),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_nil_type_desc, 1), REDUCE(sym_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_desc, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_desc, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_desc, 3),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_union_type_desc, 1), REDUCE(sym_union_type_desc, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_desc, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_part_repeat2, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_part_repeat2, 2), SHIFT_REPEAT(114),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_part_repeat2, 2), SHIFT_REPEAT(119),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_part, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_part, 1),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_part_repeat1, 2), SHIFT_REPEAT(66),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_part_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_member_type_desc, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_member_type_desc_list, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_member_type_desc_list_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_org_name, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_member_type_desc_list, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_defn, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defn, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_part_repeat2, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defn, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 7),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_member_type_desc_list_repeat1, 2), SHIFT_REPEAT(16),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_part_repeat1, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_reference_expr, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_length, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_rest_desc, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_member_type_desc_list, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_prefix, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_member_type_desc_list, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [318] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_field_desc, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ballerina(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
