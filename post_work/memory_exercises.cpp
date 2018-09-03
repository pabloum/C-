
#include <iostream>

using namespace std;


/*
(1) Implementar la funcion merge() que toma como parametros dos punteros a un bloque contiguo de doubles y sus respectivos sizes y mergea (concatena) el primer bloque con el segundo bloque en un nuevo bloque de memoria contigua.
La función retorna un puntero al nuevo bloque contiguo de double’s
*/

int* merge(int* ptrA, int* ptrB, size_t a, size_t b){

  int* storage = new int [a+b];

  for (size_t i = 0; i < (a + b); i++) {
    if (i < a) {
      storage[i] = ptrA[i];
    } else {
      storage[i] = ptrB[i-a];
    }
  }

  // delete [] ptrA;
  ptrA = storage;

  return ptrA;
}

int main(int argc, char const *argv[]) {

  int a[3] = {1,2,3};
  int intruso = 99;
  int b[3] = {4,5,6};
  std::cout << "before execution a[5] = " << a[5] << '\n';

  int* c;
  c = merge(a, b, 3, 3);

  std::cout << "a[i] = " << a[3] << '\n';
  std::cout << "b[i] = " << b[0] << '\n';
  std::cout << "c[i] = " << c[5] << '\n';
  std::cout << "intruso = " << intruso << '\n';

  return 0;
}
