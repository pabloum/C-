#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int op, num;

  std::cout << "\t\t BIENVENIDO!!" << '\n';
  std::cout << "\n1) Cubo de un número" << '\n';
  std::cout << "2) Determinar si un número es par o impar" << '\n';
  std::cout << "3) Salir" << '\n';

  std::cout << "\nIngrese la opción deseada: "; cin >> op;

  switch (op) {
    case 1:
      std::cout << "Ingrese el número del cual desea conocer su tercera potencia: "; cin >> num;
      num=pow(num,3);
      std::cout << "El cubo del número es: " << num << '\n';
      break;
    case 2:
      std::cout << "Ingrese el número que desea evaluar: "; cin >> num;
      if (num%2 == 0){
        std::cout << "El número es par" << '\n';
      }else{
        std::cout << "El número es impar. " << '\n';
      }
      break;
    case 3: break;
  }
  return 0;
}
