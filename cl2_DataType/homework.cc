#include<iostream>
#include <string.h>
#include <cassert>

using namespace std;

enum colores{
  Blanco,     // 0
  Negro,      // 1
  Gris = 20,  // 20 --> NO HACERLO.
  Azul,        // 21
  naranja,
  morado,
  aguamarina,
  cafe,
  amarilo,
  rosado,
  pink,
  verdoso,
  mar,
  azulcielo,
  muyfeo,
  rey,
  translucido,
  piel,
  popo,
  fosforecente,
};

struct wizards{
  string tipo;
  int power;
};

union ux {
  short a;
  long b;
} u1;

class Pareja {
	int a, b;
public:
	void setA(int n) { a = n; }
	void setB(int n) { b = n; }
	int getA() { return a; }
	int getB() { return b; }
	void mostrar() {
		cout << "a = " << a << "; b = " << b << "; (a + b) = " << a+b << endl;
	}
};

int main(){
  system("clear");
  string x = "Hi there";

  assert("Hi there" == x);

  cout << "sizeof(char)\t = " << sizeof(char) << '\n';
  cout << "sizeof(bool)\t = " << sizeof(bool) << '\n';
  cout << "sizeof(short)\t = " << sizeof(short) << '\n';
  cout << "sizeof(int)\t = " << sizeof(int) << '\n';
  cout << "sizeof(float)\t = " << sizeof(float) << '\n';
  cout << "sizeof(long)\t = " << sizeof(long) << '\n';
  cout << "sizeof(double)\t = " << sizeof(double) << "\n";
  cout << "sizeof(size_t)\t = " << sizeof(size_t) << "\n";
  cout << "sizeof(unsigned int)\t = " << sizeof(unsigned int) << '\n';
  cout << "sizeof(string)\t = " << sizeof(string) << "\n \n";

cout << "sizeof(colores) [esto es un enum]\t = " << sizeof(colores) << "\n \n";
cout << "sizeof(Pareja) [esto es una clase]\t = " << sizeof(Pareja) << "\n \n";
cout << "sizeof(wizards) [esto es un struct]\t = " << sizeof(wizards) << "\n \n";
cout << "sizeof(ux) [esto es una union]\t = " << sizeof(ux) << "\n \n";


  int array[5] = {1, 2, 3, 4, 5};


  // Ensayo enum
  colores mage = Blanco;
  colores mage2 = Negro;
  cout << "I am printing mage: " << mage2 << endl;

  // Ensayo struct
  wizards pipol[3];
  pipol[1].tipo = "Blanco";
  pipol[1].power = 59;

  wizards perro;  // declara varible perro tipo wizards
  perro.tipo = "beige";

  cout << "The type of wizard of the first man is: " << pipol[1].tipo << ", and the power that he has is: " << pipol[1].power << endl;

  cout << "La variable que declaré fue: " << perro.tipo << endl;
  // Ensayo union
  u1.a = 2;

  ux u2;      // declara variable u2 tipo ux
  u2.a=1;

  cout << "This is union: " << u2.a << endl;

  //Ensayo Clase

  Pareja p4;
  p4.setA(20);
  p4.setB(59);
  p4.mostrar();

  /*
    - Los miembros de una struct son públicos por defecto, mientras que los miembros de una class son privados por defecto.
    - Los parámetros-argumentos struct se pasan normalmente por copia, los parámetros-argumentos class se pasan normalmente por referencia.
    */

  /*std::cout << "sizeof(int)\t = " << sizeof(int) << '\n';
  cout << "sizeof(int)\t = " << sizeof(int) << '\n';
  std::cout << "sizeof(int)\t = " << sizeof(int) << '\n';
  */
  return 0;
}
