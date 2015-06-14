#include <iostream>

#define ELEMENTS_COUNT 10

int* sort(int unsorted[]) {
  // Implement the insertion sort algorithm.

  return unsorted;
}


int main() {
  // Initial data: hardcoded array of random values.
  int unsorted[] = { 2, 10, 17, 8, 13, 7, 9, 12, 11, 1 };

  // Print out our initial array
  std::cout << "Input: ";
  for (int i = 0; i < ELEMENTS_COUNT; i++) {
    std::cout << unsorted[i] << " ";
  }
  std::cout << std::endl << std::endl;

  // Sort
  int* sortedResult = sort(unsorted);

  // Print out our sorted array
  std::cout << "Output: ";
  for (int i = 0; i < ELEMENTS_COUNT; i++) {
    std::cout << sortedResult[i] << " ";
  }
  std::cout << std::endl << std::endl;

  return 0;
}
