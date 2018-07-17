#include <iostream>
#include "circulo.h"

#define PI 3.1415929

/*

  ¡¡ DUDA !!
  ¿Por qué meter las funciones (o métodos) dentro de los namespace y no simplemente como una función común y correinte?
  ¿Mejor definir las funciones dentro del namespace o mejor en una librería .h
  Dentro de la librería, ¿por qué es preferible usar otro archivo para escribir la función?
  GRACIAS.

*/

// I create a namespace named math
// namespace math{
// float circleArea (int r){
//     return PI * r * r;
//   }
//  
//   float circlePerimeter (int r){
//     return 2 * PI * r;
//   }
// }

// I mentione the namespaces that I am going to use.
using namespace std;
// using namespace math;

int main(){

  int r;

  cout << "Please, enter the radius: "; std::cin >> r;

  float area = circleArea(r);
  float perimeter = circlePerimeter(r);

  std::cout << "The area of your circle is " << area << " and the perimeter is "<< perimeter << '\n';


  return 0;
}
