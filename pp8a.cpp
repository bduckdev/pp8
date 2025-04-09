/*
 * File:
 * Author: Brennan Duck
 * Descriptions: This Program takes two strings from stdin and prints them in
 * alphabetical order.
 */
#include <cstring>
#include <iostream>

// Size for input arrays
const int SIZE = 100;

int main() {
  // Declare variables and collect input from the user
  char stringA[SIZE], stringB[SIZE];

  std::cout << "Enter first word: ";
  std::cin >> stringA;
  std::cout << "Enter second word: ";
  std::cin >> stringB;

  // Compare the strings using
  int result = strcmp(stringA, stringB);

  if (result < 0) {
    // If result is negative, stringA comes first
    std::cout << stringA << ' ' << stringB << '\n';
  } else {
    // Otherwise, stringB comes first
    std::cout << stringB << ' ' << stringA << '\n';
  }

  return 0;
}
