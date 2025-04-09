/*
 * File: pp8f.cpp
 * Author: Brennan Duck
 * Description: This Program takes a string from the user and prints it in
 * revers.
 */
#include <iostream>

// Prototype
void reverse(std::string strA, std::string &strB);

int main() {
  // Declare variables and get info from user
  std::string strA, strB;

  std::cout << "Enter string: ";
  std::cin >> strA;

  // Call reverse with strA and strB then print the result
  reverse(strA, strB);
  std::cout << strB << '\n';

  return 0;
}

/* reverse(): reverses the order of strA and store it in strB.
 * Params:
 * 1. strA: the source string to be reversed.
 * 2. strB: the variable store the reverse of strA in
 * Post-condition: strB contains the contents of strA in reverse order.
 */
void reverse(std::string strA, std::string &strB) {
  // Iterate backwards over strA
  for (int i = strA.length(); i >= 0; --i) {
    // Append the last character of strA to strB
    strB += strA[i];
  }
}
