#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_SQUOTE = 2,
  anon_sym__ = 3,
  sym_identifier_single_escapce = 4,
  anon_sym_BSLASHu_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_ascii_letter = 7,
  aux_sym_hex_digit_token1 = 8,
  sym_digit = 9,
  anon_sym_SLASH_SLASH = 10,
  anon_sym_LF = 11,
  sym_any_char_but_new_line = 12,
  sym_white_space_char = 13,
  sym_source_file = 14,
  sym_module_level_defns = 15,
  sym_identifier = 16,
  sym_unquoted_identifier = 17,
  sym_quoted_identifier = 18,
  sym_identifier_intial_char = 19,
  sym_identifier_fallowing_char = 20,
  sym_identifier_escape = 21,
  sym_numeric_escape = 22,
  sym_code_point = 23,
  sym_hex_digit = 24,
  sym_comment = 25,
  aux_sym_module_level_defns_repeat1 = 26,
  aux_sym_unquoted_identifier_repeat1 = 27,
  aux_sym_code_point_repeat1 = 28,
  aux_sym_comment_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_SQUOTE] = "'",
  [anon_sym__] = "_",
  [sym_identifier_single_escapce] = "identifier_single_escapce",
  [anon_sym_BSLASHu_LBRACE] = "\\u{",
  [anon_sym_RBRACE] = "}",
  [sym_ascii_letter] = "ascii_letter",
  [aux_sym_hex_digit_token1] = "hex_digit_token1",
  [sym_digit] = "digit",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_LF] = "\n",
  [sym_any_char_but_new_line] = "any_char_but_new_line",
  [sym_white_space_char] = "white_space_char",
  [sym_source_file] = "source_file",
  [sym_module_level_defns] = "module_level_defns",
  [sym_identifier] = "identifier",
  [sym_unquoted_identifier] = "unquoted_identifier",
  [sym_quoted_identifier] = "quoted_identifier",
  [sym_identifier_intial_char] = "identifier_intial_char",
  [sym_identifier_fallowing_char] = "identifier_fallowing_char",
  [sym_identifier_escape] = "identifier_escape",
  [sym_numeric_escape] = "numeric_escape",
  [sym_code_point] = "code_point",
  [sym_hex_digit] = "hex_digit",
  [sym_comment] = "comment",
  [aux_sym_module_level_defns_repeat1] = "module_level_defns_repeat1",
  [aux_sym_unquoted_identifier_repeat1] = "unquoted_identifier_repeat1",
  [aux_sym_code_point_repeat1] = "code_point_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym__] = anon_sym__,
  [sym_identifier_single_escapce] = sym_identifier_single_escapce,
  [anon_sym_BSLASHu_LBRACE] = anon_sym_BSLASHu_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_ascii_letter] = sym_ascii_letter,
  [aux_sym_hex_digit_token1] = aux_sym_hex_digit_token1,
  [sym_digit] = sym_digit,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_LF] = anon_sym_LF,
  [sym_any_char_but_new_line] = sym_any_char_but_new_line,
  [sym_white_space_char] = sym_white_space_char,
  [sym_source_file] = sym_source_file,
  [sym_module_level_defns] = sym_module_level_defns,
  [sym_identifier] = sym_identifier,
  [sym_unquoted_identifier] = sym_unquoted_identifier,
  [sym_quoted_identifier] = sym_quoted_identifier,
  [sym_identifier_intial_char] = sym_identifier_intial_char,
  [sym_identifier_fallowing_char] = sym_identifier_fallowing_char,
  [sym_identifier_escape] = sym_identifier_escape,
  [sym_numeric_escape] = sym_numeric_escape,
  [sym_code_point] = sym_code_point,
  [sym_hex_digit] = sym_hex_digit,
  [sym_comment] = sym_comment,
  [aux_sym_module_level_defns_repeat1] = aux_sym_module_level_defns_repeat1,
  [aux_sym_unquoted_identifier_repeat1] = aux_sym_unquoted_identifier_repeat1,
  [aux_sym_code_point_repeat1] = aux_sym_code_point_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier_single_escapce] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASHu_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_ascii_letter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_hex_digit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_any_char_but_new_line] = {
    .visible = true,
    .named = true,
  },
  [sym_white_space_char] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module_level_defns] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_intial_char] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_fallowing_char] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_code_point] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_level_defns_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_point_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
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
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == '{') ADVANCE(12);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier_single_escapce);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BSLASHu_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_ascii_letter);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_hex_digit_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_any_char_but_new_line);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_any_char_but_new_line);
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_white_space_char);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {(TSStateId)(-1)},
  [30] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_ascii_letter] = ACTIONS(1),
    [aux_sym_hex_digit_token1] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
    [sym_any_char_but_new_line] = ACTIONS(1),
    [sym_white_space_char] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_module_level_defns] = STATE(28),
    [sym_identifier] = STATE(27),
    [sym_unquoted_identifier] = STATE(26),
    [sym_quoted_identifier] = STATE(26),
    [sym_identifier_intial_char] = STATE(6),
    [sym_identifier_escape] = STATE(6),
    [sym_numeric_escape] = STATE(11),
    [sym_comment] = STATE(1),
    [aux_sym_module_level_defns_repeat1] = STATE(2),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym__] = ACTIONS(9),
    [sym_identifier_single_escapce] = ACTIONS(11),
    [anon_sym_BSLASHu_LBRACE] = ACTIONS(13),
    [sym_ascii_letter] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym_white_space_char] = ACTIONS(15),
  },
  [2] = {
    [sym_identifier] = STATE(27),
    [sym_unquoted_identifier] = STATE(26),
    [sym_quoted_identifier] = STATE(26),
    [sym_identifier_intial_char] = STATE(6),
    [sym_identifier_escape] = STATE(6),
    [sym_numeric_escape] = STATE(11),
    [sym_comment] = STATE(2),
    [aux_sym_module_level_defns_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym__] = ACTIONS(9),
    [sym_identifier_single_escapce] = ACTIONS(11),
    [anon_sym_BSLASHu_LBRACE] = ACTIONS(13),
    [sym_ascii_letter] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym_white_space_char] = ACTIONS(15),
  },
  [3] = {
    [sym_identifier] = STATE(27),
    [sym_unquoted_identifier] = STATE(26),
    [sym_quoted_identifier] = STATE(26),
    [sym_identifier_intial_char] = STATE(6),
    [sym_identifier_escape] = STATE(6),
    [sym_numeric_escape] = STATE(11),
    [sym_comment] = STATE(3),
    [aux_sym_module_level_defns_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym__] = ACTIONS(24),
    [sym_identifier_single_escapce] = ACTIONS(27),
    [anon_sym_BSLASHu_LBRACE] = ACTIONS(30),
    [sym_ascii_letter] = ACTIONS(24),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym_white_space_char] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      sym_identifier_single_escapce,
    ACTIONS(41), 1,
      anon_sym_BSLASHu_LBRACE,
    ACTIONS(44), 1,
      sym_digit,
    STATE(11), 1,
      sym_numeric_escape,
    STATE(13), 1,
      sym_identifier_intial_char,
    ACTIONS(35), 2,
      anon_sym__,
      sym_ascii_letter,
    STATE(4), 2,
      sym_comment,
      aux_sym_unquoted_identifier_repeat1,
    STATE(14), 2,
      sym_identifier_fallowing_char,
      sym_identifier_escape,
  [37] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_identifier_single_escapce,
    ACTIONS(13), 1,
      anon_sym_BSLASHu_LBRACE,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      sym_digit,
    STATE(4), 1,
      aux_sym_unquoted_identifier_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(11), 1,
      sym_numeric_escape,
    STATE(13), 1,
      sym_identifier_intial_char,
    ACTIONS(9), 2,
      anon_sym__,
      sym_ascii_letter,
    STATE(14), 2,
      sym_identifier_fallowing_char,
      sym_identifier_escape,
  [76] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_identifier_single_escapce,
    ACTIONS(13), 1,
      anon_sym_BSLASHu_LBRACE,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(49), 1,
      sym_digit,
    ACTIONS(51), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      aux_sym_unquoted_identifier_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(11), 1,
      sym_numeric_escape,
    STATE(13), 1,
      sym_identifier_intial_char,
    ACTIONS(9), 2,
      anon_sym__,
      sym_ascii_letter,
    STATE(14), 2,
      sym_identifier_fallowing_char,
      sym_identifier_escape,
  [115] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_identifier_single_escapce,
    ACTIONS(13), 1,
      anon_sym_BSLASHu_LBRACE,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(49), 1,
      sym_digit,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      aux_sym_unquoted_identifier_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(11), 1,
      sym_numeric_escape,
    STATE(13), 1,
      sym_identifier_intial_char,
    ACTIONS(9), 2,
      anon_sym__,
      sym_ascii_letter,
    STATE(14), 2,
      sym_identifier_fallowing_char,
      sym_identifier_escape,
  [154] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_identifier_single_escapce,
    ACTIONS(13), 1,
      anon_sym_BSLASHu_LBRACE,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(49), 1,
      sym_digit,
    STATE(7), 1,
      aux_sym_unquoted_identifier_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(11), 1,
      sym_numeric_escape,
    STATE(13), 1,
      sym_identifier_intial_char,
    ACTIONS(9), 2,
      anon_sym__,
      sym_ascii_letter,
    STATE(14), 2,
      sym_identifier_fallowing_char,
      sym_identifier_escape,
  [190] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(9), 1,
      sym_comment,
    ACTIONS(19), 6,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym__,
      sym_identifier_single_escapce,
      anon_sym_BSLASHu_LBRACE,
      sym_ascii_letter,
  [208] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(10), 1,
      sym_comment,
    ACTIONS(55), 6,
      anon_sym_SEMI,
      anon_sym__,
      sym_identifier_single_escapce,
      anon_sym_BSLASHu_LBRACE,
      sym_ascii_letter,
      sym_digit,
  [226] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(11), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SEMI,
      anon_sym__,
      sym_identifier_single_escapce,
      anon_sym_BSLASHu_LBRACE,
      sym_ascii_letter,
      sym_digit,
  [244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(12), 1,
      sym_comment,
    ACTIONS(59), 6,
      anon_sym_SEMI,
      anon_sym__,
      sym_identifier_single_escapce,
      anon_sym_BSLASHu_LBRACE,
      sym_ascii_letter,
      sym_digit,
  [262] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(13), 1,
      sym_comment,
    ACTIONS(61), 6,
      anon_sym_SEMI,
      anon_sym__,
      sym_identifier_single_escapce,
      anon_sym_BSLASHu_LBRACE,
      sym_ascii_letter,
      sym_digit,
  [280] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(14), 1,
      sym_comment,
    ACTIONS(63), 6,
      anon_sym_SEMI,
      anon_sym__,
      sym_identifier_single_escapce,
      anon_sym_BSLASHu_LBRACE,
      sym_ascii_letter,
      sym_digit,
  [298] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_code_point_repeat1,
    STATE(20), 1,
      sym_hex_digit,
    ACTIONS(67), 2,
      aux_sym_hex_digit_token1,
      sym_digit,
  [321] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(15), 1,
      aux_sym_code_point_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(20), 1,
      sym_hex_digit,
    STATE(24), 1,
      sym_code_point,
    ACTIONS(67), 2,
      aux_sym_hex_digit_token1,
      sym_digit,
  [344] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_hex_digit,
    ACTIONS(71), 2,
      aux_sym_hex_digit_token1,
      sym_digit,
    STATE(17), 2,
      sym_comment,
      aux_sym_code_point_repeat1,
  [365] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      sym_white_space_char,
    ACTIONS(74), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      sym_any_char_but_new_line,
    STATE(18), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [382] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(19), 1,
      sym_comment,
    ACTIONS(79), 3,
      anon_sym_RBRACE,
      aux_sym_hex_digit_token1,
      sym_digit,
  [397] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(20), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_RBRACE,
      aux_sym_hex_digit_token1,
      sym_digit,
  [412] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      sym_white_space_char,
    ACTIONS(83), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      sym_any_char_but_new_line,
    STATE(18), 1,
      aux_sym_comment_repeat1,
    STATE(21), 1,
      sym_comment,
  [431] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      sym_white_space_char,
    ACTIONS(85), 1,
      sym_any_char_but_new_line,
    ACTIONS(87), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_comment_repeat1,
    STATE(22), 1,
      sym_comment,
  [450] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      sym_white_space_char,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 1,
      sym_any_char_but_new_line,
    STATE(23), 1,
      sym_comment,
  [466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_comment,
  [479] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_comment,
  [492] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_comment,
  [505] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
  [518] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_comment,
  [531] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [535] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 37,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 190,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 226,
  [SMALL_STATE(12)] = 244,
  [SMALL_STATE(13)] = 262,
  [SMALL_STATE(14)] = 280,
  [SMALL_STATE(15)] = 298,
  [SMALL_STATE(16)] = 321,
  [SMALL_STATE(17)] = 344,
  [SMALL_STATE(18)] = 365,
  [SMALL_STATE(19)] = 382,
  [SMALL_STATE(20)] = 397,
  [SMALL_STATE(21)] = 412,
  [SMALL_STATE(22)] = 431,
  [SMALL_STATE(23)] = 450,
  [SMALL_STATE(24)] = 466,
  [SMALL_STATE(25)] = 479,
  [SMALL_STATE(26)] = 492,
  [SMALL_STATE(27)] = 505,
  [SMALL_STATE(28)] = 518,
  [SMALL_STATE(29)] = 531,
  [SMALL_STATE(30)] = 535,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_level_defns, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_level_defns_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_level_defns_repeat1, 2), SHIFT_REPEAT(8),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_level_defns_repeat1, 2), SHIFT_REPEAT(10),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_level_defns_repeat1, 2), SHIFT_REPEAT(11),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_level_defns_repeat1, 2), SHIFT_REPEAT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_identifier_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_identifier_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_identifier_repeat1, 2), SHIFT_REPEAT(11),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_identifier_repeat1, 2), SHIFT_REPEAT(16),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_identifier_repeat1, 2), SHIFT_REPEAT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_identifier, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_identifier, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_intial_char, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_escape, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_escape, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_fallowing_char, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_identifier_repeat1, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_point, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_point_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_point_repeat1, 2), SHIFT_REPEAT(19),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_digit, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_point_repeat1, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
