#include <iostream>
using namespace std;

int main() {
	double nota1, nota2, nota3, promedio;
	cout << Ingrese la primera nota: ;
	cin >> nota1;
	cout << Ingrese la segunda nota: ;
	cin >> nota2;
	cout << Ingrese la tercera nota: ;
	cin >> nota3;
	promedio = ( nota1 + nota2 + nota3 ) / 3;
	if ( promedio < 70 ) {
		cout << Esta desaprobado << endl;
	} else {
		cout << Esta aprobado << endl;
	}
	return 0;
}
