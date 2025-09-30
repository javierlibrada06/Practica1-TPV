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

//M�todo Auxiliar (imprime ejemplar en consola) - Comprobar la creaci�n de Catalogo
void LeerEjemplar(Ejemplar);