#include <iostream>
#include <string>


int main() {
  std::cout << "Hi! What is thy name? ";
  std::string name;
  std::cin >> name;
  std::cout << "Hello " << name << ". You're a dick-bag, bro." << std::endl;
  return 0;
}
