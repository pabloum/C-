#include <iostream>


/*
(1) Implementar la funcion merge() que toma como parametros dos punteros a un bloque contiguo de doubles y sus respectivos sizes y mergea (concatena) el primer bloque con el segundo bloque en un nuevo bloque de memoria contigua.
La función retorna un puntero al nuevo bloque contiguo de double’s

*/

int* merge(int *a,int *b, int size_A, int size_B);
void printArray(int* a, int size_A);
using namespace std;

int main(int argc, char const *argv[]) {

  int a[5] = {1,2,3,4,5};
  int b[4] = {6,7,8,9};

  printArray(a,5);
  printArray(b,4);

  int* x = new int[5+4];;
  x = merge(a,b,5,4);
  printArray(x,9);
  delete [] x;
  // x = nullptr;

  return 0;
}

int* merge(int *a,int *b, int size_A, int size_B){
  int* x = new int[size_A+size_B];
  for (size_t i = 0; i < (size_A + size_B); i++) {
    if (i < size_A) {
      *(x + i) = *(a + i);
    } else {
      *(x + i) = *(b + i - size_A);
    }
  }
  return x;
}

void printArray(int* a, int size_A){
  for (size_t i = 0; i < size_A; i++) {
    cout << *(a+i) << " ";
  }
  cout << endl;
}
