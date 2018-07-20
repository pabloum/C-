#include <iostream>
#include <math.h>

using namespace std;

int main(){
  float a, b, hipo, theta;

  cout << "Por favor, ingrese el valor del primer cateto: "; cin >> a;
  cout << "Por favor, ingrese el valor del segundo cateto: "; cin >> b;

  hipo = sqrt(pow(a,2)+pow(b,2));
  theta = atan(b/a)*180/M_PI;

  cout.precision(2);
  std::cout << "La hipotenusa es de: " << hipo << " [unidades]" << '\n';
  std::cout << "El valor del ángulo entre la hipotenusa y la horizontal es de: " << theta << "°" << '\n';



  return 0;
}
