#include "vector.h"

Vector::~Vector() {

}

int& Vector::operator[](const int& index){
  return data[0];
}


const int& Vector::operator[](const int& index) const {
  return data[0];
}

void Vector::push_back(int value) {
}

std::size_t Vector::size() const {
  return 1;
}
