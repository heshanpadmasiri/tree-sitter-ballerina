import XCTest
import SwiftTreeSitter
import TreeSitterTreeSitterBallerina

final class TreeSitterTreeSitterBallerinaTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_tree_sitter_ballerina())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading TreeSitterBallerina grammar")
    }
}
