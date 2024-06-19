#include <iostream>
using namespace std;
string promedioNota ( double x, double y, double z) {
	string m;
	if ( x >= 0 && x <= 100 && y >= 0 && y <= 100 && z >= 0 && z <= 100 ) {
		double p = ( x + y + z ) / 3;
		if ( p < 70 ) {
			m = " esta desaprobado";
		} else {
			m = " esta aprobado";
		}
	} else {
		m = "ERROR: Ingreso notas invalidas";
	}
	return m;
}

int main() {
	double nota1, nota2, nota3;
	string mensaje, continuar, nombreEstudiante;
	cout << "-------------------------------------------------------" << endl;
	cout << "      Programa para sacar el promedio de 3 notas       " << endl;
	cout << "-------------------------------------------------------" << endl;
	do {
		cout << "Ingrese el nombre del estudiante => ";
		cin >> nombreEstudiante;
		cout << "-------------------------------------------------------" << endl;
		cout << "Ingrese la primera nota (Nota de 0 a 100 puntos) => ";
		cin >> nota1;
		cout << "-------------------------------------------------------" << endl;
		cout << "Ingrese la segunda nota (Nota de 0 a 100 puntos) => ";
		cin >> nota2;
		cout << "-------------------------------------------------------" << endl;
		cout << "Ingrese la tercera nota (Nota de 0 a 100 puntos) => ";
		cin >> nota3;
		cout << "-------------------------------------------------------" << endl;
		mensaje = promedioNota ( nota1, nota2, nota3 );
		if ( mensaje != "ERROR: Ingreso notas invalidas" ) {
			cout << nombreEstudiante << mensaje << endl;
			cout << "-------------------------------------------------------" << endl;
		} else {
			cout << mensaje << endl;
			cout << "-------------------------------------------------------" << endl;
		}
		cout << "Desea continuar ingresando notas (si o no) => ";
		cin >> continuar;
		cout << "-------------------------------------------------------" << endl;
	} while ( continuar != "no" );
	cout << "Gracias por usar el programa :D" << endl;
	cout << "-------------------------------------------------------" << endl;
	return 0;
}
