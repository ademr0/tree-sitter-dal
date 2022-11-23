module.exports = grammar({
  name: 'dal',

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.pkg_decl,
      $.import,
      $.fn_decl,
    ),

    fn_decl: $ => seq(
      field('keyword', 'fn'),
      field('name', $.ident),
      field('params', $.params),
      optional(field('fnType', $.fn_type)),
      field('body', $.block),
    ),

    import: $ => seq(
      '@',
      field('keyword', 'import'),
      '(',
      field('path', $.string),
      ')',
    ),

    params: $ => seq(
      '(',
      optional(repeat($.param_list)),
      ')',
    ),

    param_list: $ => seq(
      field('name', $.ident),
      ':',
      field('type', $.type),
      optional(','),
    ),

    fn_type: $ => seq(
      ':',
      field('type', $.type),
    ),

    type: $ => choice(
      'int',
      'bool',
      'string',
      'void',
    ),

    ident: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    block: $ => seq(
      '{',
      repeat($.block_statement),
      '}',
    ),

    block_statement: $ => choice(
      $.var_decl,
      $.var_assign,
      seq($.fn_call, ';'),
      $.return_stmt,
    ),

    var_decl: $ => seq(
      field('keyword', 'let'),
      field('name', $.ident),
      ':',
      field('type', $.type),
      optional(seq('=', field('value', $.expr))),
      ';',
    ),

    var_assign: $ => seq(
      field('name', $.ident),
      '=',
      field('value', $.expr),
      ';',
    ),

    return_stmt: $ => seq(
      field('keyword', 'return'),
      field('value', $.expr),
      ';',
    ),

    fn_call: $ => seq(
      field('name', $.ident),
      '(',
      optional(repeat(seq($.expr, optional(',')))),
      ')',
    ),

    expr: $ => choice(
      $.ident,
      $.int,
      $.bool,
      $.string,
      $.fn_call,
      $.bin_op,
    ),

    int: $ => /[0-9]+/,
    bool: $ => choice('true', 'false'),
    string: $ => /"[^"]*"/,

    bin_op: $ => prec.left(1, seq(
      field('left', $.expr),
      field('op',
        $.operator,
      ),
      field('right', $.expr),
    )),

    operator: $ => choice(
      '+',
      '-',
      '*',
      '/',
      '%',
      '==',
      '!=',
      '<',
      '>',
      '<=',
      '>=',
      '&&',
      '||',
    ),

    pkg_decl: $ => seq(
      '@',
      field('keyword', 'pkg'),
      '(',
      field('name', $.string),
      ')',
    ),
  },
});
