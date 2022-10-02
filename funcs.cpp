#include <iostream>
#include "funcs.h"

// add functions here
bool isDivisibleBy(int n, int d){
  if(n%d==0){
    return true;
  }
  else{
    return false;
  }
  
}

bool isPrime(int n){
  if(n<2){
    return false;
  }
  else{
    for(int x=2;x<n;x++){
      if(n%x==0){
	return false;
      }
    }
    return true;
  }
}
