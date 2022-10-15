function test() {
    var a = ["ab", "bc"];
//            ^ string
//                  ^ string
    var b = ["ab", 1, "bc"];
//            ^ string
//                 ^ number
//                     ^ string
    var c = "ab" + "cd";
//           ^ string
//               ^ operator
//                  ^ string
}
