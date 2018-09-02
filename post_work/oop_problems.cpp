#include <iostream>

using namespace std;

class Vero {
private:
  int bd;

public:
  Vero (int bd){ bd = bd; }
};

class Foo {
public:
  Foo();
private:
  int a;
  int b;
  int c;
};

Foo::Foo()
  : a(10)
  , c(7)
  , b(c)
{
  std::cout << a << " " << b << " " << c << '\n';
}

int main() {
  
  //   Vero mona(99);
  Foo foo;

  return 0;
}
