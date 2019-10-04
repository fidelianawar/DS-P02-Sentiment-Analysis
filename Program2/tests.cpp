#include "catch.hpp"
#include "DSString.h"
#include "DSVector.h"

using namespace std;

TEST_CASE("DSString", "[DSString]"){
    DSString name = "fidelia";
    REQUIRE(name == "fidelia");
}
TEST_CASE("DSString +", "[DSString]"){
    DSString name = "fidelia";
    DSString name2 = " nawar";
    DSString name3 = name + name2;
    REQUIRE(name3 == "fidelia nawar");
}
TEST_CASE("DSString -", "[DSString]"){
    DSString name = "fidelia";
    DSString name2 = " nawar";
    DSString name3 = name + name2;
    DSString name4 = name3 - name2;
    //REQUIRE(name3 == "fidelia");
}

TEST_CASE("DSString >", "[DSString]"){
    DSString string1 = "this is greater";
    DSString string2 = "this is not greater";
    bool result = string1 > string2;
    //REQUIRE(result == true);
}
TEST_CASE("DSString <", "[DSString]"){
    DSString string1 = "this is not greater";
    DSString string2 = "abc - this is greater";
    bool result = string1 < string2;
    //REQUIRE(result == true);
}
TEST_CASE("DSString []", "[DSString]"){
    DSString string1 = "array of elements";
    REQUIRE(string1[0] == 'a');
}
TEST_CASE("DSString space[]", "[DSString]"){
    DSString string1 = "array of elements";
    REQUIRE(string1[5] == ' ');
}
TEST_CASE("DSString last element[]", "[DSString]"){
    DSString string1 = "array of elements";
    REQUIRE(string1[strlen(string1.c_str())-1] == 's');
}
TEST_CASE("DSVector", "[DSString]"){
    //DSVector<int> vector1 = {0, 1, 2};

}
