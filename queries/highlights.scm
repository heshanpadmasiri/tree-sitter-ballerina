"break" @keyword
"const" @keyword
"check" @keyword
"checkpanic" @keyword
"else" @keyword
"foreach" @keyword
"function" @keyword
"final" @keyword
"if" @keyword
"import" @keyword
"public" @keyword
"returns" @keyword
"return" @keyword
"type" @keyword
"while" @keyword

";" @delimiter
":" @delimiter

"=" @operator
"==" @operator
"!=" @operator
"<" @operator
"<=" @operator
">" @operator
">=" @operator
"+" @operator
"-" @operator
"*" @operator
"/" @operator
"%" @operator
"==" @operator

(type_desc) @type
(builtin_type_name) @type.builtin

(function_defn (identifier) @function)
(function_call_expr (function_reference) @function)
(method_call_expr (identifier) @function.method)

(string_literal) @string

(int_literal) @number
(floating_point_literal) @number

(field_desc (identifier) @property)
(field_access_lvexpr (identifier) @property)
(field_access_expr (expression) @property)

(comment) @comment
