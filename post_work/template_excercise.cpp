#include <iostream>

using namespace std;

template <typename T>
class StaticArray{
private:
  size_t size;
  T* arr;
public:
  StaticArray(size_t size) : size(size) {
    arr = new T [size];
    for (size_t i = 0; i < size; i++) {
      arr[i] = 0;
    }
  }

  void insert(T num) {
    // arr[size++] = num;
    T* storage = new T [++size];
    for (size_t i = 0; i < size; i++) {
      if (i == size - 1) {
        storage[i] = num;
      } else {
        storage[i] = arr[i];
      }
    }
    delete [] arr;
    arr = storage;
  }

  T at(int i) {
    return arr[i];
  }

  void edit (int i, T val){
    arr[i] = val;
  }

  void printArray () {
    std::cout << "array = { ";
    for (size_t i = 0; i < size; i++) {
      std::cout << arr[i];
      if (i < size - 1)
        std::cout << ", ";
    }
    std::cout << "} " << '\n';
  }
};

int main(int argc, char const *argv[]) {

  StaticArray <int> vero (5);

  vero.edit(0, 1);
  vero.edit(1, 2);
  vero.edit(2, 3);
  vero.edit(3, 4);
  vero.edit(4, 5);

  vero.insert(6);

  vero.printArray();


  return 0;
}

/*
(1) Implementar un template llamado StaticArray que tome como el tipo de dato del arreglo y su size.
Los métodos que tendrá son:
• delete() que borra el ultimo elemento
• reverse() que revierte el contenido del arreglo
• totalSize() devuelve la cantidad de elementos
• availableSize() retorna la cantidad de lugar disponible para seguir agregando elementos
• swap() que toma dos índices e intercambia los valores de los elementos en dichos índices
• Especializar parcialmente el template, donde la cantidad de elementos es 1000
• Especializar totalmente el template, donde el tipo es float y la cantidad de elementos es 1000

• ** insert() que inserta un elemento en la próxima posición disponible
• ** getElement() que toma el índice del elemento y devuelve el elemento en ese índice
• ** print() imprime su contenido
Todo el manejo de errores y chequeo de precondiciones tiene que ser realizado por su clase, no por el usuario de la misma.
*/
