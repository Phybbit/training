#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <cstddef>

class Vector {
public:
  Vector();
  ~Vector();

  int& operator[](const int& index);
  const int& operator[](const int& index) const;

  void push_back(int value);
  std::size_t size() const;

private:
  bool hasSpace() const;
  void allocateMoreSpace();

  int* data;
  std::size_t usedSize;
  std::size_t totalSize;
};

#endif
