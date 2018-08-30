#include <iostream>

using namespace std;

/*
int foo (int a, int b){
  return 5;
}

int goo (){
  return 1;
}

int main(int argc, char const *argv[]) {

  int (*fncPtr)(int, int) = foo; // "declaration"
  int (const *fncPtr2)(int, int) = foo; // this one here is constant

  // fncPtr = foo;
  // fncPtr2 = goo(); // This is a mistake. That would actually call the function and would allocate 5 to fncPtr2

  std::cout << fncPtr(1,8) << '\n';

  return 0;
}
*/

char mathOperation(){
  char op;
  while (op != '+' && op != '-' && op != '*' && op != '/') {
    std::cout << "Please, enter an valid mathematical operation: ";  cin >> op;
    if(op != '+' && op != '-' && op != '*' && op != '/')
      std::cout << "That is not a valid mathematical operation" << '\n';
  }
  return op;
}

int getInt(){
  int x;
  std::cout << "Enter an integer, please: "; cin >> x;
  return x;
}

int add (int, int);
int substract (int, int);
int multiply (int, int);
int divide (int, int);

typedef int (*arithmeticFnc)(int, int);
arithmeticFnc getArthmeticFnc(char);

int main(int argc, char const *argv[]) {

  int  x  = getInt();
  char op = mathOperation();
  int  y  = getInt();

  arithmeticFnc operation = getArthmeticFnc(op);

  int res = operation(x,y);

  std::cout << "The result of the selected operatio is: " << res << '\n';

  return 0;
}

arithmeticFnc getArthmeticFnc(char op){
  if (op == '+') {
    return add;
  } else if (op == '-') {
    return substract;
  } else if (op == '*') {
    return multiply;
  } else if (op == '/') {
    return divide;
  }

}

int add (int a, int b){
  return (a + b);
}
int substract (int a, int b){
  return (a - b);
}
int multiply (int a, int b){
  return (a * b);
}
int divide (int a, int b){
  return (a / b);
}
