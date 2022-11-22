#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_fn = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COLON = 5,
  anon_sym_int = 6,
  anon_sym_bool = 7,
  anon_sym_void = 8,
  sym_ident = 9,
  sym_source_file = 10,
  sym__statement = 11,
  sym_fn_decl = 12,
  sym_fn_args = 13,
  sym_fn_arg = 14,
  sym_type = 15,
  sym_fn_type = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_fn_args_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [sym_ident] = "ident",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_fn_decl] = "fn_decl",
  [sym_fn_args] = "fn_args",
  [sym_fn_arg] = "fn_arg",
  [sym_type] = "type",
  [sym_fn_type] = "fn_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_fn_args_repeat1] = "fn_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [sym_ident] = sym_ident,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_fn_decl] = sym_fn_decl,
  [sym_fn_args] = sym_fn_args,
  [sym_fn_arg] = sym_fn_arg,
  [sym_type] = sym_type,
  [sym_fn_type] = sym_fn_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_fn_args_repeat1] = aux_sym_fn_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_fn_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_args] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fn_args_repeat1] = {
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
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'v') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym__statement] = STATE(2),
    [sym_fn_decl] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym__statement,
      sym_fn_decl,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_fn,
    STATE(3), 3,
      sym__statement,
      sym_fn_decl,
      aux_sym_source_file_repeat1,
  [24] = 2,
    STATE(7), 1,
      sym_type,
    ACTIONS(14), 3,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_void,
  [33] = 2,
    STATE(14), 1,
      sym_type,
    ACTIONS(14), 3,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_void,
  [42] = 1,
    ACTIONS(16), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [49] = 3,
    ACTIONS(18), 1,
      anon_sym_COMMA,
    ACTIONS(20), 1,
      anon_sym_RPAREN,
    STATE(8), 2,
      sym_fn_arg,
      aux_sym_fn_args_repeat1,
  [60] = 3,
    ACTIONS(18), 1,
      anon_sym_COMMA,
    ACTIONS(22), 1,
      anon_sym_RPAREN,
    STATE(9), 2,
      sym_fn_arg,
      aux_sym_fn_args_repeat1,
  [71] = 3,
    ACTIONS(24), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(9), 2,
      sym_fn_arg,
      aux_sym_fn_args_repeat1,
  [82] = 2,
    STATE(15), 1,
      sym_type,
    ACTIONS(14), 3,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_void,
  [91] = 2,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_fn_args,
  [98] = 2,
    ACTIONS(31), 1,
      anon_sym_COLON,
    STATE(13), 1,
      sym_fn_type,
  [105] = 1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [110] = 1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [115] = 1,
    ACTIONS(37), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [120] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [124] = 1,
    ACTIONS(41), 1,
      sym_ident,
  [128] = 1,
    ACTIONS(43), 1,
      anon_sym_COMMA,
  [132] = 1,
    ACTIONS(45), 1,
      sym_ident,
  [136] = 1,
    ACTIONS(47), 1,
      sym_ident,
  [140] = 1,
    ACTIONS(49), 1,
      anon_sym_COLON,
  [144] = 1,
    ACTIONS(51), 1,
      anon_sym_COLON,
  [148] = 1,
    ACTIONS(53), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 49,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 71,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 91,
  [SMALL_STATE(12)] = 98,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 110,
  [SMALL_STATE(15)] = 115,
  [SMALL_STATE(16)] = 120,
  [SMALL_STATE(17)] = 124,
  [SMALL_STATE(18)] = 128,
  [SMALL_STATE(19)] = 132,
  [SMALL_STATE(20)] = 136,
  [SMALL_STATE(21)] = 140,
  [SMALL_STATE(22)] = 144,
  [SMALL_STATE(23)] = 148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fn_args_repeat1, 2), SHIFT_REPEAT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_args_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_decl, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_arg, 4),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_args, 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_args, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dal(void) {
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
