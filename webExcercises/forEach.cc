#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[]) {

  string names[] = {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

  string name;
  int flag = 0;

  cout << "Enter the name to check: "; cin >> name;

  for (auto i : names){
    if (i == name) {
      flag = 1;
    }
  }

  if (flag == 1) {
    cout << name << " was found" << endl;
  } else {
    cout << name << " was not found" << endl;
  }

  return 0;
}
