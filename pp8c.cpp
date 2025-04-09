#include <cstring>
#include <iostream>

int main() {
  char strAge[4];
  int age;
  bool isValidInt;

  std::cout << "Enter age: ";

  std::cin.getline(strAge, 4);

  // iterate through our chars
  for (int i = 0; i < strlen(strAge); i++) {
    // figure out if char's a valid int
    isValidInt = isdigit(strAge[i]);
    // throw error if no convert
    if (!isValidInt) {
      std::cout << "Age must be a positive integer\n";
      return 1;
    }
  }
  // convert to int and display output
  age = atoi(strAge);
  std::cout << "Born in " << 2025 - age << '\n';

  return 0;
}
