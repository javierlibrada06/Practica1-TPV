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

//Método Auxiliar (imprime ejemplar en consola) - Comprobar la creación de Catalogo
void LeerEjemplar(Ejemplar);