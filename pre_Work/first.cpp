#include<iostream>

using namespace std;

int main(){


	float a, b, c, d, e, f, res = 0, res2 = 0, res3 = 0;

	cout << "\n Digite el valor de a: "; cin >> a;
	cout << " Digite el valor de b: "; cin >> b;
	cout << " Digite el valor de c: "; cin >> c;
	cout << " Digite el valor de d: "; cin >> d;
	cout << " Digite el valor de e: "; cin >> e;
	cout << " Digite el valor de f: "; cin >> f;

	res = (a/b)+1;

	cout.precision(2);	// Para que el resultado mostrado en pantalla no tenga demasiados decimales
	cout << "\n El resultado de la expresion matemática es: " << res << endl;

	res2 = (a+b)/(c+d);
	cout << " El resultado de la segunda expresion matemática es: " << res2 << endl;

	res3 = (a+(b/c))/(d+(e/f));
	cout << " El resultado de la tercera expresion matemática es: " << res3 << endl;

	return 0;
}
