#ifndef __ARRAY_HPP
#define __ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
 private:
  T* arr;
  unsigned int len;

 public:
  Array();
  Array(unsigned int n);
  Array(const Array& rhs);
  Array& operator=(const Array& rhs);
  T& operator[](unsigned int idx) const;
  ~Array();
  size_t size() const;
};

#include "Array.tpp"

#endif