/*
 * File: pp8g.cpp
 * Author: Brennan Duck
 * Description: This Program takes a number (n) from the user via stdin, then
 * store the powers of two from zero up to n in a vectore, then print the size
 * and capcity.
 */
#include <cmath>
#include <iostream>
#include <vector>

int main() {
  // Declare variables and get value of n from user.
  std::vector<double> nums;
  int n;

  std::cout << "Enter n: ";
  std::cin >> n;

  // Iteratively store powers of two in nums
  for (int i = 0; i <= n; i++) {
    int num = pow(2, i);
    nums.push_back(num);
  }

  // Print values of nums
  for (int i = 0; i < nums.size(); i++) {
    std::cout << nums[i] << ' ';
  }
  std::cout << '\n';

  // Print size and capicty of nums
  std::cout << "Size: " << nums.size() << ", capacity: " << nums.capacity()
            << '\n';
  return 0;
}
