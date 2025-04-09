/*
 * File: pp8b.cpp
 * Author: Brennan Duck
 * Description: This program takes two strings from stdin and concatenates
 * them, then prints the concatenated string.
 */
#include <cstring>
#include <iostream>

// Prototype
void myStrcat(char *destination, char *source);

// Size of arrays
const int SIZE = 50;

int main() {
  // Declare strings and store values from stdin
  char first[SIZE];
  char second[SIZE];

  std::cout << "Enter first string: ";
  std::cin.getline(first, SIZE);
  std::cout << "Enter second string: ";
  std::cin.getline(second, SIZE);

  // Call myStrcat and print the result
  myStrcat(first, second);

  std::cout << "First string: " << first << '\n';

  return 0;
}

/* myStrcat(): concatenates source into destination.
 * Params:
 * char *destination: Destination for source.
 * char *source: The source information to be concatenated into destination.
 * Returns: nothing
 * Post-condition: destination now also contains content of source.
 */
void myStrcat(char *destination, char *source) {
  // get length of destination
  int destLen = strlen(destination);

  // Iteratively append content of source to the end of destination
  int i = 0;
  while (source[i] != '\0') {
    destination[destLen + i] = source[i];
    i++;
  }

  // Add null character
  destination[destLen + i] = '\0';
}
