#include "ListaPrestamos.h"
#include "Catalogo.h"
#include "Ejemplar.h"
#include "Date.hpp"
#include <iostream>
using namespace std;

ListaPrestamos::ListaPrestamos(const Catalogo& catalogo, istream& fichero) 
{
	fichero >> numElems;
	elems = new Prestamo[numElems];

	for (size_t i = 0; i < numElems; i++)
	{
		elems[i].leerPrestamo(catalogo, fichero);
	}
}
ListaPrestamos::~ListaPrestamos() 
{
	delete[] elems;
}

//16 / 09 / 25 (en - 7 d�as) La guerra de los mundos(14 d�as de penalizaci�n)
//23 / 09 / 25 (en 0 d�as) Yo, robot

void ListaPrestamos::mostrar(ostream& salida) 
{
	const Date date = Date();
	int i=0;
	for (size_t i = 0; i < numElems; i++) 
	{
		i = date.Date::diff(elems[i].getFecha());
		salida << elems[i].getFecha() << " ";
		salida << "(en " << i <<  " d�as)";
		string nombre = " ";
		//NombreEjemplar(elems[i].getEjemplar(), nombre);
		salida << nombre;
		
		if (i < 0) {
			salida << "( " << i*-1*2 << " d�as de penalizaci�n)";
		}

	}
}
