#include<iostream>

using namespace std;

int  main() {
  system ("clear");

  int a;
  cout << "Enter a number please: "; cin >> a;

  switch (a) {
    case 1:
      cout << "It is one. " << endl;
      break;
    case 2:
      cout << "It is two. " << endl;
      break;
    default:
      cout << "ola k ase" << endl;
  }

  return 0;
}
