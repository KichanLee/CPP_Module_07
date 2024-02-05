template <typename T>
Array<T>::Array() : arr(NULL), len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]), len(n) {
  for (unsigned int i = 0; i < n; ++i) arr[i] = T();
}

template <typename T>
Array<T>::Array(const Array& rhs) : arr(new T[rhs.len]), len(rhs.len) {
  for (size_t i = 0; i < len; ++i) {
    arr[i] = rhs.arr[i];
  }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs) {
  if (this != &rhs) {
    delete[] this->arr;
    this->len = rhs.len;
    this->arr = new T[this->len];
    for (size_t i = 0; i < this->len; ++i) {
      this->arr[i] = rhs.arr[i];
    }
  }
  return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) const {
  if (index >= len) throw std::out_of_range("Index out of range");
  return arr[index];
}

template <typename T>
Array<T>::~Array() {
  delete[] arr;
}

template <typename T>
size_t Array<T>::size() const {
  return len;
}