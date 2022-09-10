function tmp (int a, boolean b) returns int {
//             ^ type.builtin
//                    ^ type.builtin
//                                       ^ type.builtin
    int c = a + 1;
//   ^ type.builtin
    boolean b = false;
//   ^ type.builtin
    return c;
}
