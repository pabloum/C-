

#include<iostream>
#include<functional>

using namespace std;

void foo (int a){
    cout << a + a << endl;
}

void bar (int a){
    cout << a * a << endl;
}


void execute_function(std::function <void(int)> fun, int a){
    fun(a);
}

int main(){
    std::function <void(int)> fun = foo;

    // execute_function(foo);
    // execute_function(bar);

    execute_function(fun,9);
    execute_function(fun,7);

    fun(100);

    return 0;
}

/*
manuel.sabogal@globant.com
*/