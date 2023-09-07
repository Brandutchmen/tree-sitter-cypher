#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_MATCH = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RETURN = 5,
  sym_identifier = 6,
  sym_source_file = 7,
  sym_match_statement = 8,
  sym_return_statement = 9,
  aux_sym_source_file_repeat1 = 10,
  aux_sym_match_statement_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_MATCH] = "MATCH",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_RETURN] = "RETURN",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_match_statement] = "match_statement",
  [sym_return_statement] = "return_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_match_statement_repeat1] = "match_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_MATCH] = anon_sym_MATCH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_match_statement] = sym_match_statement,
  [sym_return_statement] = sym_return_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_match_statement_repeat1] = aux_sym_match_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_MATCH] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RETURN] = {
    .visible = true,
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
  [sym_match_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_statement_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == 'M') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'C') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'H') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'R') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'T') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'U') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_MATCH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_MATCH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(19),
    [sym_match_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_MATCH] = ACTIONS(5),
    [anon_sym_RETURN] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_MATCH,
    ACTIONS(7), 1,
      anon_sym_RETURN,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym_match_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [15] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_MATCH,
    ACTIONS(16), 1,
      anon_sym_RETURN,
    STATE(3), 3,
      sym_match_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [30] = 2,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_MATCH,
      anon_sym_RETURN,
  [39] = 2,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_MATCH,
      anon_sym_RETURN,
  [48] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_MATCH,
      anon_sym_RETURN,
  [54] = 2,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      aux_sym_match_statement_repeat1,
  [61] = 2,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_match_statement_repeat1,
  [68] = 2,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_match_statement_repeat1,
  [75] = 1,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
  [79] = 1,
    ACTIONS(36), 1,
      sym_identifier,
  [83] = 1,
    ACTIONS(38), 1,
      sym_identifier,
  [87] = 1,
    ACTIONS(40), 1,
      sym_identifier,
  [91] = 1,
    ACTIONS(42), 1,
      anon_sym_COMMA,
  [95] = 1,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
  [99] = 1,
    ACTIONS(46), 1,
      sym_identifier,
  [103] = 1,
    ACTIONS(48), 1,
      sym_identifier,
  [107] = 1,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
  [111] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [115] = 1,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
  [119] = 1,
    ACTIONS(21), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 61,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 75,
  [SMALL_STATE(11)] = 79,
  [SMALL_STATE(12)] = 83,
  [SMALL_STATE(13)] = 87,
  [SMALL_STATE(14)] = 91,
  [SMALL_STATE(15)] = 95,
  [SMALL_STATE(16)] = 99,
  [SMALL_STATE(17)] = 103,
  [SMALL_STATE(18)] = 107,
  [SMALL_STATE(19)] = 111,
  [SMALL_STATE(20)] = 115,
  [SMALL_STATE(21)] = 119,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_statement, 5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_statement, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_statement_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_statement_repeat1, 4),
  [52] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cypher(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
