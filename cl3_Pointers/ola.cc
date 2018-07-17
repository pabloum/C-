#include <iostream>
using namespace std;

int main(){
  system("clear");

  int val = 5;

  int* a = &val;
  int* b = a;

  *b = 3;

  cout << "El nuevo valor de *a es: " << *a << endl;
  cout << "El nuevo valor de val es: " << val << endl;
  return 0;
}
