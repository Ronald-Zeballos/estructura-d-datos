#pragma once
#include <string>
using namespace std;
class Cadenas

{
private:
	int longitud;
	string cadenas;
public:
	Cadenas();
	~Cadenas();
	string get_cadenas();
	void set_cadenas(string car);
	int tamanio();
	void comparar  ( string nom1, string nom2);
	void contarvocal(string nom);
	void encontracaracter(string car1, string car2);

	void quitarvocal(string car1, string car2);
	string invertir(string car, string car2);
	bool palindromo(string car, string car2);
	string sustraer(string car, int pos);

};

