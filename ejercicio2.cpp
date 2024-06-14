#include <iostream>
using namespace std;

int main(){
	double precioCompra, descuento, precioFinal;
	cout << "Ingrese el precio de su compra: ";
	cin >> precioCompra;
	if ( precioCompra > 1000 ){
		descuento = precioCompra * 0.2;
		precioFinal = precioCompra - descuento;
		cout << "Obtuvo un 20% de descuento en su compra, el total a pagar es: " << precioFinal << endl;
	} else {
		cout << "No obtuvo descuento, el total a pagar es: " << precioCompra << endl;
	}
	return 0;
}

