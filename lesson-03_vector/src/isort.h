#ifndef __ISORT_H__
#define __ISORT_H__

#include <vector>
#include <string>

class ISort {
public:
  virtual ~ISort() {}
  virtual void sort(std::vector<int>& data) = 0;
  virtual std::string name() = 0;

protected:
  void swap(std::vector<int>& data, int index1, int index2);
};


#endif
