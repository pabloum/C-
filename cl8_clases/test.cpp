// #include <iostream>
// void f(double) { std::cout << "f(double)"; }
//
// int main() {
//     f(3);
// }

// #include <iostream>
// using std::cout;
//
// void f(float) { cout << "“f(float)”"; }
// void f(long double) {cout << "“f(long double)”"; }
//
// int main() {
//   cout << "hola mundo";
//     f(2.0f);
// }

// #include <iostream>
// using std::cout;
// using std::endl;
//
// void f(int&) { cout <<"“A”"; }
// void f(const int&) {cout << "“B”"; }
//
// int main() {
//     int i = 10;
//     const int ci = 11;
//
//     f(i);
//     f(ci);
// }


#include <iostream>

void f(int) { std::cout << "int dafq"; }
void f(double) { std::cout << "double"; }

int main() {
    char a = 'a';
    f(a);
}
