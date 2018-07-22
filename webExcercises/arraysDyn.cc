#include <iostream>
#include <string.h>

using namespace std;

void printArray (int array[], int length){
  for (size_t i = 0; i < length; i++) {
    cout << array[i] << ' ';
  }
  cout << endl;
}

int main(int argc, char const *argv[]) {

  string msj;
  cout << "Enter the message" << endl;
  getline(cin,msj); // para leer el input dell usuario con esapcios

  int length;
  length = msj.length();

  cout << "The length is: " << length << endl;

  int* array = new int[length] {1,2,3,4,5}; // // use array new.  Note that length does not need to be constant!
  // int array[length];
  // array[0] = 0;
  // array[1] = 1;
  // array[2] = 2;
  // array[3] = 3;
  // array[4] = 4;
  // array[5] = 5;

  cout << array[6] << endl;
  printArray(array,length);

  // delete[] array;

  return 0;
}
