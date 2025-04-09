/*
 * File:
 * Author: Brennan Duck
 * Descriptions: This Program
 */
#include <cstring>
#include <iostream>

void myStrcat(char *destination, const char *source);

const int SIZE = 50;

int main() {
  char first[SIZE];
  char second[SIZE];

  std::cout << "Enter first string: ";
  std::cin.getline(first, SIZE);
  std::cout << "Enter second string: ";
  std::cin.getline(second, SIZE);

  myStrcat(first, second);

  std::cout << "First string: " << first << '\n';

  return 0;
}

void myStrcat(char *destination, const char *source) {
  int destLen = strlen(destination);

  int i = 0;
  while (source[i] != '\0') {
    destination[destLen + i] = source[i];
    i++;
  }

  destination[destLen + i] = '\0';
}
