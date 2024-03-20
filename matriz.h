#pragma once
#define max 10
class Matriz

{
private:
	int fil, col, M[max][max];
public:
	Matriz(void);
	~Matriz(void);
	void set_fil(int fila);
	int get_fil();
	void set_col(int columna);
	int get_col();
	void cargar(int m[max][max]);
	void mostrar(int m[max][max]);
	void promedio(int m[max][max]);
	void mayor(int m[max][max]);


};
