#include <iostream>

using namespace std;

int main() {

  system("clear");

  int a, b, c;

  cout << "Please, insert three numbers: " << endl; cin >> a >> b >> c;

  if (a>b && a>c){
    cout << "The first number is greatest" << endl;
  }else if (b>a && b>c){
    cout << "The second number is greatest" << endl;
  }else if (c>a && >b){
    cout << "The third number is the greatest" << endl;
  }else{
    cout << "Ehm, this is akward, because I do not really know the correct answer." << endl;
  }

  return 0;
}
