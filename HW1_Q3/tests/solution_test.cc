#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

/*
TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}
*/


  // 1. basic test with odd number of inputs
TEST(MEDTest, basicMedTestOdd) {
  std::vector<unsigned int> inputs = {1,3,2,4,5};
  EXPECT_DOUBLE_EQ(3.0, solution.FindMedian(inputs)); 
}

// 2. basic test with even number of inputs
TEST(MEDTest, basicMedTestEven) {
  std::vector<unsigned int> inputs = {1,3,2,4};
  EXPECT_DOUBLE_EQ(2.5, solution.FindMedian(inputs)); 
}

// 3. empty inputs 
TEST(MEDTest, emptyMed) {
  std::vector<unsigned int> inputs = {};
  EXPECT_DOUBLE_EQ(-1.0, solution.FindMedian(inputs)); 
}

// 4. same number, even inputs
TEST(MEDTest, MedSameEven) {
  std::vector<unsigned int> inputs = {1,1,1,1};
  EXPECT_DOUBLE_EQ(1.0, solution.FindMedian(inputs)); 
}

// 5. same number, odd inputs
TEST(MEDTest, MedSameOdd) {
  std::vector<unsigned int> inputs = {1,1,1};
  EXPECT_DOUBLE_EQ(1.00, solution.FindMedian(inputs)); 
}

