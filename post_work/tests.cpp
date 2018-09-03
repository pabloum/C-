#include <iostream>

using namespace std;

int& returnByRef () {
  static int a = 5;
  return a;
}

int main(int argc, char const *argv[]) {

  int value = returnByRef();

  std::cout << "The functions returns: " << value << '\n';

  return 0;
}
