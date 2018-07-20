#include <iostream>
using namespace std;

int main(){
  system("clear");
  int a;
  std::cout << "Ingrese número para verificación de paridad: "; cin >> a;
  if (a%2 == 0){
    std::cout << "El número es par" << '\n';
  }else{
    std::cout << "El número es impar" << '\n';
  }

  if (a<0) {
    std::cout << "El número es negativo" << '\n';
  } else if (a>0) {
    std::cout << "El número es positivo" << '\n';
  } else {
    std::cout << "El número es cero (0)" << '\n';
  }

}
