#include <iostream>

#include "isort.h"
#include "insertion_sort.h"
#include "quicksort.h"


void printArray(const std::string& title, const Vector& array) {
  std::cout << title << ": ";
  for (int i = 0; i < array.size(); i++) {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl << std::endl;
}

Vector readArray() {
  std::cout << "Keep adding numbers. When you're done, write any letter and press enter." << std::endl;

  Vector results;

  int input;
  while (std::cin >> input) {
    results.push_back(input);
  }

  return results;
}

int main() {
  Vector data = readArray();
  printArray("Input", data);

  //ISort* sortAlgorithm = new InsertionSort();
  ISort* sortAlgorithm = new Quicksort();
  sortAlgorithm->sort(data);

  printArray("Output with " + sortAlgorithm->name(), data);

  delete sortAlgorithm;
  return 0;
}
