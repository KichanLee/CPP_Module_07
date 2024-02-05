#include "iter.hpp"

void add(int& arr) {
  arr += 1;
  std::cout << arr << std::endl;
}

template <typename T>
void print(const T& element) {
  std::cout << element << ' ';
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  iter(arr, 5, add);

  size_t len = sizeof(arr) / sizeof(arr[0]);

  std::cout << "Testing int array: ";
  iter(arr, len, print<int>);
  iter(arr, len, print<const int>);

  std::cout << std::endl;

  double arrDouble[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  size_t lenDouble = sizeof(arrDouble) / sizeof(arrDouble[0]);

  std::cout << "Testing double array: ";
  iter(arrDouble, lenDouble, print<const double>);
  std::cout << std::endl;
}
