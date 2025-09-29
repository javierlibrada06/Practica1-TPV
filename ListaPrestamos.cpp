#include "ListaPrestamos.h"
#include "Catalogo.h"
#include "Ejemplar.h"
#include <iostream>
using namespace std;

ListaPrestamos::ListaPrestamos(const Catalogo& catalogo, istream& fichero) 
{
	fichero >> numElems;
	elems = new Prestamo[numElems];
}
ListaPrestamos::~ListaPrestamos() 
{
	delete[] elems;
}
