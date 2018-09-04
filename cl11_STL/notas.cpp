

/*

STL - Standard Template Library

Iteradores - Containers - Algorithm

Todos los algoritmos reciben iteradores.
Son portables

vectores
  .pushback -> para agregar uno al final
  .erase

*/
// YOU CAN'T PUT IN THE HOURS UNLESS YOU LOVE IT

#include <iostream>
#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::map <std::string, int> persona;
  persona["d"] = 10;
  persona["b"] = 20;
  persona["c"] = 30;
  persona["a"] = 40; // It is organized anyway
  persona["e"] = 50;

  persona.clear();  // It wouldn't show anything

  // First way of printing

  std::map<std::string, int> :: iterator it;

  for (it = persona.begin(); it != persona.end(); it++) {
    std::cout << (*it).first << " " << it->second << '\n';
  }

  // Second way of printing

  std::cout << '\n';

  for(auto p : persona){
    std::cout << p.first << " " << p.second << '\n';
  }



  return 0;
}

/*

Sets
  parecidos a los mapas pero sin valor

Elementos ordenados.

Nos devuleve las llaves de manera incrremental

Tambié es posible recorrer un vector.



Buscar expresión lambda

online gdb


*/
