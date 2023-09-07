module.exports = grammar({
  name: 'cypher',

  rules: {
    source_file: $ => repeat(choice($.match_statement, $.return_statement)),

    match_statement: $ => seq(
      'MATCH',
      repeat(seq('(', $.identifier, ')', ',')),
      '(', $.identifier, ')'
    ),

    return_statement: $ => seq(
      'RETURN',
      $.identifier,
      ',',
      $.identifier
    ),

    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,
  }
});
