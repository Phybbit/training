#ifndef __QUICKSORT_H__
#define __QUICKSORT_H__

#include "isort.h"

class Quicksort : public ISort {
public:
  virtual void sort(std::vector<int>& data);
  virtual std::string name();
};

#endif
