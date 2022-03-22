/**
 *
 * AUTHORS: amit ginzberg
 * 
 * Date: 2021-03
 */

#include "doctest.h"
// #include "Notebook.hpp"
#include "Notebook.cpp"
#include "Direction.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
// string nospaces(string input) {
// 	std::erase(input, ' ');
// 	std::erase(input, '\t');
// 	std::erase(input, '\n');
// 	std::erase(input, '\r');
// 	return input;
// }
TEST_CASE("check throw-illeagal input") {
	ariel::Notebook note;
	CHECK_THROWS(note.read(-10, -5, -5, Direction::Vertical,3));
	CHECK_THROWS(note.read(-1, -2, -5, Direction::Vertical,3));
	CHECK_THROWS(note.read(-1, -5, 0, Direction::Vertical,3));
	CHECK_THROWS(note.read(-5, -5, -5, Direction::Vertical,30));
	CHECK_THROWS(note.read(-6, -2, -5, Direction::Vertical,30));
	CHECK_THROWS(note.read(-7, -8, 0, Direction::Vertical,30));
}
TEST_CASE("check throw-illeagal input") {
	ariel::Notebook note;
	CHECK_THROWS(note.write(-10, -5, -5, Direction::Vertical,"3"));
	CHECK_THROWS(note.write(-1, -2, -5, Direction::Vertical,"3"));
	CHECK_THROWS(note.write(-1, -5, 0, Direction::Vertical,"3"));
	CHECK_THROWS(note.write(-5, -5, -5, Direction::Vertical,"30"));
	CHECK_THROWS(note.write(-6, -2, -5, Direction::Vertical,"30"));
	CHECK_THROWS(note.write(-7, -8, 0, Direction::Vertical,"30"));
	
	
}

TEST_CASE("check throw-illeagal input") {
	ariel::Notebook note;
	CHECK_THROWS(note.erase(-10, -5, -5, Direction::Vertical,3));
	CHECK_THROWS(note.erase(-1, -2, -5, Direction::Vertical,3));
	CHECK_THROWS(note.erase(-1, -5, 0, Direction::Vertical,3));
	CHECK_THROWS(note.erase(-5, -5, -5, Direction::Vertical,30));
	CHECK_THROWS(note.erase(-6, -2, -5, Direction::Vertical,30));
	CHECK_THROWS(note.erase(-7, -8, 0, Direction::Vertical,30));
	
	
}
TEST_CASE("Good input"){
	ariel::Notebook note;
	CHECK_NOTHROW(note.read(10, 5, 5, Direction::Vertical,3));
	CHECK_NOTHROW(note.read(1, 2, 5, Direction::Vertical,3));
	CHECK_NOTHROW(note.read(1, 5, 0, Direction::Vertical,3));
	CHECK_NOTHROW(note.read(5, 5, 5, Direction::Vertical,30));
	CHECK_NOTHROW(note.read(6, 2, 5, Direction::Vertical,30));
	CHECK_NOTHROW(note.read(7, 8, 0, Direction::Vertical,30));
	
}
TEST_CASE("Good input") {
	ariel::Notebook note;
	CHECK_NOTHROW(note.write(10, 5, 5, Direction::Vertical,"3"));
	CHECK_NOTHROW(note.write(1, 2, 5, Direction::Vertical,"3"));
	CHECK_NOTHROW(note.write(1, 5, 0, Direction::Vertical,"3"));
	CHECK_NOTHROW(note.write(5, 5, 5, Direction::Vertical,"30"));
	CHECK_NOTHROW(note.write(6, 2, 5, Direction::Vertical,"30"));
	CHECK_NOTHROW(note.write(7, 8, 0, Direction::Vertical,"30"));
	
	
}
TEST_CASE("Good input") {
	ariel::Notebook note;
	CHECK_NOTHROW(note.erase(7, 8, 0, Direction::Vertical,30));
	CHECK_NOTHROW(note.erase(7, 9, 15, Direction::Vertical,30));
	CHECK_NOTHROW(note.erase(7, 2, 0, Direction::Vertical,30));
	CHECK_NOTHROW(note.erase(2, 8, 5, Direction::Vertical,30));
	CHECK_NOTHROW(note.erase(1, 8, 6, Direction::Vertical,30));
	
}
// TEST_CASE("Good input") {
// 	CHECK();
	
// }
// TEST_CASE("Good input") {
// 	CHECK();
	
// }