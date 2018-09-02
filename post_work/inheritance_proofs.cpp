
#include <iostream>

using namespace std;

class Base {
private:
  /* data */

public:
  Base (){
    std::cout << "I am in the Base constructor" << '\n';
  }
  ~Base () {}
};

class Derived : public Base {
private:
  /* data */

public:
  Derived () : Base(){
    std::cout << "This is the Derived class" << '\n';
  }
  ~Derived () {
    std::cout << "Destructor called" << '\n';
  }
};

int main(int argc, char const *argv[]) {

  Derived derive;

  return 0;
}
