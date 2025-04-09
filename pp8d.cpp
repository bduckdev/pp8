/*
 * File:
 * Author: Brennan Duck
 * Descriptions: This Program
 */
#include <cstring>
#include <iostream>

void getUserInput(char *phrase, char *word);
void replaceString(const char *phrase, const char *word, char *res);

const int SIZE = 100;
int main() {
  char phrase[SIZE], word[SIZE], res[SIZE];

  getUserInput(phrase, word);
  replaceString(phrase, word, res);
  return 0;
}

void getUserInput(char *phrase, char *word) {
  std::cout << "Enter phrase: ";
  std::cin.getline(phrase, SIZE);
  std::cout << "Enter word: ";
  std::cin.getline(word, SIZE);
}

void replaceString(const char *phrase, const char *word, char *res) {
  res[0] = '\0';

  int i = 0;
  for (i = 0; i < strlen(phrase); i++) {
    if (phrase[i] == '*')
      break;
  }

  strncpy(res, phrase, i);
  res[i] = '\0';
  strcat(res, word);
  strcat(res, phrase + i + 1);

  std::cout << res << '\n';
}
