#include <iostream>

void reverse(std::string strA, std::string &strB);

int main() {
  std::string strA, strB;

  std::cout << "Enter string: ";
  std::cin >> strA;

  reverse(strA, strB);
  std::cout << strB << '\n';

  return 0;
}

void reverse(std::string strA, std::string &strB) {
  for (int i = strA.length(); i >= 0; --i) {
    strB += strA[i];
  }
}
