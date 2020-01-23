#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

Solution solution;

TEST(HelloWorldShould, ReturnHelloWorld) {
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(NameShouldBe, Charlie) {
  std::string actual = solution.PrintName();
  std::string expected = "Charlie";
  EXPECT_EQ(expected, actual); 
}
TEST(DOBShouldBe, march_28_97) {
  EXPECT_EQ("03/28/97", solution.PrintDOB()); 
}
TEST(HeightShouldBe, SixFeet) {
  EXPECT_EQ("6 feet", solution.PrintHeight()); 
}
TEST(WeightShouldBe, Heavy) {
  EXPECT_EQ("180 lbs", solution.PrintWeight()); 
}

