import ballerina/io;
// ^ keyword

public function main() returns error? {
// ^ keyword
//      ^ keyword
//                      ^ keyword
    int a = 5;
    if a < 6 {
//   ^ keyword
        io:println("less than 6");
    }
    else {
//   ^ keyword
        io:println("greater");
    }
    while a < 6 {
        a += 6;
        if a == 7 {
//       ^ keyword
            break;
//           ^ keyword
        }
    }
    if a < 6 {
//   ^ keyword
        return error("unexpected");
//       ^ keyword
    }
}
