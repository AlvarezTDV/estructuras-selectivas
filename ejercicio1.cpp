#include <iostream>
using namespace std;

int main() {
	double nota1, nota2, nota3, promedio;
	bool verificador = false;
	do {
		cout << "Ingrese la primera nota: ";
		cin >> nota1;
		cout << "Ingrese la segunda nota: ";
		cin >> nota2;
		cout << "Ingrese la tercera nota: ";
		cin >> nota3;
		if ( nota1 >= 0 and nota2 >= 0 and nota3 >= 0 ) {
			promedio = ( nota1 + nota2 + nota3 ) / 3;
			if ( promedio < 70 ) {
				cout << "Esta desaprobado" << endl;
			} else {
				cout << "Esta aprobado" << endl;
			}
			verificador = true;
		} else {
			cout << "Ingreso notas invalidas" << endl;
		}
	} while ( verificador != true );
	return 0;
}
