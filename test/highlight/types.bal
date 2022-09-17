type A int|boolean;

function tmp (int a, boolean b) returns int {
//             ^ type.builtin
//                    ^ type.builtin
//                                       ^ type.builtin
    int c = a + 1;
//   ^ type.builtin
    boolean b = false;
//   ^ type.builtin
    A x = 1;
//  ^ type
    int&byte y = 5;
//  ^ type.builtin
//      ^ type.builtin
    return c;
}
