#pragma once
#include "Ejemplar.h" 
class Catalogo
{
private:
	size_t numElems;
	Ejemplar* elems;
public:
	Catalogo(istream&);
	~Catalogo();

	Ejemplar buscaEjemplar(int);
};