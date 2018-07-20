#include <iostream>
using namespace std;

/*
  Este programa convierte un número decimal en un número romano.

  hint:
    M = 1000
    D = 500
    C = 100
    L = 50
    X = 10
    V = 5
    I = 1
*/

int main(){
  system("clear");
  int a, units, tens, hundrs, thousns;
  char r[10];

  std::cout << "Ingrese un número entero que desee convertir en número romano: "; cin >> a;

  units = a%10; a /= 10;
  tens = a%10; a /= 10;
  hundrs = a%10; a /= 10;
  thousns = a%10; a /= 10;

  switch (thousns) {
    case 0: std::cout << ""; break;
    case 1: std::cout << "M"; break;
    case 2: std::cout << "MM"; break;
    case 3: std::cout << "MMM"; break;
    case 4: std::cout << "MMMM"; break;
    case 5: std::cout << "MMMMM"; break;
    case 6: std::cout << "MMMMMM"; break;
    case 7: std::cout << "MMMMMMM"; break;
    case 8: std::cout << "MMMMMMMM"; break;
    case 9: std::cout << "MMMMMMMMM"; break;
  }

  switch (hundrs) {
    case 1: std::cout << "C"; break;
    case 2: std::cout << "CC"; break;
    case 3: std::cout << "CCC"; break;
    case 4: std::cout << "CD"; break;
    case 5: std::cout << "D"; break;
    case 6: std::cout << "DC"; break;
    case 7: std::cout << "DCC"; break;
    case 8: std::cout << "DCCC"; break;
    case 9: std::cout << "CM"; break;
  }

  switch (tens) {
    case 1: std::cout << "X"; break;
    case 2: std::cout << "XX"; break;
    case 3: std::cout << "XXX"; break;
    case 4: std::cout << "XL"; break;
    case 5: std::cout << "L"; break;
    case 6: std::cout << "LX"; break;
    case 7: std::cout << "LXX"; break;
    case 8: std::cout << "LXXX"; break;
    case 9: std::cout << "XC"; break;
  }

  switch (units) {
    case 0: std::cout << " " << '\n'; break;
    case 1: std::cout << "I" << '\n'; break;
    case 2: std::cout << "II" << '\n'; break;
    case 3: std::cout << "III" << '\n'; break;
    case 4: std::cout << "IV" << '\n'; break;
    case 5: std::cout << "V" << '\n'; break;
    case 6: std::cout << "VI" << '\n'; break;
    case 7: std::cout << "VII" << '\n'; break;
    case 8: std::cout << "VIII" << '\n'; break;
    case 9: std::cout << "IX" << '\n'; break;
  }


}
