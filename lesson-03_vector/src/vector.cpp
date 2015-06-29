#include "vector.h"

Vector::Vector() {
  data = NULL;
  usedSize = 0;
  totalSize = 0;
}

Vector::~Vector() {
  if (data) {
    delete data;
    data = NULL;
  }
}

int& Vector::operator[](const int& index){
  return data[index];
}

const int& Vector::operator[](const int& index) const {
  return data[index];
}

void Vector::push_back(int value) {
  if (!hasSpace()) {
    allocateMoreSpace();
  }
  data[usedSize] = value;
  usedSize++;
}

std::size_t Vector::size() const {
  return usedSize;
}

bool Vector::hasSpace() const {
  return usedSize < totalSize;
}

void Vector::allocateMoreSpace() {
  // Duplicate the size every time we need memory.
  std::size_t newSize = (totalSize + 1) * 2;
  int* newArray = new int[newSize];

  if (data) {
    // Transfer the previous content.
    for (int i = 0; i < usedSize; i++) {
      newArray[i] = data[i];
    }
    delete[] data;
  }

  totalSize = newSize;
  data = newArray;
}
