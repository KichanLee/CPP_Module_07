#include <iostream>

#include "iter.hpp"

// 사용자 지정 함수 객체 클래스 정의
template <typename T>
struct Increment {
  void operator()(T &x) const { x += 1; }
};

int main(void) {
  int arr[3] = {0, 1, 2};

  Increment<int> func;
  ::iter(&arr[0], 3, func);

  for (int i = 0; i < 3; ++i) {
    std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
  }

  return 0;
}
