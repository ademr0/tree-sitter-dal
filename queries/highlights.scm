(fn_decl
  keyword: "fn" @keyword
  name: (ident) @function
)

(type) @type
(operator) @operator

(return_stmt
  keyword: "return" @keyword
  value: (expr) @identifier
)

(var_decl
  keyword: "let" @keyword
  name: (ident) @variable
)

(fn_call
  name: (ident) @function
)

(import
  "@" @keyword
  keyword: "import" @keyword
  path: (string) @string
)

(pkg_decl
  "@" @keyword
  keyword: "pkg" @keyword
  name: (string) @string
)

(int) @number
(bool) @boolean
(string) @string

[
 "("
 ")"
 "{"
 "}"
] @punctuation.bracket

[
 ","
 ";"
] @punctuation.delimiter
