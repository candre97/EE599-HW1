#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
#include <cmath>

Solution solution;

TEST(HelloWorldShould, ReturnHelloWorld) {
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(Factorial, SmallNum) {
  int actual = solution.Factorial(4);
  int expected = tgamma(5);
  EXPECT_EQ(expected, actual);
}

TEST(Factorial, One) {
  int actual = solution.Factorial(1);
  int expected = tgamma(2);
  EXPECT_EQ(expected, actual);
}

TEST(Factorial, Zero) {
  int actual = solution.Factorial(0);
  int expected = tgamma(1);
  EXPECT_EQ(expected, actual);
}

TEST(FactorialRec, SmallNumRec) {
  int actual = solution.FactorialRecursive(4);
  int expected = tgamma(5);
  EXPECT_EQ(expected, actual);
}

TEST(FactorialRec, OneRec) {
  int actual = solution.FactorialRecursive(1);
  int expected = tgamma(2);
  EXPECT_EQ(expected, actual);
}

TEST(FactorialRec, ZeroRec) {
  int actual = solution.FactorialRecursive(0);
  int expected = tgamma(1);
  EXPECT_EQ(expected, actual);
}

