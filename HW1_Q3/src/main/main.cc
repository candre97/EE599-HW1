#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    //std::cout << solution.PrintHelloWorld() << std::endl;

    std::vector<unsigned int> inputs = {1,2,3,4,5,6,7,8,9,1,1,4,5}; 
    std::cout << "Median is: " << solution.FindMedian(inputs) << std::endl; 

    return EXIT_SUCCESS;
}