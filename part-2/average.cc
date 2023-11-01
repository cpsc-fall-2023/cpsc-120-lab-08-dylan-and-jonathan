// Jonathan Do
// jonathando2005@csu.fullerton.edu
// @23jdo5
// Partners: @dylankingg
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double sum = 0.0;
  int total = 0;

  for (int i = 1; i < argc; ++i) {
    double num = std::stod(arguments[i]);
    sum += num;
    total++;
  }
  double average = sum / total;
  std::cout << "average = " << average;
  return 0;
}