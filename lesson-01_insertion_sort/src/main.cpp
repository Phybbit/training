#include <iostream>

#define ELEMENTS_COUNT 10


int* sort(int data[]) {
  // Implement the insertion sort algorithm.

  for (int i = 1; i < ELEMENTS_COUNT; i++) {
    int j = i;

    while (j > 0 && data[j-1] > data[j]) {
      // Swap so that these values are ordered.
      int tmp = data[j];
      data[j] = data[j-1];
      data[j-1] = tmp;

      // Decrement until we reach the beginning of the array.
      j--;
    }
  }

  return data;
}


int main() {
  // Initial data: hardcoded array of random values.
  int unsorted[] = { 2, 10, 17, 8, 13, 7, 9, 12, 11, 1 };

  // Print out our initial array.
  std::cout << "Input: ";
  for (int i = 0; i < ELEMENTS_COUNT; i++) {
    std::cout << unsorted[i] << " ";
  }
  std::cout << std::endl << std::endl;

  // Sort.
  int* sortedResult = sort(unsorted);

  // Print out our sorted array.
  std::cout << "Output: ";
  for (int i = 0; i < ELEMENTS_COUNT; i++) {
    std::cout << sortedResult[i] << " ";
  }
  std::cout << std::endl << std::endl;
  
  return 0;
}
