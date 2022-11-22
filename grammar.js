module.exports = grammar({
  name: 'dal',

  rules: {
    source_file: $ => repeat($._statement),
    _statement: $ => choice(
      $.fn_decl,
    ),
    fn_decl: $ => seq(
      'fn',
      $.ident,
      $.fn_args,
      $.fn_type,
    ),
    fn_args: $ => seq(
      '(',
      $.ident,
      ',',
      $.type,
      repeat($.fn_arg),
      ')',
    ),
    fn_arg: $ => seq(
      ',',
      $.ident,
      ':',
      $.type,
    ),
    type: $ => choice(
      'int',
      'bool',
      'void',
    ),
    ident: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    fn_type: $ => seq(
      ':',
      $.type,
    ),
  },
});
