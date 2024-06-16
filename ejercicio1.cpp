#include <iostream>
using namespace std;
string promedioNota ( double x, double y, double z) {
	string m;
	if ( x >= 0 && x <= 100 && y >= 0 && y <= 100 && z >= 0 && z <= 100 ) {
		double p = ( x + y + z ) / 3;
		if ( p < 70 ) {
			m = "Esta desaprobado";
		} else {
			m = "Esta aprobado";
		}
	} else {
		m = "Ingreso notas invalidas";
	}
	return m;
}

int main() {
	double nota1, nota2, nota3;
	string mensaje;
	bool verificador = false;
	do {
		cout << "Ingrese la primera nota (Nota de 0 a 100 puntos): ";
		cin >> nota1;
		cout << "Ingrese la segunda nota (Nota de 0 a 100 puntos): ";
		cin >> nota2;
		cout << "Ingrese la tercera nota (Nota de 0 a 100 puntos): ";
		cin >> nota3;
		mensaje = promedioNota ( nota1, nota2, nota3 );
		if ( mensaje != "Ingreso notas invalidas" ) {
			verificador = true;
			cout << mensaje << endl;
		} else {
			cout << mensaje << endl;
		}
	} while ( verificador != true );
	return 0;
}
