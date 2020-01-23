#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

std::string Solution::PrintName() {
  return "Charlie";
}
std::string Solution::PrintDOB() {
  return "03/28/97";
}
std::string Solution::PrintHeight() {
  return "6 feet";
}
std::string Solution::PrintWeight() {
  return "180 lbs";
}

/* int Solution::ex1(int n) {
  int count = 0;
  int c1 = 0;
  for (int i = n; i > 0; i/= 2) {
    c1++;
    for (int j = 0; j < i; j++) {
      count += 1; 
    }
  }
  std::cout << c1 << std::endl;
  return count; 
}

int Solution::ex2(int n) {
  int count = 0;
  while(n > 0) {
    n /= 2;
    count++;
  }
  return count; 
}
 */