#include<iostream>
using namespace std;

int main(){
  int op;
  int saldo,saldo_in = 1000;
  std::cout << "\t\t¡¡BIENVENIDO!!" << '\n';
  std::cout << "Menú principal: " << '\n';
  std::cout << "\t 1) Ingresar dinero" << '\n';
  std::cout << "\t 2) Retirar dinero" << '\n';
  std::cout << "\t 3) Salir" << '\n';

  std::cout << "Ingrese la opción que desee: "; std::cin >> op;

  switch (op) {
    case 1:
      std::cout << "Ingrese la cantidad de dinero que desea añadir a la cuenta: "; std::cin >> saldo;
      saldo = saldo + saldo_in;
      saldo_in = saldo;
      std::cout << "Su saldo total es de " << saldo << '\n';
      break;
    case 2:
      std::cout << "Ingrese la cantidad de dinero que desea añadir a la cuenta: "; std::cin >> saldo;
      saldo = saldo_in - saldo;
      saldo_in = saldo;
      std::cout << "Su saldo total es de " << saldo << '\n';
      break;
    case 3:
      std::cout << "Gracias por visitarnos, vuelva pronto" << '\n';
    default: std::cout << "Opción no válida" << '\n'; break;
  }

  return 0;
}
