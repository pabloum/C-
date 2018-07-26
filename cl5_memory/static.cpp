#include <iostream>
#include <cstdlib>

// void fun(){
//   static unsigned  int numCalls = 2;
//   ++numCalls;
//   std::cout << "el valor de numCalls es "<< numCalls << '\n';
// }

int main(int argc, char const *argv[]) {
  // fun();
  // fun();
  // fun();
  // fun();

  int* ptr = (int*)malloc(32);
  *ptr = 10;
  ptr++;

  std::cout << "el valor de ptr es " << *ptr << '\n';
  // int x = 4;
  // int y = 8;
  //
  // int z = x + y;

  // free(ptr);
  return 0;
}
