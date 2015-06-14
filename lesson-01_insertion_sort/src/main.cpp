#include <iostream>
#include <vector>

void sort(std::vector<int>& data) {
  // Implement the insertion sort algorithm.
  for (int i = 1; i < data.size(); i++) {
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
}

void printArray(const std::string& title, const std::vector<int>& array) {
  std::cout << title << ": ";
  for (int i = 0; i < array.size(); i++) {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl << std::endl;
}

std::vector<int> readArray() {
  std::cout << "Keep adding numbers. When you're done, write any letter and press enter." << std::endl;

  std::vector<int> results;

  int input;
  while (std::cin >> input) {
    results.push_back(input);
  }

  return results;
}

int main() {
  std::vector<int> data = readArray();
  printArray("Input", data);

  sort(data);
  printArray("Output", data);

  return 0;
}
