#include "Matriz.h"
#include <iostream>
#define max 10
using namespace std;
int main() {
	int fil, col, M[max][max];
	Matriz objeto1;
	do {
		cout << "ingresar el numero de filas: ";
		cin >> fil;
		cout << "ingrear el numero de columnas: ";
		cin >> col;
	} while (fil, col > max || fil, col < 0);
	objeto1.set_fil(fil);
	objeto1.set_col(col);
	objeto1.cargar(M);
	objeto1.mostrar(M);
	objeto1.promedio(M);
	objeto1.mayor(M);

	return 0;




}
