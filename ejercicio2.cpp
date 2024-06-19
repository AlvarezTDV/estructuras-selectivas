#include <iostream>
using namespace std;

int main(){
	double precioCompra, descuento, precioFinal;
	string verificador;
	cout << "--------------------------------------------------" << endl;
	cout << "        Programa para implementar descuento       " << endl;
	cout << "--------------------------------------------------" << endl;
	do {
		cout << "Ingrese el precio de su compra => ";
		cin >> precioCompra;
		cout << "--------------------------------------------------" << endl;
		if ( precioCompra >= 0 ) {
			if ( precioCompra > 1000 ){
				descuento = precioCompra * 0.2;
				precioFinal = precioCompra - descuento;
				cout << "Obtuvo un 20% de descuento en su compra     " << endl;
				cout << "El total a pagar es => " << precioFinal << endl;
				cout << "--------------------------------------------------" << endl;
			} else {
				cout << "No obtuvo descuento, el total a pagar es => " << precioCompra << endl;
				cout << "--------------------------------------------------" << endl;
			}
		} else {
			cout << "         Ingreso un precio negativo            " << endl;
			cout << "--------------------------------------------------" << endl;
		}
		cout << "Desea continuar ingresando precios (si o no) => ";
		cin >> verificador;
		cout << "--------------------------------------------------" << endl;
	} while ( verificador != "no" );
	cout << "         Gracias por usar este programa           " << endl;
	cout << "--------------------------------------------------" << endl;
	return 0;
}

