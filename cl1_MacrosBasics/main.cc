
#include<iostream>
#include "sum.h"
// #include "sum.cc"
#include <string> // Librería con varios métodos útiles.

#define DEBUG 1 // esto es una macro
#define PI 3.1415929
#define FOR(i,n) for(i=0; i<n; i++)
#define x "hola" // coge lo primero y lo reemplaza en lo segundo

int main(){
/*
  if (DEBUG) {
    std::cout << "Hola, mundo :D" << '\n';
  }
  #ifdef DEBUG  // después lo cambió por un if normal
    std::cout << "Hola, mundo :D  " << sum(3,4)<< '\n';
  #endif
  std::cout << x << '\n';*/
  int i;
  FOR(i,10){
    std::cout << "Hola mundo " << sum(98,2) << '\n';
  }

  // std::cout << "EL resultado es: " << sum(5,4) << '\n';



  return 0;
}
