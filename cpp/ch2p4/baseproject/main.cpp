#include <iostream>
#include <cstdio>
#include <string>

int main() {
  std::cout << "Enter a noun: ";
  std::string noun;
  std::getline(std::cin, noun);

  std::cout << "Enter a verb: ";
  std::string verb;
  std::getline(std::cin, verb);

  std::cout << "Enter an adjective: ";
  std::string adjective;
  std::getline(std::cin, adjective);

  std::cout << "Enter an adverb: ";
  std::string adverb;
  std::getline(std::cin, adverb);

  printf("Do you %s your %s %s %s? That's hilarious!\n", verb.data(), adjective.data(), noun.data(), adverb.data()); 

  return 0;
}
