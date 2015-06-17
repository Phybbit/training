#include "quicksort.h"


std::string Quicksort::name() {
  return "quicksort";
}

void Quicksort::sort(std::vector<int>& data) {
  quicksort(data, 0, data.size() - 1);
}

void Quicksort::quicksort(std::vector<int>& data, int lowerLimit, int upperLimit) {
  if (lowerLimit >= upperLimit) {
    return;
  }

  int pivot = partition(data, lowerLimit, upperLimit);
  quicksort(data, lowerLimit, pivot-1);
  quicksort(data, pivot+1, upperLimit);
}

int Quicksort::partition(std::vector<int>& data, int lowerLimit, int upperLimit) {
  int pivotIndex = (lowerLimit + upperLimit) / 2;
  int pivotValue = data[pivotIndex];

  // Put the pivot at the end so that it does not get in the way.
  swap(data, pivotIndex, upperLimit);

  // Start comparing other elements agains the pivotValue from the lower limit.
  int storeIndex = lowerLimit;
  for (int i = lowerLimit; i < upperLimit; i++) {
    if (data[i] < pivotValue) {
      // We store lower values before the pivot.
      //Bigger values will naturally be after.
      swap(data, i, storeIndex);
      ++storeIndex;
    }
  }

  // Swap back the pivot in its final position,
  // just after all the lower values.
  swap(data, storeIndex, upperLimit);

  return storeIndex;
}
