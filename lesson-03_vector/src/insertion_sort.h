#ifndef __INSERTION_SORT_H__
#define __INSERTION_SORT_H__

#include "isort.h"

class InsertionSort : public ISort {
public:
  virtual void sort(Vector& data);
  virtual std::string name();
};


#endif
