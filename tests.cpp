#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("printRange() Function"){
    CHECK(printRange(1, 3) == "1 2 3");
    CHECK(printRange(5, 10) == "5 6 7 8 9 10");
    CHECK(printRange(-3, 3) == "-3 -2 -1 0 1 2 3");
}

TEST_CASE("sumRange() Function"){
    CHECK(sumRange(1, 5) == 15);
    CHECK(sumRange(0, 100) == 5050);
    CHECK(sumRange(1, 1000) == 500500);
    CHECK(sumRange(-100, 100) == 0);
}

TEST_CASE("sumArray() Function"){
    int arr1[3] = {0, 1, 2};
    CHECK(sumArray(arr1, 3) == 3);
    int arr2[5] = {-2, 2, -3, 3, 5};
    CHECK(sumArray(arr2, 5) == 5);
    int arr3[8] = {1, 2, 1, 2, 1, 2, 1, 2};
    CHECK(sumArray(arr3, 8) == 12);
}

TEST_CASE("isAlphanumeric() Function"){
    CHECK(isAlphanumeric("alllettersandnumbers123") == true);
    CHECK(isAlphanumeric("lettersplus&$ymb0ls" ) == false);
    CHECK(isAlphanumeric("space space" ) == false);
    CHECK(isAlphanumeric("12321321321") == true);
    CHECK(isAlphanumeric("e" ) == true);


}
TEST_CASE("nestedParens() Function"){
    CHECK(nestedParens("()") == true);
    CHECK(nestedParens("(()())") == false);
    CHECK(nestedParens("((())") == false);
    CHECK(nestedParens("1001") == false);
    CHECK(nestedParens("") == true);
}