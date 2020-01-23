#include "solution.h"
#define DEBUG     0

// std::string Solution::PrintHelloWorld() { 
//   return "**** Hello World ****"; 
// }

double Solution::FindMedian(std::vector<unsigned int> &inputs) {
  
  if(inputs.size() < 1) {
    return -1.0; 
  }

  unsigned int retval = 0; 

  std::sort(inputs.begin(), inputs.end()); 

#if DEBUG  
  for (auto n : inputs) {
    std::cout << n << " "; 
  }
#endif
  // for even number of inputs, the median is the avg of the middle two  
  if(inputs.size() % 2 == 0) {
    return (0.5 * (inputs[inputs.size()/2] + inputs[(inputs.size()/2) - 1]));  
  }
  // for odd number of inputs, median is middle index
  else {
    return inputs[(inputs.size() - 1) / 2];
  }
  
  return retval; 
}


