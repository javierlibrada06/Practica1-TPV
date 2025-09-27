#include "Catalogo.h"
#include "Ejemplar.h"
#include <iostream>

using namespace std;

// Constructor de la clase Catalogo a trav�s de una entrada de texto
// (El m�todo main del Program.cpp, busca el fichero "catalogo.txt")
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


// M�todo auxiliar para depurar la inicializaci�n del catalogo
void Catalogo::LeerCatalogo()
{
	for (size_t i = 0; i < numElems; ++i)
	{
		LeerEjemplar(elems[i]);
	}
}

