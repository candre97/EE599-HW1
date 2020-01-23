#include <iostream>
#include "src/lib/solution.h"
#include <cmath>

int main()
{
    Solution solution ;
    std::cout << solution.PrintHelloWorld() << std::endl;
    int actual = solution.FactorialRecursive(9);
    int expected = tgamma(10);
    std::cout << "actual: " << actual << " expected: " << expected << std::endl; 
    actual = solution.Factorial(9);
    expected = tgamma(10);
    std::cout << "actual: " << actual << " expected: " << expected << std::endl; 
    return EXIT_SUCCESS;
}