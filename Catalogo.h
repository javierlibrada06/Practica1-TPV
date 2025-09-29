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

	Ejemplar* buscarEjemplar(int);

	//M�todo auxiliar para comprobar que se lee el txt
	void LeerCatalogo(); 
};