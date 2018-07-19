

#include <iostream>

using namespace std;


int main() {
  // Hablamos de if -else
  // int i = 10;
  // int* ip = &i;
  // // ip = 0;
  //
  // std::cout << ip << '\n';
  // std::cout << (*ip) << '\n';
  //
  // if (ip && *ip == 10) {
  //   std::cout << "SUCCESS" << '\n';
  // }else{
  //   std::cout << "FAILURE" << '\n';
  // }
  // Conclusión: ip existe -> aprueba && la vble guardada adonde apunta ip sí vale 10; entra al for


  // int value = 0;
  //   switch (value++) {
  //   case 0:
  //       std::cout << "case 0" << std::endl;
  //   case 1:
  //       std::cout << "case 1" << std::endl;
  //   default:
  //       std::cout << "default" << std::endl;
  //   }
  // Conclusión:  Entra a todos porque no está el break



    // int value = 0;
    // switch (value) {
    // case 0: { // necesario para declarar vbles dentro del scope
    //     int j = 10;
    //     std::cout << "case 0" << std::endl;
    // } break;
    // default:
    //     std::cout << "default" << std::endl;
    // }
    // Conclusión:

    const unsigned int max = 15;
    for (unsigned char i = max; i >= 0; --i) {
        // std::cout << i << std::endl;
        std::cout << std::hex << i << '\n';
        if (i==0xf0) {  // 240 = 0xf0
          return 0;
        }
    }
    // Conclusión: nunca usar unsigned en un for a menos que se sepa muyyy bien qué se está haciendo. Si no es estrictamente ncesario, QUITARLO
    // Recordar la aritmética de hexa. La manera de restar un computador. 

  return 0;
}
