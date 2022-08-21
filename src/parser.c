#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_import = 1,
  anon_sym_SLASH = 2,
  anon_sym_SEMI = 3,
  anon_sym_public = 4,
  anon_sym_function = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_returns = 8,
  anon_sym_int = 9,
  anon_sym_boolean = 10,
  anon_sym_COMMA = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_EQ = 14,
  anon_sym_return = 15,
  anon_sym_if = 16,
  anon_sym_else = 17,
  anon_sym_while = 18,
  anon_sym_break = 19,
  anon_sym_continue = 20,
  anon_sym_EQ_EQ = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_LT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_GT = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_STAR = 29,
  anon_sym_PERCENT = 30,
  anon_sym_true = 31,
  anon_sym_false = 32,
  anon_sym_COLON = 33,
  anon_sym_0 = 34,
  aux_sym_integer_literal_token1 = 35,
  sym_identifier = 36,
  anon_sym_SLASH_SLASH = 37,
  aux_sym_comment_token1 = 38,
  sym_source_file = 39,
  sym_module_part = 40,
  sym_import_decl = 41,
  sym_module_decl = 42,
  sym_function_defn = 43,
  sym_signature = 44,
  sym_type_desc = 45,
  sym_basic_type_name = 46,
  sym_param_list = 47,
  sym_param = 48,
  sym_stmt_block = 49,
  sym_statement = 50,
  sym_local_var_decl_stmt = 51,
  sym_function_call_stmt = 52,
  sym_assing_stmt = 53,
  sym_lvexpr = 54,
  sym_return_stmt = 55,
  sym_if_else_stmt = 56,
  sym_while_stmt = 57,
  sym_break_stmt = 58,
  sym_continue_stmt = 59,
  sym_expression = 60,
  sym_equality_expr = 61,
  sym_relational_expr = 62,
  sym_additive_expr = 63,
  sym_multiplicative_expr = 64,
  sym_unary_expr = 65,
  sym_primary_expr = 66,
  sym_literal = 67,
  sym_boolean_literal = 68,
  sym_function_call_expr = 69,
  sym_arg_list = 70,
  sym_function_reference = 71,
  sym_qualified_identifier = 72,
  sym_module_prefix = 73,
  sym_expr_list = 74,
  sym_variable_reference_expr = 75,
  sym_integer_literal = 76,
  sym_comment = 77,
  aux_sym_module_part_repeat1 = 78,
  aux_sym_module_part_repeat2 = 79,
  aux_sym_param_list_repeat1 = 80,
  aux_sym_stmt_block_repeat1 = 81,
  aux_sym_expr_list_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_SLASH] = "/",
  [anon_sym_SEMI] = ";",
  [anon_sym_public] = "public",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_returns] = "returns",
  [anon_sym_int] = "int",
  [anon_sym_boolean] = "boolean",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLON] = ":",
  [anon_sym_0] = "0",
  [aux_sym_integer_literal_token1] = "integer_literal_token1",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym_module_part] = "module_part",
  [sym_import_decl] = "import_decl",
  [sym_module_decl] = "module_decl",
  [sym_function_defn] = "function_defn",
  [sym_signature] = "signature",
  [sym_type_desc] = "type_desc",
  [sym_basic_type_name] = "basic_type_name",
  [sym_param_list] = "param_list",
  [sym_param] = "param",
  [sym_stmt_block] = "stmt_block",
  [sym_statement] = "statement",
  [sym_local_var_decl_stmt] = "local_var_decl_stmt",
  [sym_function_call_stmt] = "function_call_stmt",
  [sym_assing_stmt] = "assing_stmt",
  [sym_lvexpr] = "lvexpr",
  [sym_return_stmt] = "return_stmt",
  [sym_if_else_stmt] = "if_else_stmt",
  [sym_while_stmt] = "while_stmt",
  [sym_break_stmt] = "break_stmt",
  [sym_continue_stmt] = "continue_stmt",
  [sym_expression] = "expression",
  [sym_equality_expr] = "equality_expr",
  [sym_relational_expr] = "relational_expr",
  [sym_additive_expr] = "additive_expr",
  [sym_multiplicative_expr] = "multiplicative_expr",
  [sym_unary_expr] = "unary_expr",
  [sym_primary_expr] = "primary_expr",
  [sym_literal] = "literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_function_call_expr] = "function_call_expr",
  [sym_arg_list] = "arg_list",
  [sym_function_reference] = "function_reference",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_module_prefix] = "module_prefix",
  [sym_expr_list] = "expr_list",
  [sym_variable_reference_expr] = "variable_reference_expr",
  [sym_integer_literal] = "integer_literal",
  [sym_comment] = "comment",
  [aux_sym_module_part_repeat1] = "module_part_repeat1",
  [aux_sym_module_part_repeat2] = "module_part_repeat2",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
  [aux_sym_stmt_block_repeat1] = "stmt_block_repeat1",
  [aux_sym_expr_list_repeat1] = "expr_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_0] = anon_sym_0,
  [aux_sym_integer_literal_token1] = aux_sym_integer_literal_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym_module_part] = sym_module_part,
  [sym_import_decl] = sym_import_decl,
  [sym_module_decl] = sym_module_decl,
  [sym_function_defn] = sym_function_defn,
  [sym_signature] = sym_signature,
  [sym_type_desc] = sym_type_desc,
  [sym_basic_type_name] = sym_basic_type_name,
  [sym_param_list] = sym_param_list,
  [sym_param] = sym_param,
  [sym_stmt_block] = sym_stmt_block,
  [sym_statement] = sym_statement,
  [sym_local_var_decl_stmt] = sym_local_var_decl_stmt,
  [sym_function_call_stmt] = sym_function_call_stmt,
  [sym_assing_stmt] = sym_assing_stmt,
  [sym_lvexpr] = sym_lvexpr,
  [sym_return_stmt] = sym_return_stmt,
  [sym_if_else_stmt] = sym_if_else_stmt,
  [sym_while_stmt] = sym_while_stmt,
  [sym_break_stmt] = sym_break_stmt,
  [sym_continue_stmt] = sym_continue_stmt,
  [sym_expression] = sym_expression,
  [sym_equality_expr] = sym_equality_expr,
  [sym_relational_expr] = sym_relational_expr,
  [sym_additive_expr] = sym_additive_expr,
  [sym_multiplicative_expr] = sym_multiplicative_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_primary_expr] = sym_primary_expr,
  [sym_literal] = sym_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_function_call_expr] = sym_function_call_expr,
  [sym_arg_list] = sym_arg_list,
  [sym_function_reference] = sym_function_reference,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_module_prefix] = sym_module_prefix,
  [sym_expr_list] = sym_expr_list,
  [sym_variable_reference_expr] = sym_variable_reference_expr,
  [sym_integer_literal] = sym_integer_literal,
  [sym_comment] = sym_comment,
  [aux_sym_module_part_repeat1] = aux_sym_module_part_repeat1,
  [aux_sym_module_part_repeat2] = aux_sym_module_part_repeat2,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
  [aux_sym_stmt_block_repeat1] = aux_sym_stmt_block_repeat1,
  [aux_sym_expr_list_repeat1] = aux_sym_expr_list_repeat1,
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
  [anon_sym_SEMI] = {
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
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [aux_sym_integer_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_module_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_function_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_type_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_local_var_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_assing_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_lvexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_return_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_if_else_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_while_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_break_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_reference] = {
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
  [sym_expr_list] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_reference_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
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
  [aux_sym_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stmt_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_list_repeat1] = {
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
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '0') ADVANCE(126);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(115);
      if (lookahead == '\\') SKIP(80)
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(36);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(14)
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
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(120);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(115);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(140);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(126);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(140);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(166);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(171);
      if (lookahead == '\r') ADVANCE(172);
      END_STATE();
    case 79:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(79)
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(166);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(78);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 169},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 0},
  [121] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [aux_sym_integer_literal_token1] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(118),
    [sym_module_part] = STATE(115),
    [sym_import_decl] = STATE(69),
    [sym_module_decl] = STATE(72),
    [sym_function_defn] = STATE(73),
    [sym_comment] = STATE(1),
    [aux_sym_module_part_repeat1] = STATE(54),
    [aux_sym_module_part_repeat2] = STATE(57),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_function] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_COLON,
    STATE(2), 1,
      sym_comment,
    ACTIONS(11), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(13), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [42] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(3), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_stmt_block_repeat1,
    STATE(41), 1,
      sym_statement,
    STATE(84), 1,
      sym_basic_type_name,
    STATE(90), 1,
      sym_function_reference,
    STATE(111), 1,
      sym_type_desc,
    STATE(112), 1,
      sym_lvexpr,
    STATE(113), 1,
      sym_function_call_expr,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(19), 2,
      anon_sym_int,
      anon_sym_boolean,
    STATE(50), 8,
      sym_local_var_decl_stmt,
      sym_function_call_stmt,
      sym_assing_stmt,
      sym_return_stmt,
      sym_if_else_stmt,
      sym_while_stmt,
      sym_break_stmt,
      sym_continue_stmt,
  [111] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_stmt_block_repeat1,
    STATE(41), 1,
      sym_statement,
    STATE(84), 1,
      sym_basic_type_name,
    STATE(90), 1,
      sym_function_reference,
    STATE(111), 1,
      sym_type_desc,
    STATE(112), 1,
      sym_lvexpr,
    STATE(113), 1,
      sym_function_call_expr,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(19), 2,
      anon_sym_int,
      anon_sym_boolean,
    STATE(50), 8,
      sym_local_var_decl_stmt,
      sym_function_call_stmt,
      sym_assing_stmt,
      sym_return_stmt,
      sym_if_else_stmt,
      sym_while_stmt,
      sym_break_stmt,
      sym_continue_stmt,
  [180] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_stmt_block_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(41), 1,
      sym_statement,
    STATE(84), 1,
      sym_basic_type_name,
    STATE(90), 1,
      sym_function_reference,
    STATE(111), 1,
      sym_type_desc,
    STATE(112), 1,
      sym_lvexpr,
    STATE(113), 1,
      sym_function_call_expr,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(19), 2,
      anon_sym_int,
      anon_sym_boolean,
    STATE(50), 8,
      sym_local_var_decl_stmt,
      sym_function_call_stmt,
      sym_assing_stmt,
      sym_return_stmt,
      sym_if_else_stmt,
      sym_while_stmt,
      sym_break_stmt,
      sym_continue_stmt,
  [249] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_stmt_block_repeat1,
    STATE(41), 1,
      sym_statement,
    STATE(84), 1,
      sym_basic_type_name,
    STATE(90), 1,
      sym_function_reference,
    STATE(111), 1,
      sym_type_desc,
    STATE(112), 1,
      sym_lvexpr,
    STATE(113), 1,
      sym_function_call_expr,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(19), 2,
      anon_sym_int,
      anon_sym_boolean,
    STATE(50), 8,
      sym_local_var_decl_stmt,
      sym_function_call_stmt,
      sym_assing_stmt,
      sym_return_stmt,
      sym_if_else_stmt,
      sym_while_stmt,
      sym_break_stmt,
      sym_continue_stmt,
  [318] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(52), 1,
      anon_sym_while,
    ACTIONS(55), 1,
      anon_sym_break,
    ACTIONS(58), 1,
      anon_sym_continue,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(41), 1,
      sym_statement,
    STATE(84), 1,
      sym_basic_type_name,
    STATE(90), 1,
      sym_function_reference,
    STATE(111), 1,
      sym_type_desc,
    STATE(112), 1,
      sym_lvexpr,
    STATE(113), 1,
      sym_function_call_expr,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(41), 2,
      anon_sym_int,
      anon_sym_boolean,
    STATE(7), 2,
      sym_comment,
      aux_sym_stmt_block_repeat1,
    STATE(50), 8,
      sym_local_var_decl_stmt,
      sym_function_call_stmt,
      sym_assing_stmt,
      sym_return_stmt,
      sym_if_else_stmt,
      sym_while_stmt,
      sym_break_stmt,
      sym_continue_stmt,
  [385] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(8), 1,
      sym_comment,
    ACTIONS(64), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(66), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [421] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(9), 1,
      sym_comment,
    ACTIONS(68), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(70), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(10), 1,
      sym_comment,
    ACTIONS(72), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(74), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [493] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(11), 1,
      sym_comment,
    ACTIONS(76), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(78), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [529] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(80), 1,
      anon_sym_SLASH,
    STATE(12), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(82), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 11,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(13), 1,
      sym_comment,
    ACTIONS(88), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(90), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [605] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(80), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 11,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [645] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(15), 1,
      sym_comment,
    ACTIONS(96), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(98), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(16), 1,
      sym_comment,
    ACTIONS(100), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(102), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [717] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_comment,
    ACTIONS(104), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(106), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [753] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(18), 1,
      sym_comment,
    ACTIONS(108), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(110), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(19), 1,
      sym_comment,
    ACTIONS(112), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(114), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [825] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(20), 1,
      sym_comment,
    ACTIONS(116), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(118), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [861] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(21), 1,
      sym_comment,
    ACTIONS(120), 12,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(122), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [897] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(12), 1,
      sym_multiplicative_expr,
    STATE(15), 1,
      sym_unary_expr,
    STATE(22), 1,
      sym_comment,
    STATE(24), 1,
      sym_additive_expr,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(78), 1,
      sym_expression,
    STATE(90), 1,
      sym_function_reference,
    STATE(102), 1,
      sym_expr_list,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [966] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym_primary_expr,
    STATE(12), 1,
      sym_multiplicative_expr,
    STATE(15), 1,
      sym_unary_expr,
    STATE(23), 1,
      sym_comment,
    STATE(24), 1,
      sym_additive_expr,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(90), 1,
      sym_function_reference,
    STATE(95), 1,
      sym_expression,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1032] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(24), 1,
      sym_comment,
    ACTIONS(142), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(144), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(146), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(140), 9,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1071] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(12), 1,
      sym_multiplicative_expr,
    STATE(15), 1,
      sym_unary_expr,
    STATE(24), 1,
      sym_additive_expr,
    STATE(25), 1,
      sym_comment,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(40), 1,
      sym_expression,
    STATE(90), 1,
      sym_function_reference,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1134] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(12), 1,
      sym_multiplicative_expr,
    STATE(15), 1,
      sym_unary_expr,
    STATE(24), 1,
      sym_additive_expr,
    STATE(26), 1,
      sym_comment,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(90), 1,
      sym_function_reference,
    STATE(96), 1,
      sym_expression,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1197] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(12), 1,
      sym_multiplicative_expr,
    STATE(15), 1,
      sym_unary_expr,
    STATE(24), 1,
      sym_additive_expr,
    STATE(27), 1,
      sym_comment,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(90), 1,
      sym_function_reference,
    STATE(99), 1,
      sym_expression,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1260] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(12), 1,
      sym_multiplicative_expr,
    STATE(15), 1,
      sym_unary_expr,
    STATE(24), 1,
      sym_additive_expr,
    STATE(28), 1,
      sym_comment,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(90), 1,
      sym_function_reference,
    STATE(110), 1,
      sym_expression,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1323] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(12), 1,
      sym_multiplicative_expr,
    STATE(15), 1,
      sym_unary_expr,
    STATE(24), 1,
      sym_additive_expr,
    STATE(29), 1,
      sym_comment,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(79), 1,
      sym_expression,
    STATE(90), 1,
      sym_function_reference,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1386] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(12), 1,
      sym_multiplicative_expr,
    STATE(15), 1,
      sym_unary_expr,
    STATE(24), 1,
      sym_additive_expr,
    STATE(30), 1,
      sym_comment,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(90), 1,
      sym_function_reference,
    STATE(91), 1,
      sym_expression,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1449] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(12), 1,
      sym_multiplicative_expr,
    STATE(15), 1,
      sym_unary_expr,
    STATE(24), 1,
      sym_additive_expr,
    STATE(31), 1,
      sym_comment,
    STATE(39), 1,
      sym_relational_expr,
    STATE(90), 1,
      sym_function_reference,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1506] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(12), 1,
      sym_multiplicative_expr,
    STATE(15), 1,
      sym_unary_expr,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      sym_additive_expr,
    STATE(90), 1,
      sym_function_reference,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1560] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(33), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(148), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(150), 9,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1591] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(14), 1,
      sym_multiplicative_expr,
    STATE(15), 1,
      sym_unary_expr,
    STATE(34), 1,
      sym_comment,
    STATE(90), 1,
      sym_function_reference,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1642] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(19), 1,
      sym_unary_expr,
    STATE(35), 1,
      sym_comment,
    STATE(90), 1,
      sym_function_reference,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1690] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(8), 1,
      sym_primary_expr,
    STATE(13), 1,
      sym_unary_expr,
    STATE(36), 1,
      sym_comment,
    STATE(90), 1,
      sym_function_reference,
    STATE(114), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_module_prefix,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(17), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1738] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(152), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(154), 9,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1767] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_comment,
    ACTIONS(158), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(160), 9,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1794] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_comment,
    ACTIONS(162), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(164), 9,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1821] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      anon_sym_else,
    STATE(40), 1,
      sym_comment,
    ACTIONS(166), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1844] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(172), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(176), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1884] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(180), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1904] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(184), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1924] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(188), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1944] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(192), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1964] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(196), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(200), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [2004] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(204), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [2024] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(208), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [2044] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(212), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [2064] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(216), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [2084] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(220), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [2104] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      anon_sym_public,
    ACTIONS(9), 1,
      anon_sym_function,
    STATE(54), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_module_part_repeat2,
    STATE(60), 1,
      aux_sym_module_part_repeat1,
    STATE(69), 1,
      sym_import_decl,
    STATE(72), 1,
      sym_module_decl,
    STATE(73), 1,
      sym_function_defn,
  [2135] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_comment,
    STATE(66), 1,
      sym_param,
    STATE(84), 1,
      sym_basic_type_name,
    STATE(92), 1,
      sym_param_list,
    STATE(94), 1,
      sym_type_desc,
    ACTIONS(226), 2,
      anon_sym_int,
      anon_sym_boolean,
  [2161] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      anon_sym_public,
    ACTIONS(233), 1,
      anon_sym_function,
    STATE(72), 1,
      sym_module_decl,
    STATE(73), 1,
      sym_function_defn,
    STATE(56), 2,
      sym_comment,
      aux_sym_module_part_repeat2,
  [2184] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_public,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      aux_sym_module_part_repeat2,
    STATE(57), 1,
      sym_comment,
    STATE(72), 1,
      sym_module_decl,
    STATE(73), 1,
      sym_function_defn,
  [2209] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_public,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      aux_sym_module_part_repeat2,
    STATE(58), 1,
      sym_comment,
    STATE(72), 1,
      sym_module_decl,
    STATE(73), 1,
      sym_function_defn,
  [2234] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(59), 1,
      sym_comment,
    STATE(81), 1,
      sym_param,
    STATE(84), 1,
      sym_basic_type_name,
    STATE(94), 1,
      sym_type_desc,
    ACTIONS(226), 2,
      anon_sym_int,
      anon_sym_boolean,
  [2254] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(240), 1,
      anon_sym_import,
    STATE(69), 1,
      sym_import_decl,
    ACTIONS(243), 2,
      anon_sym_public,
      anon_sym_function,
    STATE(60), 2,
      sym_comment,
      aux_sym_module_part_repeat1,
  [2272] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(61), 1,
      sym_comment,
    STATE(84), 1,
      sym_basic_type_name,
    STATE(117), 1,
      sym_type_desc,
    ACTIONS(226), 2,
      anon_sym_int,
      anon_sym_boolean,
  [2289] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      anon_sym_if,
    STATE(62), 1,
      sym_comment,
    STATE(42), 2,
      sym_stmt_block,
      sym_if_else_stmt,
  [2306] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_comment,
    STATE(84), 1,
      sym_basic_type_name,
    STATE(97), 1,
      sym_type_desc,
    ACTIONS(226), 2,
      anon_sym_int,
      anon_sym_boolean,
  [2323] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(64), 2,
      sym_comment,
      aux_sym_param_list_repeat1,
  [2337] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(65), 1,
      sym_comment,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_function,
  [2349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_param_list_repeat1,
  [2365] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(67), 2,
      sym_comment,
      aux_sym_expr_list_repeat1,
  [2379] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(68), 1,
      sym_comment,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_function,
  [2391] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(69), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_import,
      anon_sym_public,
      anon_sym_function,
  [2403] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_expr_list_repeat1,
    STATE(70), 1,
      sym_comment,
  [2419] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_import,
      anon_sym_public,
      anon_sym_function,
  [2431] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(72), 1,
      sym_comment,
    ACTIONS(273), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_function,
  [2443] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(73), 1,
      sym_comment,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_function,
  [2455] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 1,
      sym_comment,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_function,
  [2467] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(277), 1,
      anon_sym_EQ,
    STATE(75), 1,
      sym_comment,
  [2483] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_comment,
    ACTIONS(279), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_function,
  [2495] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_param_list_repeat1,
    STATE(77), 1,
      sym_comment,
  [2511] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_expr_list_repeat1,
    STATE(78), 1,
      sym_comment,
  [2527] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_stmt_block,
    STATE(79), 1,
      sym_comment,
  [2540] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_stmt_block,
    STATE(80), 1,
      sym_comment,
  [2553] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(287), 1,
      anon_sym_returns,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_comment,
  [2577] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2588] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(84), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_LBRACE,
      sym_identifier,
  [2599] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_stmt_block,
    STATE(85), 1,
      sym_comment,
  [2612] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_signature,
    STATE(86), 1,
      sym_comment,
  [2625] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_signature,
    STATE(87), 1,
      sym_comment,
  [2638] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_returns,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_comment,
  [2651] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(89), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_LBRACE,
      sym_identifier,
  [2662] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_arg_list,
    STATE(90), 1,
      sym_comment,
  [2675] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(91), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2686] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_comment,
  [2696] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(93), 1,
      sym_comment,
  [2706] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(309), 1,
      sym_identifier,
    STATE(94), 1,
      sym_comment,
  [2716] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_comment,
  [2726] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_comment,
  [2736] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_comment,
  [2746] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_comment,
  [2756] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_comment,
  [2766] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(100), 1,
      sym_comment,
  [2776] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(323), 1,
      anon_sym_EQ,
    STATE(101), 1,
      sym_comment,
  [2786] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_comment,
  [2796] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_comment,
  [2806] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_comment,
  [2816] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(105), 1,
      sym_comment,
  [2826] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      sym_comment,
  [2836] = 3,
    ACTIONS(335), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(337), 1,
      aux_sym_comment_token1,
    STATE(107), 1,
      sym_comment,
  [2846] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(339), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      sym_comment,
  [2856] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(109), 1,
      sym_comment,
  [2866] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      sym_comment,
  [2876] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(111), 1,
      sym_comment,
  [2886] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(347), 1,
      anon_sym_EQ,
    STATE(112), 1,
      sym_comment,
  [2896] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_comment,
  [2906] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_comment,
  [2916] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      sym_comment,
  [2926] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(353), 1,
      anon_sym_COLON,
    STATE(116), 1,
      sym_comment,
  [2936] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_comment,
  [2946] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_comment,
  [2956] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(119), 1,
      sym_comment,
  [2966] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(361), 1,
      anon_sym_function,
    STATE(120), 1,
      sym_comment,
  [2976] = 1,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 111,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 249,
  [SMALL_STATE(7)] = 318,
  [SMALL_STATE(8)] = 385,
  [SMALL_STATE(9)] = 421,
  [SMALL_STATE(10)] = 457,
  [SMALL_STATE(11)] = 493,
  [SMALL_STATE(12)] = 529,
  [SMALL_STATE(13)] = 569,
  [SMALL_STATE(14)] = 605,
  [SMALL_STATE(15)] = 645,
  [SMALL_STATE(16)] = 681,
  [SMALL_STATE(17)] = 717,
  [SMALL_STATE(18)] = 753,
  [SMALL_STATE(19)] = 789,
  [SMALL_STATE(20)] = 825,
  [SMALL_STATE(21)] = 861,
  [SMALL_STATE(22)] = 897,
  [SMALL_STATE(23)] = 966,
  [SMALL_STATE(24)] = 1032,
  [SMALL_STATE(25)] = 1071,
  [SMALL_STATE(26)] = 1134,
  [SMALL_STATE(27)] = 1197,
  [SMALL_STATE(28)] = 1260,
  [SMALL_STATE(29)] = 1323,
  [SMALL_STATE(30)] = 1386,
  [SMALL_STATE(31)] = 1449,
  [SMALL_STATE(32)] = 1506,
  [SMALL_STATE(33)] = 1560,
  [SMALL_STATE(34)] = 1591,
  [SMALL_STATE(35)] = 1642,
  [SMALL_STATE(36)] = 1690,
  [SMALL_STATE(37)] = 1738,
  [SMALL_STATE(38)] = 1767,
  [SMALL_STATE(39)] = 1794,
  [SMALL_STATE(40)] = 1821,
  [SMALL_STATE(41)] = 1844,
  [SMALL_STATE(42)] = 1864,
  [SMALL_STATE(43)] = 1884,
  [SMALL_STATE(44)] = 1904,
  [SMALL_STATE(45)] = 1924,
  [SMALL_STATE(46)] = 1944,
  [SMALL_STATE(47)] = 1964,
  [SMALL_STATE(48)] = 1984,
  [SMALL_STATE(49)] = 2004,
  [SMALL_STATE(50)] = 2024,
  [SMALL_STATE(51)] = 2044,
  [SMALL_STATE(52)] = 2064,
  [SMALL_STATE(53)] = 2084,
  [SMALL_STATE(54)] = 2104,
  [SMALL_STATE(55)] = 2135,
  [SMALL_STATE(56)] = 2161,
  [SMALL_STATE(57)] = 2184,
  [SMALL_STATE(58)] = 2209,
  [SMALL_STATE(59)] = 2234,
  [SMALL_STATE(60)] = 2254,
  [SMALL_STATE(61)] = 2272,
  [SMALL_STATE(62)] = 2289,
  [SMALL_STATE(63)] = 2306,
  [SMALL_STATE(64)] = 2323,
  [SMALL_STATE(65)] = 2337,
  [SMALL_STATE(66)] = 2349,
  [SMALL_STATE(67)] = 2365,
  [SMALL_STATE(68)] = 2379,
  [SMALL_STATE(69)] = 2391,
  [SMALL_STATE(70)] = 2403,
  [SMALL_STATE(71)] = 2419,
  [SMALL_STATE(72)] = 2431,
  [SMALL_STATE(73)] = 2443,
  [SMALL_STATE(74)] = 2455,
  [SMALL_STATE(75)] = 2467,
  [SMALL_STATE(76)] = 2483,
  [SMALL_STATE(77)] = 2495,
  [SMALL_STATE(78)] = 2511,
  [SMALL_STATE(79)] = 2527,
  [SMALL_STATE(80)] = 2540,
  [SMALL_STATE(81)] = 2553,
  [SMALL_STATE(82)] = 2564,
  [SMALL_STATE(83)] = 2577,
  [SMALL_STATE(84)] = 2588,
  [SMALL_STATE(85)] = 2599,
  [SMALL_STATE(86)] = 2612,
  [SMALL_STATE(87)] = 2625,
  [SMALL_STATE(88)] = 2638,
  [SMALL_STATE(89)] = 2651,
  [SMALL_STATE(90)] = 2662,
  [SMALL_STATE(91)] = 2675,
  [SMALL_STATE(92)] = 2686,
  [SMALL_STATE(93)] = 2696,
  [SMALL_STATE(94)] = 2706,
  [SMALL_STATE(95)] = 2716,
  [SMALL_STATE(96)] = 2726,
  [SMALL_STATE(97)] = 2736,
  [SMALL_STATE(98)] = 2746,
  [SMALL_STATE(99)] = 2756,
  [SMALL_STATE(100)] = 2766,
  [SMALL_STATE(101)] = 2776,
  [SMALL_STATE(102)] = 2786,
  [SMALL_STATE(103)] = 2796,
  [SMALL_STATE(104)] = 2806,
  [SMALL_STATE(105)] = 2816,
  [SMALL_STATE(106)] = 2826,
  [SMALL_STATE(107)] = 2836,
  [SMALL_STATE(108)] = 2846,
  [SMALL_STATE(109)] = 2856,
  [SMALL_STATE(110)] = 2866,
  [SMALL_STATE(111)] = 2876,
  [SMALL_STATE(112)] = 2886,
  [SMALL_STATE(113)] = 2896,
  [SMALL_STATE(114)] = 2906,
  [SMALL_STATE(115)] = 2916,
  [SMALL_STATE(116)] = 2926,
  [SMALL_STATE(117)] = 2936,
  [SMALL_STATE(118)] = 2946,
  [SMALL_STATE(119)] = 2956,
  [SMALL_STATE(120)] = 2966,
  [SMALL_STATE(121)] = 2976,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_reference_expr, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference_expr, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_reference, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_prefix, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(89),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(23),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(25),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(29),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(104),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(106),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(75),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_expr, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_expr, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additive_expr, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additive_expr, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_expr, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_expr, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additive_expr, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additive_expr, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_expr, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_expr, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expr, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expr, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expr, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expr, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_expr, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relational_expr, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_expr, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relational_expr, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_expr, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_expr, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_expr, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_expr, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else_stmt, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else_stmt, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else_stmt, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else_stmt, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_block, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_stmt, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_stmt, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_stmt, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_stmt, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_stmt, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_stmt, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_stmt, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_stmt, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_stmt, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_block, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_stmt, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var_decl_stmt, 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assing_stmt, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assing_stmt, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_part_repeat2, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_part_repeat2, 2), SHIFT_REPEAT(120),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_part_repeat2, 2), SHIFT_REPEAT(119),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_part, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_part, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_part_repeat1, 2), SHIFT_REPEAT(109),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_part_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(59),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_list_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_list_repeat1, 2), SHIFT_REPEAT(30),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_defn, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_part_repeat1, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_list, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_part_repeat2, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_decl, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvexpr, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_defn, 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_list, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_desc, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type_name, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 4),
  [357] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Ballerina(void) {
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
