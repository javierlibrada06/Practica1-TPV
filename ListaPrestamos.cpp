//Headers
#include "checkML.h"
#include "ListaPrestamos.h"
#include "Catalogo.h"
#include "Ejemplar.h"
#include "Date.hpp"

//Otros
#include <iostream>
#include <algorithm>
using namespace std;

//Constructor
ListaPrestamos::ListaPrestamos(const Catalogo& catalogo, istream& fichero) 
{
	fichero >> numElems;
	elems = new Prestamo[numElems];

	for (size_t i = 0; i < numElems; i++)
	{
		elems[i].leerPrestamo(catalogo, fichero);
	}
}

//Destructor
ListaPrestamos::~ListaPrestamos() 
{
	delete[] elems;
}

void ListaPrestamos::ordenar()
{
	sort(elems, elems + numElems);
}

void ListaPrestamos::mostrar(ostream& salida) 
{
	for (int i = 0; i < numElems;i++) {
		salida << elems[i];
	}
}


