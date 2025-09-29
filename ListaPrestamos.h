#pragma once
#include "Prestamo.h"
#include "Catalogo.h"
class ListaPrestamos
{

private:
	size_t numElems;
	Prestamo* elems[];

public:
	ListaPrestamos(const Catalogo&, std::istream&);
	~ListaPrestamos();
	void ordenar();
	void mostrar(std::ostream&);
};