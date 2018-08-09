#include <iostream>
#include <ctime>

using namespace std;

void sort(int* ptr, int size);
void printArray(int* ptr, int size);
int changeConst(const int a);
inline void f1() {
  cout << "Hola f1" << endl;
}
void f2() {
  cout << "Hola f2" << endl;
}

int point11(double p){
  return p;
}

float fn2(char c){
  return c;
}
typedef float (*ptrFn2)(char);
ptrFn2 fn1(int i){
  ptrFn2 ptr = fn2;
  return ptr;
}

int main(int argc, char const *argv[]) {
  int arr[] = {6,2,3,5,6,7};
  printArray(arr,6);
  sort(arr,6);
  printArray(arr,6);
  int x = changeConst(10);
  cout << "changeConst returns " << x << endl;
  clock_t t0 = clock();
  for (size_t i = 0; i < 150; i++) {
    f1();
  }
  clock_t delta1 = clock() - t0;
  t0 = clock();
  for (size_t i = 0; i < 150; i++) {
    f2();
  }
  clock_t delta2 = clock() - t0;
  cout << "Delta 1 es: " << (float)delta1/CLOCKS_PER_SEC << endl;
  cout << "Delta 2 es: " << (float)delta2/CLOCKS_PER_SEC << endl;

  int (*fncPtr)(double);
  fncPtr = point11;
  int y = point11(11.3);
  cout << "I am receiving " << y << endl;

  ptrFn2 (*fncPtr1)(int) = fn1;

  return 0;
}

int changeConst(const int a){
  int* ptrA = const_cast <int*>(&a);
  // a = 2;
  *ptrA = 5;
  return a;
}

void sort(int* ptr, int size){
  int aux = 0;
  for (size_t i = 0; i < size; i++) {
    for (size_t j = i; j < size; j++) {
      if (ptr[i]>ptr[j]) {
        aux = ptr[i];
        ptr[i]= ptr[j];
        ptr[j] = aux;
      }
    }
  }
}

void printArray(int* ptr, int size){
  for (size_t i = 0; i < size; i++) {
    cout << ptr[i] << ' ';
  }
  cout << endl;
}
