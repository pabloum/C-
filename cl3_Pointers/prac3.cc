#include <iostream>

using namespace std;

struct Node{
  int value;
  Node* pos;
};

int main(int argc, char const *argv[]) {
  system("clear");

  /*Practiquemos los pinches punteros...*/

  Node a = {123,&a};
  Node* p = &a;

  std::cout << "Hola, mundo." << "\n \n";
  cout << "La dirección de memoria que guarda el puntero: ";
  cout << p->pos;

  cout << "\n \nEl valor que está almacenando la varible A es:";
  cout << a.value;

  cout << "\n \nLa dirección de memoria de A la varible ";
  cout << a.pos;

  cout << "\n \nY el valor que almacena el puntero es: ";
  cout << p->value;

  cout << "\n\np->next: ";
  cout << (*p).pos;  // p->pos (es exclusiva para punteros)
  cout << "\n\np->value: ";
  cout << p->value;

  cout << endl << endl;
  return 0;
}
