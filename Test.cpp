/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(33232124)) == nospaces("   _\n  /_\\n'\'(o_O)\n (] [)>\n(   )"));
    CHECK(nospaces(snowman(32443333)) == nospaces("   _\n  /_\\n (-.-)\n/(> <)\\n(___)"));
    CHECK(nospaces(snowman(44444432)) == nospaces("  ___\n (_*_)\\n (- -)\n (> <)'\'\n (" ")"));
    CHECK(nospaces(snowman(44444444)) == nospaces("  ___\n (_*_)\\n (- -)\n  (   )\\n  (   )"));
    CHECK(nospaces(snowman(12341214)) == nospaces(" _===_\n (O.-)/\\n<( : )\n (   )"));
    
    /* Add more checks here */
}

/*

*/


TEST_CASE("Bad snowman code") {
    CHECK(nospaces(snowman(11113411)) != nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(33232114)) != nospaces("   _\n  /_\\n'\'(o_O)\n (] [)>\n(   )"));
    CHECK(nospaces(snowman(32441333)) != nospaces("   _\n  /_\\n (-.-)\n/(> <)\\n(___)"));
    CHECK(nospaces(snowman(44414432)) != nospaces("  ___\n (_*_)\\n (- -)\n (> <)'\'\n (" ")"));
    CHECK(nospaces(snowman(44441444)) != nospaces("  ___\n (_*_)\\n (- -)\n  (   )\\n  (   )"));
    CHECK(nospaces(snowman(11341214)) != nospaces(" _===_\n (O.-)/\\n<( : )\n (   )"));
}


TEST_CASE("Bad snowman code") {
    for(int i=6; i<2147; i++){
        CHECK_THROWS(snowman(i));
    }
}

TEST_CASE("Bad snowman code") {
    for(int i=6; i<2147; i*=2){
        CHECK_THROWS(snowman(i));
    }
}
TEST_CASE("Bad snowman code") {
    for(int i=6; i<214; i+=13){
        CHECK_THROWS(snowman(i));
    }
}
TEST_CASE("Bad snowman code") {
    for(int i=6; i<217; i+=88){
        CHECK_THROWS(snowman(i));
    }
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(123));
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(20013));
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(323));
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(513));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(999));
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(567));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(1243));
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(2133));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(12437));
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(21331));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(123321));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(21321));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code - too short") {
    CHECK_THROWS(snowman(24331));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code - too short") {
    CHECK_THROWS(snowman(24331789));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code - end input") {
    CHECK_THROWS(snowman(243319000));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code - end input") {
    CHECK_THROWS(snowman(243300229));
    /* Add more checks here */
}


TEST_CASE("Bad snowman code mid input") {
    CHECK_THROWS(snowman(243310002));
    /* Add more checks here */
}
