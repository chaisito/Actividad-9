#include<iostream>
using namespace std;

void sq(double num, double &out) {
	out = num * num;
}

int main() {
	double num = 0.0, out = 0.0;

	cout << "Ingrese un numero para elevar al cuadrado: " << endl;
	cin >> num;
	sq(num, out);

	cout << "El cuadrado de " << num << " es: " << out << endl;
	return 0;

}
