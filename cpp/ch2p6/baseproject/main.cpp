#include <iostream>
#include <string>
#include <ctime>


int main() {
  time_t now = time(0);
  tm *ltm = localtime(&now);
  auto year = 1900 + ltm->tm_year;

  std::cout << "What is your age? ";
  std::string age_arg;
  std::cin >> age_arg;
  auto age = stoi(age_arg);

  std::cout << "At what age do you want to retire? ";
  std::string retire_age_arg;
  std::cin >> retire_age_arg;
  auto retire_age = stoi(retire_age_arg);

  auto years_left = retire_age - age;
  auto retire_year = year + years_left;

  std::cout << "You have "
           << std::to_string(years_left)
           << " years left until you can retire.\n"
           << "It's "
           << std::to_string(year)
           << ", so you can retire in "
           << std::to_string(retire_year)
           << ".\n";


}
