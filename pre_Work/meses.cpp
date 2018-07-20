#include<iostream>
using namespace std;

int main(){
  int month;
  std::cout << "\nIngrese el mes que desea ver: ";
  cin >> month;

  switch (month) {
    case 1: std::cout << "Enero" << '\n'; break;
    case 2: std::cout << "Febrero" << '\n';break;
    case 3: std::cout << "Marzo" << '\n';break;
    case 4: std::cout << "Abril" << '\n';break;
    case 5: std::cout << "Mayo" << '\n';break;
    case 6: std::cout << "Junio" << '\n';break;
    case 7: std::cout << "Julio" << '\n';break;
    case 8: std::cout << "Agosto" << '\n';break;
    case 9: std::cout << "Septiembre" << '\n';break;
    case 10: std::cout << "Octubre" << '\n';break;
    case 11: std::cout << "Noviembre" << '\n';break;
    case 12: std::cout << "Diciembre" << '\n';break;
    default: std::cout << "No introdujo ningún mes válido" << '\n';

  }

  return 0;
}
