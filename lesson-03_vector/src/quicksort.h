#ifndef __QUICKSORT_H__
#define __QUICKSORT_H__

#include "isort.h"

class Quicksort : public ISort {
public:
  virtual void sort(std::vector<int>& data);
  virtual std::string name();

private:
  void quicksort(std::vector<int>& data, int lowerLimit, int upperLimit);
  int partition(std::vector<int>& data, int lowerLimit, int upperLimit);
};

#endif
