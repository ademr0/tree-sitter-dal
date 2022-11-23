#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_fn = 1,
  anon_sym_AT = 2,
  anon_sym_import = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COLON = 6,
  anon_sym_COMMA = 7,
  anon_sym_int = 8,
  anon_sym_bool = 9,
  anon_sym_string = 10,
  anon_sym_void = 11,
  sym_ident = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_SEMI = 15,
  anon_sym_let = 16,
  anon_sym_EQ = 17,
  anon_sym_return = 18,
  sym_int = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  sym_string = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_PERCENT = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_LT = 30,
  anon_sym_GT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_AMP_AMP = 34,
  anon_sym_PIPE_PIPE = 35,
  anon_sym_pkg = 36,
  sym_source_file = 37,
  sym__statement = 38,
  sym_fn_decl = 39,
  sym_import = 40,
  sym_params = 41,
  sym_param_list = 42,
  sym_fn_type = 43,
  sym_type = 44,
  sym_block = 45,
  sym_block_statement = 46,
  sym_var_decl = 47,
  sym_var_assign = 48,
  sym_return_stmt = 49,
  sym_fn_call = 50,
  sym_expr = 51,
  sym_bool = 52,
  sym_bin_op = 53,
  sym_operator = 54,
  sym_pkg_decl = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_params_repeat1 = 57,
  aux_sym_block_repeat1 = 58,
  aux_sym_fn_call_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fn] = "fn",
  [anon_sym_AT] = "@",
  [anon_sym_import] = "import",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_void] = "void",
  [sym_ident] = "ident",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [sym_int] = "int",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_string] = "string",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_pkg] = "pkg",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_fn_decl] = "fn_decl",
  [sym_import] = "import",
  [sym_params] = "params",
  [sym_param_list] = "param_list",
  [sym_fn_type] = "fn_type",
  [sym_type] = "type",
  [sym_block] = "block",
  [sym_block_statement] = "block_statement",
  [sym_var_decl] = "var_decl",
  [sym_var_assign] = "var_assign",
  [sym_return_stmt] = "return_stmt",
  [sym_fn_call] = "fn_call",
  [sym_expr] = "expr",
  [sym_bool] = "bool",
  [sym_bin_op] = "bin_op",
  [sym_operator] = "operator",
  [sym_pkg_decl] = "pkg_decl",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_fn_call_repeat1] = "fn_call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_void] = anon_sym_void,
  [sym_ident] = sym_ident,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [sym_int] = sym_int,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_string] = sym_string,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_pkg] = anon_sym_pkg,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_fn_decl] = sym_fn_decl,
  [sym_import] = sym_import,
  [sym_params] = sym_params,
  [sym_param_list] = sym_param_list,
  [sym_fn_type] = sym_fn_type,
  [sym_type] = sym_type,
  [sym_block] = sym_block,
  [sym_block_statement] = sym_block_statement,
  [sym_var_decl] = sym_var_decl,
  [sym_var_assign] = sym_var_assign,
  [sym_return_stmt] = sym_return_stmt,
  [sym_fn_call] = sym_fn_call,
  [sym_expr] = sym_expr,
  [sym_bool] = sym_bool,
  [sym_bin_op] = sym_bin_op,
  [sym_operator] = sym_operator,
  [sym_pkg_decl] = sym_pkg_decl,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_fn_call_repeat1] = aux_sym_fn_call_repeat1,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_string] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
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
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pkg] = {
    .visible = true,
    .named = false,
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
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_var_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_var_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_return_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_call] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_op] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_pkg_decl] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fn_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_fnType = 2,
  field_keyword = 3,
  field_left = 4,
  field_name = 5,
  field_op = 6,
  field_params = 7,
  field_path = 8,
  field_right = 9,
  field_type = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_fnType] = "fnType",
  [field_keyword] = "keyword",
  [field_left] = "left",
  [field_name] = "name",
  [field_op] = "op",
  [field_params] = "params",
  [field_path] = "path",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
  [2] = {.index = 4, .length = 1},
  [3] = {.index = 5, .length = 5},
  [4] = {.index = 10, .length = 2},
  [5] = {.index = 12, .length = 2},
  [6] = {.index = 14, .length = 2},
  [7] = {.index = 16, .length = 1},
  [8] = {.index = 17, .length = 2},
  [9] = {.index = 19, .length = 2},
  [10] = {.index = 21, .length = 3},
  [11] = {.index = 24, .length = 3},
  [12] = {.index = 27, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [4] =
    {field_type, 1},
  [5] =
    {field_body, 4},
    {field_fnType, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [10] =
    {field_keyword, 1},
    {field_path, 3},
  [12] =
    {field_keyword, 1},
    {field_name, 3},
  [14] =
    {field_name, 0},
    {field_type, 2},
  [16] =
    {field_name, 0},
  [17] =
    {field_keyword, 0},
    {field_value, 1},
  [19] =
    {field_name, 0},
    {field_value, 2},
  [21] =
    {field_left, 0},
    {field_op, 1},
    {field_right, 2},
  [24] =
    {field_keyword, 0},
    {field_name, 1},
    {field_type, 3},
  [27] =
    {field_keyword, 0},
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(95);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'k') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == '|') ADVANCE(96);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_pkg);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_pkg] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym__statement] = STATE(23),
    [sym_fn_decl] = STATE(23),
    [sym_import] = STATE(23),
    [sym_pkg_decl] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 5,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_int,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [29] = 3,
    STATE(19), 1,
      sym_operator,
    ACTIONS(17), 5,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_int,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [58] = 6,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      sym_operator,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_RPAREN,
      sym_int,
      sym_string,
    ACTIONS(23), 3,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [92] = 2,
    ACTIONS(13), 5,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_int,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [118] = 2,
    ACTIONS(31), 5,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_int,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [144] = 2,
    ACTIONS(35), 5,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_int,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [170] = 2,
    ACTIONS(39), 5,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_int,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [196] = 4,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_operator,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [220] = 4,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_operator,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [244] = 4,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_operator,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [268] = 7,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      sym_ident,
    STATE(4), 1,
      sym_expr,
    STATE(13), 1,
      aux_sym_fn_call_repeat1,
    ACTIONS(51), 2,
      sym_int,
      sym_string,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 3,
      sym_fn_call,
      sym_bool,
      sym_bin_op,
  [294] = 7,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      sym_ident,
    STATE(4), 1,
      sym_expr,
    STATE(13), 1,
      aux_sym_fn_call_repeat1,
    ACTIONS(60), 2,
      sym_int,
      sym_string,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 3,
      sym_fn_call,
      sym_bool,
      sym_bin_op,
  [320] = 7,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_expr,
    STATE(12), 1,
      aux_sym_fn_call_repeat1,
    ACTIONS(51), 2,
      sym_int,
      sym_string,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 3,
      sym_fn_call,
      sym_bool,
      sym_bin_op,
  [346] = 7,
    ACTIONS(68), 1,
      sym_ident,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      anon_sym_let,
    ACTIONS(76), 1,
      anon_sym_return,
    STATE(58), 1,
      sym_fn_call,
    STATE(15), 2,
      sym_block_statement,
      aux_sym_block_repeat1,
    STATE(34), 3,
      sym_var_decl,
      sym_var_assign,
      sym_return_stmt,
  [371] = 7,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      anon_sym_let,
    ACTIONS(85), 1,
      anon_sym_return,
    STATE(58), 1,
      sym_fn_call,
    STATE(17), 2,
      sym_block_statement,
      aux_sym_block_repeat1,
    STATE(34), 3,
      sym_var_decl,
      sym_var_assign,
      sym_return_stmt,
  [396] = 7,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_let,
    ACTIONS(85), 1,
      anon_sym_return,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_fn_call,
    STATE(15), 2,
      sym_block_statement,
      aux_sym_block_repeat1,
    STATE(34), 3,
      sym_var_decl,
      sym_var_assign,
      sym_return_stmt,
  [421] = 5,
    ACTIONS(49), 1,
      sym_ident,
    STATE(9), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_int,
      sym_string,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 3,
      sym_fn_call,
      sym_bool,
      sym_bin_op,
  [441] = 5,
    ACTIONS(49), 1,
      sym_ident,
    STATE(3), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_int,
      sym_string,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 3,
      sym_fn_call,
      sym_bool,
      sym_bin_op,
  [461] = 5,
    ACTIONS(49), 1,
      sym_ident,
    STATE(11), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_int,
      sym_string,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 3,
      sym_fn_call,
      sym_bool,
      sym_bin_op,
  [481] = 5,
    ACTIONS(49), 1,
      sym_ident,
    STATE(10), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_int,
      sym_string,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 3,
      sym_fn_call,
      sym_bool,
      sym_bin_op,
  [501] = 4,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_fn,
    ACTIONS(94), 1,
      anon_sym_AT,
    STATE(22), 5,
      sym__statement,
      sym_fn_decl,
      sym_import,
      sym_pkg_decl,
      aux_sym_source_file_repeat1,
  [518] = 4,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(22), 5,
      sym__statement,
      sym_fn_decl,
      sym_import,
      sym_pkg_decl,
      aux_sym_source_file_repeat1,
  [535] = 1,
    ACTIONS(99), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_ident,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
  [544] = 2,
    ACTIONS(55), 3,
      anon_sym_RPAREN,
      sym_int,
      sym_string,
    ACTIONS(101), 3,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
  [555] = 2,
    STATE(64), 1,
      sym_type,
    ACTIONS(103), 4,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_void,
  [565] = 2,
    STATE(46), 1,
      sym_type,
    ACTIONS(103), 4,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_void,
  [575] = 2,
    ACTIONS(107), 2,
      sym_int,
      sym_string,
    ACTIONS(105), 3,
      sym_ident,
      anon_sym_true,
      anon_sym_false,
  [585] = 2,
    STATE(52), 1,
      sym_type,
    ACTIONS(103), 4,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_void,
  [595] = 2,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 3,
      sym_ident,
      anon_sym_let,
      anon_sym_return,
  [604] = 2,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 3,
      sym_ident,
      anon_sym_let,
      anon_sym_return,
  [613] = 2,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 3,
      sym_ident,
      anon_sym_let,
      anon_sym_return,
  [622] = 3,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      sym_ident,
    STATE(38), 2,
      sym_param_list,
      aux_sym_params_repeat1,
  [633] = 2,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 3,
      sym_ident,
      anon_sym_let,
      anon_sym_return,
  [642] = 4,
    ACTIONS(129), 1,
      anon_sym_COLON,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    STATE(49), 1,
      sym_fn_type,
  [655] = 2,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 3,
      sym_ident,
      anon_sym_let,
      anon_sym_return,
  [664] = 3,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      sym_ident,
    STATE(37), 2,
      sym_param_list,
      aux_sym_params_repeat1,
  [675] = 3,
    ACTIONS(123), 1,
      sym_ident,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(37), 2,
      sym_param_list,
      aux_sym_params_repeat1,
  [686] = 2,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 3,
      sym_ident,
      anon_sym_let,
      anon_sym_return,
  [695] = 1,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_AT,
  [701] = 1,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_AT,
  [707] = 1,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_AT,
  [713] = 1,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_AT,
  [719] = 1,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_AT,
  [725] = 1,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_AT,
  [731] = 2,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(160), 2,
      anon_sym_RPAREN,
      sym_ident,
  [739] = 2,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_EQ,
  [746] = 2,
    ACTIONS(166), 1,
      anon_sym_import,
    ACTIONS(168), 1,
      anon_sym_pkg,
  [753] = 2,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
  [760] = 2,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_params,
  [767] = 1,
    ACTIONS(172), 2,
      anon_sym_RPAREN,
      sym_ident,
  [772] = 2,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    ACTIONS(176), 1,
      anon_sym_EQ,
  [779] = 1,
    ACTIONS(178), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [784] = 1,
    ACTIONS(180), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [789] = 1,
    ACTIONS(182), 1,
      sym_string,
  [793] = 1,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [797] = 1,
    ACTIONS(186), 1,
      sym_ident,
  [801] = 1,
    ACTIONS(188), 1,
      anon_sym_SEMI,
  [805] = 1,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
  [809] = 1,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
  [813] = 1,
    ACTIONS(194), 1,
      sym_ident,
  [817] = 1,
    ACTIONS(196), 1,
      sym_string,
  [821] = 1,
    ACTIONS(198), 1,
      anon_sym_COLON,
  [825] = 1,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
  [829] = 1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [833] = 1,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
  [837] = 1,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 220,
  [SMALL_STATE(11)] = 244,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 294,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 346,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 396,
  [SMALL_STATE(18)] = 421,
  [SMALL_STATE(19)] = 441,
  [SMALL_STATE(20)] = 461,
  [SMALL_STATE(21)] = 481,
  [SMALL_STATE(22)] = 501,
  [SMALL_STATE(23)] = 518,
  [SMALL_STATE(24)] = 535,
  [SMALL_STATE(25)] = 544,
  [SMALL_STATE(26)] = 555,
  [SMALL_STATE(27)] = 565,
  [SMALL_STATE(28)] = 575,
  [SMALL_STATE(29)] = 585,
  [SMALL_STATE(30)] = 595,
  [SMALL_STATE(31)] = 604,
  [SMALL_STATE(32)] = 613,
  [SMALL_STATE(33)] = 622,
  [SMALL_STATE(34)] = 633,
  [SMALL_STATE(35)] = 642,
  [SMALL_STATE(36)] = 655,
  [SMALL_STATE(37)] = 664,
  [SMALL_STATE(38)] = 675,
  [SMALL_STATE(39)] = 686,
  [SMALL_STATE(40)] = 695,
  [SMALL_STATE(41)] = 701,
  [SMALL_STATE(42)] = 707,
  [SMALL_STATE(43)] = 713,
  [SMALL_STATE(44)] = 719,
  [SMALL_STATE(45)] = 725,
  [SMALL_STATE(46)] = 731,
  [SMALL_STATE(47)] = 739,
  [SMALL_STATE(48)] = 746,
  [SMALL_STATE(49)] = 753,
  [SMALL_STATE(50)] = 760,
  [SMALL_STATE(51)] = 767,
  [SMALL_STATE(52)] = 772,
  [SMALL_STATE(53)] = 779,
  [SMALL_STATE(54)] = 784,
  [SMALL_STATE(55)] = 789,
  [SMALL_STATE(56)] = 793,
  [SMALL_STATE(57)] = 797,
  [SMALL_STATE(58)] = 801,
  [SMALL_STATE(59)] = 805,
  [SMALL_STATE(60)] = 809,
  [SMALL_STATE(61)] = 813,
  [SMALL_STATE(62)] = 817,
  [SMALL_STATE(63)] = 821,
  [SMALL_STATE(64)] = 825,
  [SMALL_STATE(65)] = 829,
  [SMALL_STATE(66)] = 833,
  [SMALL_STATE(67)] = 837,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_op, 3, .production_id = 10),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_op, 3, .production_id = 10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_call_repeat1, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fn_call_repeat1, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 4, .production_id = 7),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 4, .production_id = 7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 3, .production_id = 7),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 3, .production_id = 7),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_call_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fn_call_repeat1, 2), SHIFT_REPEAT(2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fn_call_repeat1, 2), SHIFT_REPEAT(5),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fn_call_repeat1, 2), SHIFT_REPEAT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(47),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fn_call_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl, 7, .production_id = 12),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 7, .production_id = 12),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl, 5, .production_id = 11),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 5, .production_id = 11),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_assign, 4, .production_id = 9),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_assign, 4, .production_id = 9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_stmt, 3, .production_id = 8),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 3, .production_id = 8),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(63),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pkg_decl, 5, .production_id = 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_decl, 4, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_decl, 5, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3, .production_id = 6),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 4, .production_id = 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 2, .production_id = 2),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
