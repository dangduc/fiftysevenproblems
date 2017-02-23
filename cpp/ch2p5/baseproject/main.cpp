#include <iostream>


int main() {
  std::string first;
  std::string second;

  std::cout << "Enter a first number: ";
  std::cin >> first;

  std::cout << "Enter a second number: ";
  std::cin >> second;

  auto f = stoi(first);
  auto s = stoi(second);

  auto sum = f + s;
  auto diff = f - s;
  auto prod = f * s;
  auto quot = f / s;
  std:: cout << std::to_string(f)
             << " + "
             << std::to_string(s)
             << " = "
             << std::to_string(sum)
             << "\n"
             << std::to_string(f)
             << " - "
             << std::to_string(s)
             << " = "
             << std::to_string(diff)
             << "\n"
             << std::to_string(f)
             << " * "
             << std::to_string(s)
             << " = "
             << std::to_string(prod)
             << "\n"
             << std::to_string(f)
             << " / "
             << std::to_string(s)
             << " = "
             << std::to_string(quot)
             << "\n";

  return 0;
}
