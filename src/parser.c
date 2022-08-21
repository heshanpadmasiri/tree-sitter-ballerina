#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  sym_source_file = 37,
  sym_module_part = 38,
  sym_import_decl = 39,
  sym_module_decl = 40,
  sym_function_defn = 41,
  sym_signature = 42,
  sym_type_desc = 43,
  sym_basic_type_name = 44,
  sym_param_list = 45,
  sym_param = 46,
  sym_stmt_block = 47,
  sym_statement = 48,
  sym_local_var_decl_stmt = 49,
  sym_function_call_stmt = 50,
  sym_assing_stmt = 51,
  sym_lvexpr = 52,
  sym_return_stmt = 53,
  sym_if_else_stmt = 54,
  sym_while_stmt = 55,
  sym_break_stmt = 56,
  sym_continue_stmt = 57,
  sym_expression = 58,
  sym_equality_expr = 59,
  sym_relational_expr = 60,
  sym_additive_expr = 61,
  sym_multiplicative_expr = 62,
  sym_unary_expr = 63,
  sym_primary_expr = 64,
  sym_literal = 65,
  sym_boolean_literal = 66,
  sym_function_call_expr = 67,
  sym_arg_list = 68,
  sym_function_reference = 69,
  sym_qualified_identifier = 70,
  sym_module_prefix = 71,
  sym_expr_list = 72,
  sym_variable_reference_expr = 73,
  sym_integer_literal = 74,
  aux_sym_module_part_repeat1 = 75,
  aux_sym_module_part_repeat2 = 76,
  aux_sym_param_list_repeat1 = 77,
  aux_sym_stmt_block_repeat1 = 78,
  aux_sym_expr_list_repeat1 = 79,
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
      if (eof) ADVANCE(66);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '%') ADVANCE(105);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '%') ADVANCE(105);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
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
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 50},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 50},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 65},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 65},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 65},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 65},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 65},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 65},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 65},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 65},
  [115] = {.lex_state = 65},
  [116] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
  },
  [1] = {
    [sym_source_file] = STATE(109),
    [sym_module_part] = STATE(107),
    [sym_import_decl] = STATE(53),
    [sym_module_decl] = STATE(57),
    [sym_function_defn] = STATE(69),
    [aux_sym_module_part_repeat1] = STATE(53),
    [aux_sym_module_part_repeat2] = STATE(57),
    [anon_sym_import] = ACTIONS(3),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(13), 11,
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
    ACTIONS(9), 14,
      anon_sym_SLASH,
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
  [36] = 17,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(28), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_break,
    ACTIONS(34), 1,
      anon_sym_continue,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(81), 1,
      sym_function_reference,
    STATE(86), 1,
      sym_basic_type_name,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    STATE(106), 1,
      sym_function_call_expr,
    STATE(108), 1,
      sym_lvexpr,
    STATE(110), 1,
      sym_type_desc,
    ACTIONS(17), 2,
      anon_sym_int,
      anon_sym_boolean,
    STATE(3), 2,
      sym_statement,
      aux_sym_stmt_block_repeat1,
    STATE(45), 8,
      sym_local_var_decl_stmt,
      sym_function_call_stmt,
      sym_assing_stmt,
      sym_return_stmt,
      sym_if_else_stmt,
      sym_while_stmt,
      sym_break_stmt,
      sym_continue_stmt,
  [97] = 17,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(48), 1,
      anon_sym_while,
    ACTIONS(50), 1,
      anon_sym_break,
    ACTIONS(52), 1,
      anon_sym_continue,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(81), 1,
      sym_function_reference,
    STATE(86), 1,
      sym_basic_type_name,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    STATE(106), 1,
      sym_function_call_expr,
    STATE(108), 1,
      sym_lvexpr,
    STATE(110), 1,
      sym_type_desc,
    ACTIONS(40), 2,
      anon_sym_int,
      anon_sym_boolean,
    STATE(3), 2,
      sym_statement,
      aux_sym_stmt_block_repeat1,
    STATE(45), 8,
      sym_local_var_decl_stmt,
      sym_function_call_stmt,
      sym_assing_stmt,
      sym_return_stmt,
      sym_if_else_stmt,
      sym_while_stmt,
      sym_break_stmt,
      sym_continue_stmt,
  [158] = 17,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(48), 1,
      anon_sym_while,
    ACTIONS(50), 1,
      anon_sym_break,
    ACTIONS(52), 1,
      anon_sym_continue,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_function_reference,
    STATE(86), 1,
      sym_basic_type_name,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    STATE(106), 1,
      sym_function_call_expr,
    STATE(108), 1,
      sym_lvexpr,
    STATE(110), 1,
      sym_type_desc,
    ACTIONS(40), 2,
      anon_sym_int,
      anon_sym_boolean,
    STATE(4), 2,
      sym_statement,
      aux_sym_stmt_block_repeat1,
    STATE(45), 8,
      sym_local_var_decl_stmt,
      sym_function_call_stmt,
      sym_assing_stmt,
      sym_return_stmt,
      sym_if_else_stmt,
      sym_while_stmt,
      sym_break_stmt,
      sym_continue_stmt,
  [219] = 17,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(48), 1,
      anon_sym_while,
    ACTIONS(50), 1,
      anon_sym_break,
    ACTIONS(52), 1,
      anon_sym_continue,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_function_reference,
    STATE(86), 1,
      sym_basic_type_name,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    STATE(106), 1,
      sym_function_call_expr,
    STATE(108), 1,
      sym_lvexpr,
    STATE(110), 1,
      sym_type_desc,
    ACTIONS(40), 2,
      anon_sym_int,
      anon_sym_boolean,
    STATE(3), 2,
      sym_statement,
      aux_sym_stmt_block_repeat1,
    STATE(45), 8,
      sym_local_var_decl_stmt,
      sym_function_call_stmt,
      sym_assing_stmt,
      sym_return_stmt,
      sym_if_else_stmt,
      sym_while_stmt,
      sym_break_stmt,
      sym_continue_stmt,
  [280] = 17,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(48), 1,
      anon_sym_while,
    ACTIONS(50), 1,
      anon_sym_break,
    ACTIONS(52), 1,
      anon_sym_continue,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_function_reference,
    STATE(86), 1,
      sym_basic_type_name,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    STATE(106), 1,
      sym_function_call_expr,
    STATE(108), 1,
      sym_lvexpr,
    STATE(110), 1,
      sym_type_desc,
    ACTIONS(40), 2,
      anon_sym_int,
      anon_sym_boolean,
    STATE(6), 2,
      sym_statement,
      aux_sym_stmt_block_repeat1,
    STATE(45), 8,
      sym_local_var_decl_stmt,
      sym_function_call_stmt,
      sym_assing_stmt,
      sym_return_stmt,
      sym_if_else_stmt,
      sym_while_stmt,
      sym_break_stmt,
      sym_continue_stmt,
  [341] = 2,
    ACTIONS(64), 11,
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
    ACTIONS(62), 14,
      anon_sym_SLASH,
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
  [371] = 2,
    ACTIONS(68), 11,
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
    ACTIONS(66), 14,
      anon_sym_SLASH,
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
  [401] = 2,
    ACTIONS(72), 11,
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
    ACTIONS(70), 14,
      anon_sym_SLASH,
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
  [431] = 2,
    ACTIONS(76), 11,
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
    ACTIONS(74), 14,
      anon_sym_SLASH,
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
  [461] = 2,
    ACTIONS(80), 11,
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
    ACTIONS(78), 14,
      anon_sym_SLASH,
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
  [491] = 2,
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
    ACTIONS(82), 14,
      anon_sym_SLASH,
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
  [521] = 2,
    ACTIONS(88), 11,
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
    ACTIONS(86), 14,
      anon_sym_SLASH,
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
  [551] = 2,
    ACTIONS(92), 11,
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
    ACTIONS(90), 14,
      anon_sym_SLASH,
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
  [581] = 2,
    ACTIONS(96), 11,
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
    ACTIONS(94), 14,
      anon_sym_SLASH,
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
  [611] = 3,
    ACTIONS(98), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(100), 11,
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
    ACTIONS(102), 11,
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
  [643] = 2,
    ACTIONS(106), 11,
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
    ACTIONS(104), 14,
      anon_sym_SLASH,
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
  [673] = 3,
    ACTIONS(98), 3,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(108), 11,
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
    ACTIONS(110), 11,
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
  [705] = 2,
    ACTIONS(114), 11,
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
    ACTIONS(112), 14,
      anon_sym_SLASH,
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
  [735] = 2,
    ACTIONS(118), 11,
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
    ACTIONS(116), 14,
      anon_sym_SLASH,
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
  [765] = 19,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(17), 1,
      sym_multiplicative_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(21), 1,
      sym_unary_expr,
    STATE(25), 1,
      sym_additive_expr,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(63), 1,
      sym_expression,
    STATE(81), 1,
      sym_function_reference,
    STATE(89), 1,
      sym_expr_list,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [828] = 18,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_multiplicative_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(21), 1,
      sym_unary_expr,
    STATE(25), 1,
      sym_additive_expr,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(81), 1,
      sym_function_reference,
    STATE(90), 1,
      sym_module_prefix,
    STATE(93), 1,
      sym_expression,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [888] = 17,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(17), 1,
      sym_multiplicative_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(21), 1,
      sym_unary_expr,
    STATE(25), 1,
      sym_additive_expr,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(81), 1,
      sym_function_reference,
    STATE(90), 1,
      sym_module_prefix,
    STATE(95), 1,
      sym_expression,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [945] = 5,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(140), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(142), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(136), 9,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [978] = 17,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(17), 1,
      sym_multiplicative_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(21), 1,
      sym_unary_expr,
    STATE(25), 1,
      sym_additive_expr,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(81), 1,
      sym_function_reference,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    STATE(105), 1,
      sym_expression,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1035] = 17,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(17), 1,
      sym_multiplicative_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(21), 1,
      sym_unary_expr,
    STATE(25), 1,
      sym_additive_expr,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(81), 1,
      sym_function_reference,
    STATE(90), 1,
      sym_module_prefix,
    STATE(102), 1,
      sym_expression,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1092] = 17,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(17), 1,
      sym_multiplicative_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(21), 1,
      sym_unary_expr,
    STATE(25), 1,
      sym_additive_expr,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(40), 1,
      sym_expression,
    STATE(81), 1,
      sym_function_reference,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1149] = 17,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(17), 1,
      sym_multiplicative_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(21), 1,
      sym_unary_expr,
    STATE(25), 1,
      sym_additive_expr,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(81), 1,
      sym_function_reference,
    STATE(82), 1,
      sym_expression,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1206] = 17,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(17), 1,
      sym_multiplicative_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(21), 1,
      sym_unary_expr,
    STATE(25), 1,
      sym_additive_expr,
    STATE(37), 1,
      sym_equality_expr,
    STATE(38), 1,
      sym_relational_expr,
    STATE(80), 1,
      sym_expression,
    STATE(81), 1,
      sym_function_reference,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1263] = 15,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(17), 1,
      sym_multiplicative_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(21), 1,
      sym_unary_expr,
    STATE(25), 1,
      sym_additive_expr,
    STATE(39), 1,
      sym_relational_expr,
    STATE(81), 1,
      sym_function_reference,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1314] = 14,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(17), 1,
      sym_multiplicative_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(21), 1,
      sym_unary_expr,
    STATE(33), 1,
      sym_additive_expr,
    STATE(81), 1,
      sym_function_reference,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1362] = 3,
    ACTIONS(142), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(144), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(146), 9,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1387] = 13,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(19), 1,
      sym_multiplicative_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(21), 1,
      sym_unary_expr,
    STATE(81), 1,
      sym_function_reference,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1432] = 12,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(10), 1,
      sym_unary_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(81), 1,
      sym_function_reference,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1474] = 12,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(14), 1,
      sym_unary_expr,
    STATE(20), 1,
      sym_primary_expr,
    STATE(81), 1,
      sym_function_reference,
    STATE(90), 1,
      sym_module_prefix,
    STATE(103), 1,
      sym_qualified_identifier,
    ACTIONS(126), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_0,
      aux_sym_integer_literal_token1,
    STATE(18), 2,
      sym_boolean_literal,
      sym_integer_literal,
    STATE(9), 3,
      sym_literal,
      sym_function_call_expr,
      sym_variable_reference_expr,
  [1516] = 3,
    ACTIONS(152), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(148), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [1539] = 2,
    ACTIONS(154), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(156), 9,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1560] = 2,
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
  [1581] = 3,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      anon_sym_else,
    ACTIONS(162), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1598] = 2,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1612] = 2,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1626] = 2,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1640] = 2,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1654] = 2,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1668] = 2,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1682] = 2,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1696] = 2,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1710] = 2,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1724] = 2,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1738] = 2,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1752] = 2,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(212), 8,
      anon_sym_int,
      anon_sym_boolean,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      sym_identifier,
  [1766] = 6,
    ACTIONS(3), 1,
      anon_sym_import,
    ACTIONS(5), 1,
      anon_sym_public,
    ACTIONS(7), 1,
      anon_sym_function,
    STATE(69), 1,
      sym_function_defn,
    STATE(55), 2,
      sym_module_decl,
      aux_sym_module_part_repeat2,
    STATE(59), 2,
      sym_import_decl,
      aux_sym_module_part_repeat1,
  [1787] = 6,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_param,
    STATE(86), 1,
      sym_basic_type_name,
    STATE(92), 1,
      sym_type_desc,
    STATE(99), 1,
      sym_param_list,
    ACTIONS(218), 2,
      anon_sym_int,
      anon_sym_boolean,
  [1807] = 5,
    ACTIONS(5), 1,
      anon_sym_public,
    ACTIONS(7), 1,
      anon_sym_function,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_function_defn,
    STATE(56), 2,
      sym_module_decl,
      aux_sym_module_part_repeat2,
  [1824] = 5,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      anon_sym_public,
    ACTIONS(227), 1,
      anon_sym_function,
    STATE(69), 1,
      sym_function_defn,
    STATE(56), 2,
      sym_module_decl,
      aux_sym_module_part_repeat2,
  [1841] = 5,
    ACTIONS(5), 1,
      anon_sym_public,
    ACTIONS(7), 1,
      anon_sym_function,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_function_defn,
    STATE(56), 2,
      sym_module_decl,
      aux_sym_module_part_repeat2,
  [1858] = 4,
    STATE(76), 1,
      sym_param,
    STATE(86), 1,
      sym_basic_type_name,
    STATE(92), 1,
      sym_type_desc,
    ACTIONS(218), 2,
      anon_sym_int,
      anon_sym_boolean,
  [1872] = 3,
    ACTIONS(232), 1,
      anon_sym_import,
    ACTIONS(235), 2,
      anon_sym_public,
      anon_sym_function,
    STATE(59), 2,
      sym_import_decl,
      aux_sym_module_part_repeat1,
  [1884] = 3,
    STATE(86), 1,
      sym_basic_type_name,
    STATE(104), 1,
      sym_type_desc,
    ACTIONS(218), 2,
      anon_sym_int,
      anon_sym_boolean,
  [1895] = 3,
    STATE(86), 1,
      sym_basic_type_name,
    STATE(101), 1,
      sym_type_desc,
    ACTIONS(218), 2,
      anon_sym_int,
      anon_sym_boolean,
  [1906] = 3,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_if,
    STATE(47), 2,
      sym_stmt_block,
      sym_if_else_stmt,
  [1917] = 3,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_expr_list_repeat1,
  [1927] = 3,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_param_list_repeat1,
  [1937] = 1,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_function,
  [1943] = 1,
    ACTIONS(251), 3,
      anon_sym_import,
      anon_sym_public,
      anon_sym_function,
  [1949] = 3,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_param_list_repeat1,
  [1959] = 1,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_function,
  [1965] = 1,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_function,
  [1971] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_param_list_repeat1,
  [1981] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_expr_list_repeat1,
  [1991] = 1,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_function,
  [1997] = 3,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(266), 1,
      anon_sym_EQ,
  [2007] = 3,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_expr_list_repeat1,
  [2017] = 1,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_function,
  [2023] = 1,
    ACTIONS(253), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2028] = 2,
    ACTIONS(273), 1,
      anon_sym_returns,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
  [2035] = 2,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_signature,
  [2042] = 2,
    ACTIONS(279), 1,
      anon_sym_returns,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
  [2049] = 1,
    ACTIONS(268), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2054] = 2,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_arg_list,
  [2061] = 2,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_stmt_block,
  [2068] = 1,
    ACTIONS(285), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2073] = 1,
    ACTIONS(287), 2,
      anon_sym_LBRACE,
      sym_identifier,
  [2078] = 2,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_stmt_block,
  [2085] = 1,
    ACTIONS(291), 2,
      anon_sym_LBRACE,
      sym_identifier,
  [2090] = 2,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_stmt_block,
  [2097] = 2,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_signature,
  [2104] = 1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [2108] = 1,
    ACTIONS(295), 1,
      anon_sym_COLON,
  [2112] = 1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [2116] = 1,
    ACTIONS(299), 1,
      sym_identifier,
  [2120] = 1,
    ACTIONS(301), 1,
      anon_sym_SEMI,
  [2124] = 1,
    ACTIONS(303), 1,
      sym_identifier,
  [2128] = 1,
    ACTIONS(305), 1,
      anon_sym_SEMI,
  [2132] = 1,
    ACTIONS(307), 1,
      anon_sym_SLASH,
  [2136] = 1,
    ACTIONS(309), 1,
      sym_identifier,
  [2140] = 1,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
  [2144] = 1,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [2148] = 1,
    ACTIONS(315), 1,
      sym_identifier,
  [2152] = 1,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
  [2156] = 1,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
  [2160] = 1,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
  [2164] = 1,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
  [2168] = 1,
    ACTIONS(323), 1,
      anon_sym_SEMI,
  [2172] = 1,
    ACTIONS(325), 1,
      anon_sym_SEMI,
  [2176] = 1,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
  [2180] = 1,
    ACTIONS(329), 1,
      anon_sym_EQ,
  [2184] = 1,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
  [2188] = 1,
    ACTIONS(333), 1,
      sym_identifier,
  [2192] = 1,
    ACTIONS(335), 1,
      anon_sym_EQ,
  [2196] = 1,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [2200] = 1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
  [2204] = 1,
    ACTIONS(341), 1,
      sym_identifier,
  [2208] = 1,
    ACTIONS(343), 1,
      sym_identifier,
  [2212] = 1,
    ACTIONS(345), 1,
      anon_sym_function,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 97,
  [SMALL_STATE(5)] = 158,
  [SMALL_STATE(6)] = 219,
  [SMALL_STATE(7)] = 280,
  [SMALL_STATE(8)] = 341,
  [SMALL_STATE(9)] = 371,
  [SMALL_STATE(10)] = 401,
  [SMALL_STATE(11)] = 431,
  [SMALL_STATE(12)] = 461,
  [SMALL_STATE(13)] = 491,
  [SMALL_STATE(14)] = 521,
  [SMALL_STATE(15)] = 551,
  [SMALL_STATE(16)] = 581,
  [SMALL_STATE(17)] = 611,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 673,
  [SMALL_STATE(20)] = 705,
  [SMALL_STATE(21)] = 735,
  [SMALL_STATE(22)] = 765,
  [SMALL_STATE(23)] = 828,
  [SMALL_STATE(24)] = 888,
  [SMALL_STATE(25)] = 945,
  [SMALL_STATE(26)] = 978,
  [SMALL_STATE(27)] = 1035,
  [SMALL_STATE(28)] = 1092,
  [SMALL_STATE(29)] = 1149,
  [SMALL_STATE(30)] = 1206,
  [SMALL_STATE(31)] = 1263,
  [SMALL_STATE(32)] = 1314,
  [SMALL_STATE(33)] = 1362,
  [SMALL_STATE(34)] = 1387,
  [SMALL_STATE(35)] = 1432,
  [SMALL_STATE(36)] = 1474,
  [SMALL_STATE(37)] = 1516,
  [SMALL_STATE(38)] = 1539,
  [SMALL_STATE(39)] = 1560,
  [SMALL_STATE(40)] = 1581,
  [SMALL_STATE(41)] = 1598,
  [SMALL_STATE(42)] = 1612,
  [SMALL_STATE(43)] = 1626,
  [SMALL_STATE(44)] = 1640,
  [SMALL_STATE(45)] = 1654,
  [SMALL_STATE(46)] = 1668,
  [SMALL_STATE(47)] = 1682,
  [SMALL_STATE(48)] = 1696,
  [SMALL_STATE(49)] = 1710,
  [SMALL_STATE(50)] = 1724,
  [SMALL_STATE(51)] = 1738,
  [SMALL_STATE(52)] = 1752,
  [SMALL_STATE(53)] = 1766,
  [SMALL_STATE(54)] = 1787,
  [SMALL_STATE(55)] = 1807,
  [SMALL_STATE(56)] = 1824,
  [SMALL_STATE(57)] = 1841,
  [SMALL_STATE(58)] = 1858,
  [SMALL_STATE(59)] = 1872,
  [SMALL_STATE(60)] = 1884,
  [SMALL_STATE(61)] = 1895,
  [SMALL_STATE(62)] = 1906,
  [SMALL_STATE(63)] = 1917,
  [SMALL_STATE(64)] = 1927,
  [SMALL_STATE(65)] = 1937,
  [SMALL_STATE(66)] = 1943,
  [SMALL_STATE(67)] = 1949,
  [SMALL_STATE(68)] = 1959,
  [SMALL_STATE(69)] = 1965,
  [SMALL_STATE(70)] = 1971,
  [SMALL_STATE(71)] = 1981,
  [SMALL_STATE(72)] = 1991,
  [SMALL_STATE(73)] = 1997,
  [SMALL_STATE(74)] = 2007,
  [SMALL_STATE(75)] = 2017,
  [SMALL_STATE(76)] = 2023,
  [SMALL_STATE(77)] = 2028,
  [SMALL_STATE(78)] = 2035,
  [SMALL_STATE(79)] = 2042,
  [SMALL_STATE(80)] = 2049,
  [SMALL_STATE(81)] = 2054,
  [SMALL_STATE(82)] = 2061,
  [SMALL_STATE(83)] = 2068,
  [SMALL_STATE(84)] = 2073,
  [SMALL_STATE(85)] = 2078,
  [SMALL_STATE(86)] = 2085,
  [SMALL_STATE(87)] = 2090,
  [SMALL_STATE(88)] = 2097,
  [SMALL_STATE(89)] = 2104,
  [SMALL_STATE(90)] = 2108,
  [SMALL_STATE(91)] = 2112,
  [SMALL_STATE(92)] = 2116,
  [SMALL_STATE(93)] = 2120,
  [SMALL_STATE(94)] = 2124,
  [SMALL_STATE(95)] = 2128,
  [SMALL_STATE(96)] = 2132,
  [SMALL_STATE(97)] = 2136,
  [SMALL_STATE(98)] = 2140,
  [SMALL_STATE(99)] = 2144,
  [SMALL_STATE(100)] = 2148,
  [SMALL_STATE(101)] = 2152,
  [SMALL_STATE(102)] = 2156,
  [SMALL_STATE(103)] = 2160,
  [SMALL_STATE(104)] = 2164,
  [SMALL_STATE(105)] = 2168,
  [SMALL_STATE(106)] = 2172,
  [SMALL_STATE(107)] = 2176,
  [SMALL_STATE(108)] = 2180,
  [SMALL_STATE(109)] = 2184,
  [SMALL_STATE(110)] = 2188,
  [SMALL_STATE(111)] = 2192,
  [SMALL_STATE(112)] = 2196,
  [SMALL_STATE(113)] = 2200,
  [SMALL_STATE(114)] = 2204,
  [SMALL_STATE(115)] = 2208,
  [SMALL_STATE(116)] = 2212,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference_expr, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_reference, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_reference_expr, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_prefix, 1),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(84),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(23),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(28),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(29),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(113),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(112),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(73),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expr, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expr, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expr, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expr, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_expr, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_expr, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_expr, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_expr, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additive_expr, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additive_expr, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additive_expr, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additive_expr, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_expr, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_expr, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_expr, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relational_expr, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_expr, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relational_expr, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_expr, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_expr, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_expr, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_expr, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else_stmt, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else_stmt, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_stmt, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_stmt, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_stmt, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_stmt, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_stmt, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_stmt, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var_decl_stmt, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assing_stmt, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assing_stmt, 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else_stmt, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else_stmt, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_stmt, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_stmt, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_block, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_block, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_stmt, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_stmt, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_part, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_part_repeat2, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_part_repeat2, 2), SHIFT_REPEAT(116),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_part_repeat2, 2), SHIFT_REPEAT(115),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_part, 1),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_part_repeat1, 2), SHIFT_REPEAT(100),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_part_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_list, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_defn, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(58),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_defn, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_decl, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_list, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvexpr, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_list_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_list_repeat1, 2), SHIFT_REPEAT(30),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type_name, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_desc, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [331] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
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
