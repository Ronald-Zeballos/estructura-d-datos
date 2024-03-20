#pragma once
#define MAX 10
class Matriz

{
private:
	int fil, col, M[MAX][MAX];
public:
	Matriz(void);
	~Matriz(void);
	void set_fil(int fila);
	int get_fil();
	void set_col(int columna);
	int get_col();
	void cargar(int m[MAX][MAX]);
	void mostrar(int m[MAX][MAX]);
	void promedio(int m[MAX][MAX]);
	void mayor(int m[MAX][MAX]);


};
