#include <iostream>
using namespace std;

int main() {
	double nota1, nota2, nota3, promedio;
	bool verificador = false;
	do {
		cout << "Ingrese la primera nota (Nota de 0 a 100 puntos): ";
		cin >> nota1;
		cout << "Ingrese la segunda nota (Nota de 0 a 100 puntos): ";
		cin >> nota2;
		cout << "Ingrese la tercera nota (Nota de 0 a 100 puntos): ";
		cin >> nota3;
		if ( nota1 >= 0 && nota2 >= 0 && nota3 >= 0 && nota1 <= 100 && nota2 <= 100 && nota3 <= 100 ) {
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
