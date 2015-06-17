#include "insertion_sort.h"


void InsertionSort::sort(std::vector<int>& data) {
  // Implement the insertion sort algorithm.
  for (int i = 1; i < data.size(); i++) {
    int j = i;

    while (j > 0 && data[j-1] > data[j]) {
      // Swap so that these values are ordered.
      swap(data, j-1, j);

      // Decrement until we reach the beginning of the array.
      j--;
    }
  }
}

std::string InsertionSort::name() {
  return "insertion sort";
}
