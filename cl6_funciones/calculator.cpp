#include <iostream>

int getInt(){
  int a;
  std::cout << "Enter an integer: ";
  std::cin >> a;
  return a;
}

int add(int x, int y){
  return x + y;
}

int subtract(int x, int y){
  return x - y;
}

int multiply(int x, int y){
  return x * y;
}

int divide(int x, int y){
  return x / y;
}

typedef int (*arithmeticFnc)(int,int);

arithmeticFnc getArithmeticFuntion(char op){
  if (op == '+') {
    return add;
  } else if (op == '-') {
    return subtract;
  } else if (op == '*') {
    return multiply;
  } else if (op == '/') {
    return divide;
  }
}

int main(int argc, char const *argv[]) {
  int x = getInt();
  int y = getInt();
  char op;

  while (op != '+' && op != '-' && op != '*' && op != '/') {
    std::cout << "Please, insert the operation you want:";
    std::cin >> op;
  }

  arithmeticFnc operation = getArithmeticFuntion(op);

  int result = operation(x,y);

  std::cout << "The result of your operation is: " << result << '\n';

  return 0;
}
