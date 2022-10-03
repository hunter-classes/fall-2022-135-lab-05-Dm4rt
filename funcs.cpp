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

int nextPrime(int n){
  for(int x=n;x>=n;x++){
    if(x>n&&isPrime(x)){
      return x;
    }
  }
  return n;
}

int countPrimes(int a, int b){
  int count=0;
  for(int x=a;x<=b;x++){
    if(isPrime(x)){
      count++;
    }
  }
  return count;
}

bool isTwinPrime(int n){
  if(isPrime(n)&&(isPrime(n-2)||isPrime(n+2))){
    return true;
  }
  return false;
}

int nextTwinPrime(int n){
  for(int x=n;x>=n;x++){
    if(x>n&&isTwinPrime(x)){
      return x;
    }
  }
  return n;
}

int largestTwinPrime(int a,int b){
  int largest=-1;
  for(int x=a;x<=b;x++){
    if(isPrime(x)){
      largest=x;
    }
  }
  return largest;
}
