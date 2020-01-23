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
    return EXIT_SUCCESS;
}