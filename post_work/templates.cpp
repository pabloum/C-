#include <iostream>

using namespace std;

template <class T>
T min (T& a, T&b){
  return a<b ? a : b;
}

int main(int argc, char const *argv[]) {

  float x = 1.0f;
  float y = 2.0f;

  std::cout << min<float>(x,y) << '\n';

  return 0;
}


/*
template<typename T>
T sum(T* arr, const size_t size) {
  T s;
  for (size_t i = 0; i < size; ++i) {
    s += arr[i];
  }
  return s;
}

int main(int argc, char const *argv[]) {

  const size_t size = 10;
  int arr[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  const int result = sum<int>(arr, size);

  std::cout << result << '\n';

  return 0;
}
*/
