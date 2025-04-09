/*
 * File: pp8d.cpp
 * Author: Brennan Duck
 * Description: This Program takes a phrase containing a * from stdin, as well
 * as a word to replace the *, Then prints the result.
 */
#include <cstring>
#include <iostream>

// Prototypes
void getUserInput(char *phrase, char *word);
void replaceString(const char *phrase, const char *word, char *res);

// Consants
const int SIZE = 100;

int main() {
  // Declare variables and call functions
  char phrase[SIZE], word[SIZE], res[SIZE];

  getUserInput(phrase, word);
  replaceString(phrase, word, res);
  return 0;
}

/*
 * getUserInput(): gets user input from stdin and stores them in params.
 * Params:
 * 1. phrase: Variable to store phrase.
 * 2. phrase: Variable to store word.
 * Post-condition: phrase and word are stored in their corresponding variables.
 */
void getUserInput(char *phrase, char *word) {
  std::cout << "Enter phrase: ";
  std::cin.getline(phrase, SIZE);
  std::cout << "Enter word: ";
  std::cin.getline(word, SIZE);
}

/*
 * replaceString(): Replaces the * character in phrase with word then stores
 * the result in res.
 * Params:
 * 1. phrase: the phrase containing *
 * 2. word: the word to replace * with
 * 3. res: the variable to store the output
 * Post-condition: res contains phrase with the * replaced with word.
 */
void replaceString(const char *phrase, const char *word, char *res) {
  //
  res[0] = '\0';

  // iterate over phrase until * is found
  int i = 0;
  for (i = 0; i < strlen(phrase); i++) {
    if (phrase[i] == '*')
      break;
  }

  // call strncopy with res, phrase, and the index where * was found
  strncpy(res, phrase, i);
  // add null character to the end
  res[i] = '\0';
  // add word to the end of res
  strcat(res, word);
  // add the rest of phrase after *
  strcat(res, phrase + i + 1);

  std::cout << res << '\n';
}
