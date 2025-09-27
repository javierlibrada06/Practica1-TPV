#pragma once
#include <istream>
#include <string>



struct Ejemplar
{
	enum Tipo {
		libro,
		audiovisual,
		juego
	};

	int codigo;
	Tipo tipo;
	std::string nombre;

public: 
	Ejemplar();
	
};

std::istream& operator>> (std::istream&, Ejemplar&);
void LeerEjemplar(Ejemplar);