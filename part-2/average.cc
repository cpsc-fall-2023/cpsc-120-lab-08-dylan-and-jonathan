// Jonathan Do
// jonathando2005@csu.fullerton.edu
// @23jdo5
// Partners: @dylankingg
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double sum = 0.0;
  size_t num_arguments = arguments.size();
  for (int i = 1; i < num_arguments; ++i) {
    sum += std::stod(arguments[i]);
  }
  double average = sum / static_cast<double>(num_arguments - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
