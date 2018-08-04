#include <iostream>

using namespace std;
void foo() {
  static size_t numCalls = 0;
  numCalls++;
  std::cout << "numCalls = " << numCalls << '\n';
}
int main(int argc, char const *argv[]) {
  cout << "size_t ocupa un total de: " << sizeof(size_t) << " bytes" << endl;
  cout << "int ocupa un total de: " << sizeof(int) << " bytes" << endl;

  foo();
  foo();
  foo();


  return 0;
}
