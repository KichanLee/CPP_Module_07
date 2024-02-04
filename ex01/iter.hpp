#ifndef __ITER_HPP_
#define __ITER_HPP_

#include <iostream>

template <typename T1, typename T2, typename T3>

void iter(T1 ptr, T2 len, T3 func) {
  for (size_t i = 0; (T2)i < len; ++i) {
    func((*ptr)[i]);
  }
}
#endif