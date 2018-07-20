#include<iostream>

using namespace std;

int main(){
  float prac, teo, part, nFinal;

  cout << "Por favor, ingrese la nota práctica: "; cin >> prac;
  cout << "Por favor, ingrese la nota teórica: "; cin >> teo;
  cout << "Por favor, ingrese la nota participación: "; cin >> part;

  nFinal = (prac*0.3)+(teo*0.6)+(part*0.1);

  std::cout << "La nota final fue de " << nFinal << '\n';

  return 0;
}
