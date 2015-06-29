#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <cstddef>

class Vector {
public:
  ~Vector();

  int& operator[](const int& index);
  const int& operator[](const int& index) const;

  void push_back(int value);
  std::size_t size() const;

private:
  int data[1];
};

#endif
