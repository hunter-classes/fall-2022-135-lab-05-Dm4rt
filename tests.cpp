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

TEST_CASE("nextPrime"){
  CHECK(nextPrime(14)==17);
  CHECK(nextPrime(17)==19);
  CHECK(nextPrime(0)==2);
  CHECK(nextPrime(1)==2);
  CHECK(nextPrime(-5)==2);
}
