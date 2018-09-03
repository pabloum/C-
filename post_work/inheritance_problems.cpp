#include <iostream>

using namespace std;

class Foo {
public:
  void f(){}
private:
  float vble;
  // int ola;
};

class Bar {
public:
  virtual void f(){}
private:
  float vble;
  // int ola;
};

int main(int argc, char const *argv[]) {

  Foo foo;
  Bar bar;

  std::cout << "sizeof(foo) = " << sizeof(foo) << '\n';
  std::cout << "sizeof(bar) = " << sizeof(bar) << '\n';
  std::cout << '\n';
  std::cout << "sizeof(int) = " << sizeof(int) << '\n';
  std::cout << "sizeof(double*) = " << sizeof(double*) << '\n';
  std::cout << "sizeof(float) = " << sizeof(float) << '\n';
  std::cout << "sizeof(double) = " << sizeof(double) << '\n';

  return 0;
}
