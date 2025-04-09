/*
 * File:
 * Author: Brennan Duck
 * Descriptions: This Program
 */
#include <cstring>
#include <iostream>

const int NUM_CONJUNCTIONS = 7;
const char CONJUNCTIONS[NUM_CONJUNCTIONS][5] = {"for", "and", "nor", "but",
                                                "or",  "yet", "so"};
const int NUM_WORDS = 12;
int countConjugations(const char words[][10]);

int main() {
  char words[NUM_WORDS][10] = {"jam",   "and",     "apples", "but",
                               "words", "for",     "so",     "yet",
                               "nor",   "tallyho", "or",     "coffee"};
  std::cout << countConjugations(words) << " conjunctions" << '\n';

  return 0;
}

int countConjugations(const char words[][10]) {
  int count = 0;
  for (int i = 0; i < NUM_CONJUNCTIONS; i++) {
    for (int j = 0; j < NUM_WORDS; j++) {
      int result = strcmp(CONJUNCTIONS[i], words[j]);
      if (result == 0) {
        count++;
      }
    }
  }

  return count;
}
