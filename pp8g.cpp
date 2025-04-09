/*
 * File: pp8g.cpp
 * Author: Brennan Duck
 * Descriptions: This Program
 */
#include <cmath>
#include <iostream>
#include <vector>

int main() {
  std::vector<double> nums;
  int n;

  std::cout << "Enter n: ";
  std::cin >> n;

  for (int i = 0; i <= n; i++) {
    int num = pow(2, i);
    nums.push_back(num);
  }

  for (int i = 0; i < nums.size(); i++) {
    std::cout << nums[i] << ' ';
  }
  std::cout << '\n';

  std::cout << "Size: " << nums.size() << ", capacity: " << nums.capacity()
            << '\n';
  return 0;
}
