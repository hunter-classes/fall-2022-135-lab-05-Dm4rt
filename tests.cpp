#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("isDivisibleBy"){
  CHECK(isDivisibleBy(25,5)==true);
  CHECK(isDivisibleBy(37,18)==false);
}
