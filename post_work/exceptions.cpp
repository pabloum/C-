/*
try
catch
throw
*/

#include <iostream>

int main(int argc, char const *argv[]) {

  try {
    int motherAge = 29;
    int sonAge = 50;

    if (motherAge < sonAge) {
      throw 0;
    }
  }
  catch (int x) {
    std::cout << "Wrong ages - Error -" << x << '\n';
  }
  return 0;
}
