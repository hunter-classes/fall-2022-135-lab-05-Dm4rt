#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("isDivisibleBy"){
  CHECK(isDivisibleBy(25,5)==true);
  CHECK(isDivisibleBy(37,18)==false);
}

TEST_CASE("isPrime"){
  CHECK(isPrime(23)==true);
  CHECK(isPrime(25)==false);
  CHECK(isPrime(-15)==false);
  CHECK(isPrime(0)==false);
  CHECK(isPrime(1)==false);
}
