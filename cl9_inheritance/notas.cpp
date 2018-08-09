#include <iostream>

using namespace std;

class A{
public:
  void foo(){
    std::cout << "A" << '\n';
  }
};

class B: public A{
public:
  void foox();
};

void B::foox(){
    std::cout << "B" << '\n';
}

int main(int argc, char const *argv[]) {
  A a;
  B b;
  a.foo();
  b.foox();
  return 0;
}
