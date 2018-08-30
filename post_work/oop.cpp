#include <iostream>

using namespace std;

class Carro{
  int ruedas;
  string color;
  int modelo;
  string marca;

public:
  // Defautl contructor
  Carro(int ruedas, string color, int modelo, string marca) :
      ruedas(ruedas),
      color(color),
      modelo(modelo),
      marca(marca)
      {
      }

  // Copy constructor
  Carro(const Carro &carro) :
      ruedas(carro.ruedas),
      color(carro.color),
      modelo(carro.modelo),
      marca(carro.marca)
  {

  }

  // ~Carro(){
  //   delete ruedas;
  //   delete marca;
  //   delete modelo;
  //   delete color;
  // }

  void printCarro(){
    std::cout << "Marca: " << marca << '\n';
    std::cout << "Modelo: " << modelo << '\n';
    std::cout << "Color: " << color << '\n';
    std::cout << "Ruedas: " << ruedas << '\n';
  }

};

int main(int argc, char const *argv[]) {

  Carro coche(1, "blanco", 2015, "mazda");
  Carro cocheCopia(coche);

  coche.printCarro();
  std::cout << '\n';
  cocheCopia.printCarro();

  return 0;
}
