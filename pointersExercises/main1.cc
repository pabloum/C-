



#include <iostream>
#include <string.h>

using namespace std;

int main(){

  // Exercise 1
  //
  // Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.

  int a=4, b=5;
  // std::cout << "Please, enter two numbers: " << '\n'; cin >> a; cin >> b;

  int* ptrA = &a;
  int* ptrB = &b;

  cout << "The memory address is: " << ptrA << ", the value is " << *ptrA << endl;
  cout << "The memory address is: " << ptrB << ", the value is " << *ptrB << endl;

/////////////////////////////////////////////////////

  // Exercise 2
  std::cout << "\n\n" << '\n';
  //
  // Write a C++ program to find the max of an integral data set. The program will ask the user to input the number of data values in the set and each value. The program prints on screen a pointer that points to the max value.

  // int n, max;
  // int* pmax = &max;
  // int arr[n];
  //
  // cout << "Enter the number of data values: "; cin >> n;
  //
  // for (int i = 0; i < n ; i++) {
  //   std::cout << "Enter the number: "; cin >> arr[i];
  // }
  //
  // max = arr[0];
  //
  // for (int i = 1; i < n; i++) {
  //   if (arr[i] > arr[i-1]) {
  //     max = arr[i];
  //   }
  // }
  //
  // std::cout << "The maximum number is: " << *pmax << ", and it is located in the following memory location: " << pmax << '\n';

  /////////////////////////////////////////////////////

  // Exercise 3
  std::cout << "\n\n" << '\n';
  //
  // Given the string "A string." Print on one line the letter on the index 0, the pointer position and the letter t. undate the pointer to pointer +2. Then, in another line print the pointer and the letters r and g of the string (using the pointer).

  // char msn[] = "A string.";
  // char* pmsn = msn;
  //
  // std::cout << *(pmsn) << " - " << *pmsn << " - " << *(pmsn+3) << '\n';
  // pmsn += 2;
  // cout << *pmsn << " - " << *(pmsn+2) << " - " << *(pmsn+5) << endl;

  int aa = 127;
  int cc = 1010;
  int bb = 323;

  int* paa = &aa;

  std::cout << "This is bb: " << *(paa+2) << '\n';


  return 0;
}
