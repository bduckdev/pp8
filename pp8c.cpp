/*
 * File: pp8c.cpp
 * Author: Brennan Duck
 * Description: This Program takes the users age from stdin and prints the year
 * they were born in or throws an error
 */
#include <cstring>
#include <iostream>

int main() {
  // Declare variables and take data from stdin
  char strAge[4];
  int age;
  bool isValidInt;

  std::cout << "Enter age: ";

  std::cin.getline(strAge, 4);

  // Iterate over strAge
  for (int i = 0; i < strlen(strAge); i++) {
    /* Check if current char is a valid int, print error message and return 1 if
     not. */
    isValidInt = isdigit(strAge[i]);
    if (!isValidInt) {
      std::cout << "Age must be a positive integer\n";
      return 1;
    }
  }
  // If no error was thrown, it's safe to convert and print output.
  age = atoi(strAge);
  std::cout << "Born in " << 2025 - age << '\n';

  return 0;
}
