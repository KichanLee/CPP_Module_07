#ifndef __ITER_HPP_
#define __ITER_HPP_

#include <iostream>

// template <typename T1, typename T2>
// void iter(const T1 ptr, size_t len, const T2 func) {
//   for (size_t i = 0; i < len; ++i) {
//     func(ptr[i]);
//   }
// }

template <typename T>
void iter(T* ptr, size_t len, void (*func)(T&)) {
  for (size_t i = 0; i < len; ++i) {
    func(ptr[i]);
  }
}

template <typename T>
void iter(const T* ptr, size_t len, void (*func)(const T&)) {
  for (size_t i = 0; i < len; ++i) {
    func(ptr[i]);
  }
}
#endif