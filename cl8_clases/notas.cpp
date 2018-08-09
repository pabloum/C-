#include <iostream>
using namespace std;

class Foo{

public:
    size_t getValue(){
      return value;
    }
    void setValue(size_t a){
      value = a;
    }
    Foo() {
       value = 5;
    }

  private:
    size_t value;

  // Foo(const Foo& other) : value(new size_t(*other,value)){
  // }
  //
  // ~Foo(){
  //   delete value;
  // }


};


int main(int argc, char const *argv[]) {
  // cout << "Hola, mundo" << endl;
  Foo* a = new Foo();
  std::cout << "El getter está entragando " << a->getValue() << '\n';
  a->setValue(998);
  std::cout << "El getter está entragando " << a->getValue() << '\n';
  // Foo b(a); // Copia de a y la guardo en b

  return 0;
}
