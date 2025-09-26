#pragma once
#include <string>

using namespace std;


struct Ejemplar
{
	enum Tipo {
		libro,
		audiovisual,
		juego
	};

	int codigo;
	Tipo tipo;
	string nombre;
	
};

Ejemplar();
istream& operator>> (istream&, Ejemplar&);

