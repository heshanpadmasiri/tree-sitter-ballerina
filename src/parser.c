#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SQUOTE = 1,
  anon_sym__ = 2,
  sym_identifier_single_escapce = 3,
  anon_sym_BSLASHu_LBRACE = 4,
  anon_sym_RBRACE = 5,
  sym_ascii_letter = 6,
  aux_sym_hex_digit_token1 = 7,
  sym_digit = 8,
  anon_sym_SLASH_SLASH = 9,
  anon_sym_LF = 10,
  sym_any_char_but_new_line = 11,
  sym_white_space_char = 12,
  sym_source_file = 13,
  sym_identifier = 14,
  sym_unquoted_identifier = 15,
  sym_quoted_identifier = 16,
  sym_identifier_intial_char = 17,
  sym_identifier_fallowing_char = 18,
  sym_identifier_escape = 19,
  sym_numeric_escape = 20,
  sym_code_point = 21,
  sym_hex_digit = 22,
  sym_comment = 23,
  aux_sym_quoted_identifier_repeat1 = 24,
  aux_sym_code_point_repeat1 = 25,
  aux_sym_comment_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [aux_sym_quoted_identifier_repeat1] = "quoted_identifier_repeat1",
  [aux_sym_code_point_repeat1] = "code_point_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [aux_sym_quoted_identifier_repeat1] = aux_sym_quoted_identifier_repeat1,
  [aux_sym_code_point_repeat1] = aux_sym_code_point_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [aux_sym_quoted_identifier_repeat1] = {
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
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '{') ADVANCE(11);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier_single_escapce);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BSLASHu_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_ascii_letter);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_hex_digit_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_any_char_but_new_line);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_any_char_but_new_line);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 20:
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
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {(TSStateId)(-1)},
  [26] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(22),
    [sym_identifier] = STATE(24),
    [sym_unquoted_identifier] = STATE(23),
    [sym_quoted_identifier] = STATE(23),
    [sym_identifier_intial_char] = STATE(5),
    [sym_identifier_escape] = STATE(5),
    [sym_numeric_escape] = STATE(7),
    [sym_comment] = STATE(1),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym__] = ACTIONS(9),
    [sym_identifier_single_escapce] = ACTIONS(11),
    [anon_sym_BSLASHu_LBRACE] = ACTIONS(13),
    [sym_ascii_letter] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym_white_space_char] = ACTIONS(15),
  },
  [2] = {
    [sym_identifier_intial_char] = STATE(9),
    [sym_identifier_fallowing_char] = STATE(10),
    [sym_identifier_escape] = STATE(10),
    [sym_numeric_escape] = STATE(7),
    [sym_comment] = STATE(2),
    [aux_sym_quoted_identifier_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym__] = ACTIONS(19),
    [sym_identifier_single_escapce] = ACTIONS(22),
    [anon_sym_BSLASHu_LBRACE] = ACTIONS(25),
    [sym_ascii_letter] = ACTIONS(19),
    [sym_digit] = ACTIONS(28),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym_white_space_char] = ACTIONS(15),
  },
  [3] = {
    [sym_identifier_intial_char] = STATE(9),
    [sym_identifier_fallowing_char] = STATE(10),
    [sym_identifier_escape] = STATE(10),
    [sym_numeric_escape] = STATE(7),
    [sym_comment] = STATE(3),
    [aux_sym_quoted_identifier_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym__] = ACTIONS(9),
    [sym_identifier_single_escapce] = ACTIONS(11),
    [anon_sym_BSLASHu_LBRACE] = ACTIONS(13),
    [sym_ascii_letter] = ACTIONS(9),
    [sym_digit] = ACTIONS(33),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym_white_space_char] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_identifier_single_escapce,
    ACTIONS(13), 1,
      anon_sym_BSLASHu_LBRACE,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(33), 1,
      sym_digit,
    STATE(3), 1,
      aux_sym_quoted_identifier_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      sym_numeric_escape,
    STATE(9), 1,
      sym_identifier_intial_char,
    ACTIONS(9), 2,
      anon_sym__,
      sym_ascii_letter,
    STATE(10), 2,
      sym_identifier_fallowing_char,
      sym_identifier_escape,
  [36] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_identifier_single_escapce,
    ACTIONS(13), 1,
      anon_sym_BSLASHu_LBRACE,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(33), 1,
      sym_digit,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      sym_numeric_escape,
    STATE(9), 1,
      sym_identifier_intial_char,
    ACTIONS(9), 2,
      anon_sym__,
      sym_ascii_letter,
    STATE(21), 2,
      sym_identifier_fallowing_char,
      sym_identifier_escape,
  [69] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(6), 1,
      sym_comment,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym__,
      sym_identifier_single_escapce,
      anon_sym_BSLASHu_LBRACE,
      sym_ascii_letter,
      sym_digit,
  [87] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(7), 1,
      sym_comment,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym__,
      sym_identifier_single_escapce,
      anon_sym_BSLASHu_LBRACE,
      sym_ascii_letter,
      sym_digit,
  [105] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(8), 1,
      sym_comment,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym__,
      sym_identifier_single_escapce,
      anon_sym_BSLASHu_LBRACE,
      sym_ascii_letter,
      sym_digit,
  [123] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(9), 1,
      sym_comment,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym__,
      sym_identifier_single_escapce,
      anon_sym_BSLASHu_LBRACE,
      sym_ascii_letter,
      sym_digit,
  [141] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(10), 1,
      sym_comment,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      anon_sym__,
      sym_identifier_single_escapce,
      anon_sym_BSLASHu_LBRACE,
      sym_ascii_letter,
      sym_digit,
  [159] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_code_point_repeat1,
    STATE(18), 1,
      sym_hex_digit,
    ACTIONS(47), 2,
      aux_sym_hex_digit_token1,
      sym_digit,
  [182] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(11), 1,
      aux_sym_code_point_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(18), 1,
      sym_hex_digit,
    STATE(20), 1,
      sym_code_point,
    ACTIONS(47), 2,
      aux_sym_hex_digit_token1,
      sym_digit,
  [205] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_hex_digit,
    ACTIONS(51), 2,
      aux_sym_hex_digit_token1,
      sym_digit,
    STATE(13), 2,
      sym_comment,
      aux_sym_code_point_repeat1,
  [226] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      sym_white_space_char,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(56), 1,
      sym_any_char_but_new_line,
    STATE(14), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_comment_repeat1,
  [245] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      sym_white_space_char,
    ACTIONS(58), 1,
      anon_sym_LF,
    ACTIONS(60), 1,
      sym_any_char_but_new_line,
    STATE(15), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [262] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      sym_white_space_char,
    ACTIONS(56), 1,
      sym_any_char_but_new_line,
    ACTIONS(63), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    STATE(16), 1,
      sym_comment,
  [281] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(17), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_RBRACE,
      aux_sym_hex_digit_token1,
      sym_digit,
  [296] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    STATE(18), 1,
      sym_comment,
    ACTIONS(67), 3,
      anon_sym_RBRACE,
      aux_sym_hex_digit_token1,
      sym_digit,
  [311] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      sym_white_space_char,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(71), 1,
      sym_any_char_but_new_line,
    STATE(19), 1,
      sym_comment,
  [327] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_comment,
  [340] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_comment,
  [353] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_comment,
  [366] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_comment,
  [379] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_white_space_char,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_comment,
  [392] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [396] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 69,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 105,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 141,
  [SMALL_STATE(11)] = 159,
  [SMALL_STATE(12)] = 182,
  [SMALL_STATE(13)] = 205,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 245,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 296,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 327,
  [SMALL_STATE(21)] = 340,
  [SMALL_STATE(22)] = 353,
  [SMALL_STATE(23)] = 366,
  [SMALL_STATE(24)] = 379,
  [SMALL_STATE(25)] = 392,
  [SMALL_STATE(26)] = 396,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(6),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(7),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(12),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_intial_char, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_escape, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_escape, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_fallowing_char, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_point, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_point_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_point_repeat1, 2), SHIFT_REPEAT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_digit, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_point_repeat1, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_identifier, 2),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
