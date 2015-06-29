#ifndef __QUICKSORT_H__
#define __QUICKSORT_H__

#include "isort.h"

class Quicksort : public ISort {
public:
  virtual void sort(Vector& data);
  virtual std::string name();

private:
  void quicksort(Vector& data, int lowerLimit, int upperLimit);
  int partition(Vector& data, int lowerLimit, int upperLimit);
};

#endif
