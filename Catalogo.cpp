#include "Catalogo.h"
#include "Ejemplar.h"
#include <iostream>

using namespace std;

// Constructor de la clase Catalogo a través de una entrada de texto
// (El método main del Program.cpp, busca el fichero "catalogo.txt")
Catalogo::Catalogo(istream& fichero) 
{
		fichero >> numElems;
	
		elems = new Ejemplar[numElems]; // Inicializa un array dinamico de Ejemplares
	
		for (size_t i =0; i < numElems; i++) 
		{ 
			fichero >> elems[i];
		}
}

// Destructor de Catalogo (elimina elems)
Catalogo::~Catalogo() {
	delete[] elems;
}


// Método auxiliar para depurar la inicialización del catalogo
void Catalogo::LeerCatalogo()
{
	for (size_t i = 0; i < numElems; ++i)
	{
		LeerEjemplar(elems[i]);
	}
}

Ejemplar* Catalogo::buscarEjemplar(int i) 
{
	int izq = 0;
	int der = numElems - 1;
	int medio = izq + (der-izq)/2;
	//medio = izq +(der-izq)/2 
	bool encontrado = false;
	Ejemplar* ejBuscado;
	while (!encontrado)
	{
		if (i < elems[medio].codigo)
		{
			der = medio-1;
			 medio = izq + (der - izq) / 2;
		}
		else if (i > elems[medio].codigo)
		{
			izq = medio + 1;
			 medio = izq + (der - izq) / 2;
		}
		else if (i == elems[medio].codigo)
		{
			ejBuscado = &elems[medio];
			encontrado = true;
			return ejBuscado;
		}
	}
	return nullptr;
}

