"ascending" @keyword
"break" @keyword
"by" @keyword
"check" @keyword
"checkpanic" @keyword
"conflict" @keyword
"const" @keyword
"descending" @keyword
"else" @keyword
"equals"@keyword
"final" @keyword
"foreach" @keyword
"from" @keyword
"function" @keyword
"if" @keyword
"import" @keyword
"in" @keyword
"join" @keyword
"let" @keyword
"limit" @keyword
"on" @keyword
"on" @keyword
"order" @keyword
"outer" @keyword
"public" @keyword
"return" @keyword
"returns" @keyword
"select" @keyword
"type" @keyword
"var" @keyword
"where" @keyword
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
