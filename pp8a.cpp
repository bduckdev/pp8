#include <cstring>
#include <iostream>

int main() {
  char stringA[100], stringB[100];

  std::cout << "Enter first word: ";
  std::cin >> stringA;
  std::cout << "Enter second word: ";
  std::cin >> stringB;

  int result = strcmp(stringA, stringB);

  if (result < 0) {
    std::cout << stringA << ' ' << stringB << '\n';
  } else {
    std::cout << stringB << ' ' << stringA << '\n';
  }

  return 0;
}
