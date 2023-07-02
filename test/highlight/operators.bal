import ballerina/io;
//              ^operator

public function main() {
    int a = 1 + 2;
//        ^ operator
//            ^ operator
    io:println(a - 2);
//               ^ operator
    int b = a * 2;
//        ^ operator
//            ^ operator
    int c = b / 4;
//        ^ operator
//            ^ operator
    if c % 3 == 0 {
//       ^ operator
//           ^ operator
        io:println("a");
    }
    else if (c != 3) {
//             ^ operator
    }
    int c = a > 5 ? 10 : -10;
//            ^ operator
//                ^ operator
//                     ^ delimiter
//                       ^operator
}
