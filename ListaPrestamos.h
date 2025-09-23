#pragma once
#include "Prestamo.h"
#include "Catalogo.h"
class ListaPrestamos
{
//elems: Prestamo*
//numElems : size_t

private:
	size_t numElems;
	Prestamo* elems[];

public: 
	ListaPrestamos(const Catalogo&, istream&);
};

