
#include<iostream>
using namespace std;
// inline float foo(float a, float b){
//     return (a + b);
// }

// int increment (int& i){
//     int a = ++i;
//     return a;
// }

// int& foo2(){
//     int a = 3;
//     return a;
// }

void foo (int a){
    cout << a + a << endl;
}

void bar (int a){
    cout << a * a << endl;
}


void execute_function(void(*fnc_ptr)(int)){
    fnc_ptr(5);
}

int main(){
    // foo (5.0f,3.0f);
    // int a = increment(6);
    // int& b = foo2();
    // void (*foo_ptr)(int);  // pointer to function 
    execute_function(foo);
    execute_function(bar);
    return 0;
}
/*

*/