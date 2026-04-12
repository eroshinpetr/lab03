#include <iostream>
#include <string>

// Program asks user for a name and prints greeting.
int main() {
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
