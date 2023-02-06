#include <iostream>

#include "06/leetcode_06.h"
int main() {
  std::cout << "Hello, World!" << std::endl;
  string input = "AB";
  int n = 1;
  auto res = Solution::convert(input,n);
  std::cout << res <<std::endl;
  return 0;
}
