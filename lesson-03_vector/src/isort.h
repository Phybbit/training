#ifndef __ISORT_H__
#define __ISORT_H__

#include <string>
#include "Vector.h"

class ISort {
public:
  virtual ~ISort() {}
  virtual void sort(Vector& data) = 0;
  virtual std::string name() = 0;

protected:
  void swap(Vector& data, int index1, int index2);
};


#endif
