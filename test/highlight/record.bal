type A record {
    int A = 1;
//  ^ type.builtin
//          ^ number
};

function tmp(A a) returns int {
    return A.a;
//           ^ property
}
