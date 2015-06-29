#include "ISort.h"

void ISort::swap(Vector& data, int index1, int index2) {
  int tmp = data[index1];
  data[index1] = data[index2];
  data[index2] = tmp;
}
