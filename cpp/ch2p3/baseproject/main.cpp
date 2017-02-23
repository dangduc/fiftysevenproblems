#include <iostream>
#include <string>

int main() {
  std::cout << "What is the quote? ";
  std::string quote;
  std::getline(std::cin, quote);
  std::cout << "Who said it? ";
  std::string name;
  std::getline(std::cin, name);

  std::cout << name
            << " says, \""
            << quote
            << ".\""
            << std::endl;
  return 0;
}
