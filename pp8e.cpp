/*
 * File: pp8e.cpp
 * Author: Brennan Duck
 * Description: This Program counts the number of conjugates in words
 */
#include <cstring>
#include <iostream>

// Constants
const int NUM_CONJUNCTIONS = 7;
const char CONJUNCTIONS[NUM_CONJUNCTIONS][5] = {"for", "and", "nor", "but",
                                                "or",  "yet", "so"};
const int NUM_WORDS = 12;

// Prototype
int countConjugations(const char words[][10]);

int main() {
  // Words to be checked.
  char words[NUM_WORDS][10] = {"jam",   "and",     "apples", "but",
                               "words", "for",     "so",     "yet",
                               "nor",   "tallyho", "or",     "coffee"};
  // Call countConjugations and print output
  std::cout << countConjugations(words) << " conjunctions" << '\n';

  return 0;
}

/* countConjugations(): counts number of conjugates in an array
 * Params:
 * 1. words: list of words to have their number of conjugates counted
 * returns: the number of conjugates in words as an int.
 */
int countConjugations(const char words[][10]) {
  // Declare count
  int count = 0;
  // Check list of words against the list of conjugates.
  for (int i = 0; i < NUM_CONJUNCTIONS; i++) {
    for (int j = 0; j < NUM_WORDS; j++) {
      /* if strcmp returns 0, the words are the same, so count can be
       * incremented */
      int result = strcmp(CONJUNCTIONS[i], words[j]);
      if (result == 0) {
        count++;
      }
    }
  }

  return count;
}
