#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;

    std::cout << solution.PrintHelloWorld() << std::endl;
    std::cout << solution.PrintName() << std::endl;
    std::cout << solution.PrintHeight() << std::endl; 
    std::cout << solution.PrintDOB() << std::endl;
    std::cout << solution.PrintWeight() << std::endl;
    // std::cout << solution.ex1(8) << std::endl; 
    // std::cout << solution.ex1(16) << std::endl; 
    // std::cout << solution.ex1(32) << std::endl; 
    // std::cout << solution.ex1(64) << std::endl; 
    // std::cout << solution.ex1(128) << std::endl;  
    return EXIT_SUCCESS;
}