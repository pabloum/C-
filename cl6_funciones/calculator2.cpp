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


struct Calculator {
  char op;
  arithmeticFnc operation;
};

static const Calculator arithmeticArray[] = {{'+',add},{'-',subtract},{'*',multiply},{'/', }};


arithmeticFnc getArithmeticFuntion(char op,Calculator array[],int size){
    for (size_t i = 0; i < size; i++) {
      if (arithmeticArray[i].op == op) {
        return arithmeticArray[i].operation;
      }
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

  arithmeticFnc operation = getArithmeticFuntion(op,arithmeticArray,4);

  int result = operation(x,y);

  std::cout << "The result of your operation is: " << result << '\n';

  return 0;
}
