#include <iostream>

#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**) {
  Array<int> numbers(MAX_VAL);
  int* mirror = new int[MAX_VAL];
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand();
    numbers[i] = value;
    mirror[i] = value;
  }
  {
    Array<int> tmp = numbers;
    Array<int> test(tmp);
  }
  try {
    numbers[-2] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  try {
    numbers[MAX_VAL] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  for (int i = 0; i < MAX_VAL / 70; i++) {
    numbers[i] = rand();
    std::cout << numbers[i] << std::endl;
  }
  delete[] mirror;
  return 0;
}