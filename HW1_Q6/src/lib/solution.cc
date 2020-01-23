#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::Factorial(int n) {
  if(n < 0) {
    return -1;
  }
  int retval = 1; 
  for(int i = 1; i <= n; i++) {
    retval *= i; 
  }
  return retval; 
}

int Solution::FactorialRecursive(int n) {
  if(n == 0) {
    return 1; 
  }
  else {
    return n * FactorialRecursive(n-1); 
  }
}

