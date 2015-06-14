#include <iostream>

int* sort(int unsorted[]) {
  // implement

  return unsorted;
}


int main() {
  const int elementsCount = 10;
  int unsorted[elementsCount] = { 2, 10, 17, 8, 13, 7, 9, 12, 11, 1 };

  std::cout << "Input: ";
  for (int i = 0; i < elementsCount; i++) {
    std::cout << unsorted[i] << " ";
  }
  std::cout << std::endl << std::endl;


  int* sortedResult = sort(unsorted);

  std::cout << "Output: ";
  for (int i = 0; i < elementsCount; i++) {
    std::cout << sortedResult[i] << " ";
  }
  std::cout << std::endl << std::endl;

  return 0;
}
