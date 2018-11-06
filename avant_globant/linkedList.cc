#include <iostream>

void glober();
void sort(int* vec, int size);
void printVec(int* vec, int size);

int main(int argc, char const *argv[]) {

  glober();

  int x[] = {3, 2, 1};

  printVec(x, 3);
  sort(x, 3);
  printVec(x, 3);

  glober();
  return 0;
}

void sort(int* vec, int size){
  for (size_t i = 0; i < size; i++) {
    for (size_t j = 0; j < size; j++) {
      if (vec[i] < vec[j]) {
        int aux = vec[i];
        vec[i] = vec[j];
        vec[j] = aux;
      }
    }
  }
}

void printVec(int* vec, int size){
  std::cout << "[ ";
  for (size_t i = 0; i < size-1; i++) {
    std::cout << vec[i] << ", ";
  }
  std::cout << vec[size-1] <<"] \n";
}

void glober() {
  std::cout << "I am oficially a Glober" << std::endl;
}
