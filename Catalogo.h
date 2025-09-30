#pragma once
#include "Ejemplar.h"

#include <istream>

class Catalogo
{
	size_t numElems;
	Ejemplar* elems;

public:
	Catalogo(std::istream&);
	~Catalogo();

	Ejemplar* buscarEjemplar(int) const;

	//Método auxiliar para comprobar Lectura del archivo .txt
	void LeerCatalogo(); 
};