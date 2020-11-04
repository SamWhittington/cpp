#include <iostream>

int main() {

  int y = 0;

  std::cout << "Enter year: ";
  std::cin >> y;

  // Only pay attention to rel. years:
  if (y < 1000 || y > 9999) {

    std::cout << "Invalid entry.\n";

  }
  // Use fact that leap years are divisible by 4
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {

    std::cout << y;
    std::cout << " falls on a leap year.\n";

  }
  else {

    std::cout << y;
    std::cout << " is not a leap year.\n";

  }

}
