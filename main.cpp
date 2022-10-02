#include <iostream>


#include "funcs.h"

int main()
{
  std::cout<<std::boolalpha<<true;
  std::cout<<"isDivisibleBy(25,5):"<<isDivisibleBy(25,5)<<std::endl;
  std::cout<<"isPrime(25):"<<isPrime(25)<<std::endl;
  std::cout<<"nextPrime(14):"<<nextPrime(14)<<std::endl;
  std::cout<<"countPrimes(0,12):"<<countPrimes(0,12)<<std::endl;
  return 0;
}
