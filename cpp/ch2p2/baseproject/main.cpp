#include <iostream>
#include <string>


int main() {
  std::cout << "Enter a dumb-ass line of text you dummy: ";
  std::string dumbassString;
  std::getline(std::cin, dumbassString);
  std::cout << "Really? '"
           << dumbassString
           << "'?. You couldn't think of anything better than "
           << dumbassString.length()
           << " lines of dumb-assery!?"
           << std::endl;

  return 0;
}
