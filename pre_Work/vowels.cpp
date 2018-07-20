#include <iostream>

using namespace std;

int main(){
  system ("clear");
  char v;
  std::cout << "Ingrese una letra" << '\n'; cin >> v;

  switch (v) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': std::cout << "Es vocal" << '\n'; break;
    default: std::cout << "Es consonante" << '\n';
  }

  int a,b,c,d;

  std::cout << "Ingrese los tres números con los que desea comparar" << '\n'; std::cin >> a >> b >> c;

  std::cout << "Ahora, ingrese el número a comparar" << '\n'; std::cin >> d;

  if ( d==a || d==b || d==c) {
    std::cout << "El cuarto número coincide con alguno de los tres primeros. " << '\n';
  }else{
    std::cout << "El cuarto número no coincide con ninguno de los tres primeros números" << '\n';
  }

}
