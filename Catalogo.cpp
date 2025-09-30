//Headers
#include "checkML.h"
#include "Catalogo.h"
#include "Ejemplar.h"

//Otros
#include <iostream>

using namespace std;

// Constructor de la clase Catalogo a través de una entrada de texto
// (El método main del Program.cpp, busca el fichero "catalogo.txt")
Catalogo::Catalogo(istream& fichero) 
{
		fichero >> numElems;
	
		elems = new Ejemplar[numElems]; // Inicializa un array dinámico de Ejemplares
	
		for (size_t i =0; i < numElems; i++) 
		{ 
			fichero >> elems[i];
		}
}

// Destructor de Catalogo (elimina elems)
Catalogo::~Catalogo() {
	delete[] elems;
}

// Busqueda binaria para encontrar el ejmeplar en el catalogo
Ejemplar* Catalogo::buscarEjemplar(int i) const
{
    int izq = 0;
    int der = numElems - 1;

    while (izq <= der) 
    {
        int medio = izq + (der - izq) / 2;

        if (i < elems[medio].codigo) 
        {
            der = medio - 1;
        } 
        else if (i > elems[medio].codigo) 
        {
            izq = medio + 1;
        } 
        else  // encontrado
        {
            return &elems[medio];
        }
    }

    return nullptr; // no encontrado
}

// Método auxiliar para depurar la inicialización del catalogo
void Catalogo::LeerCatalogo()
{
    for (size_t i = 0; i < numElems; ++i)
    {
        LeerEjemplar(elems[i]);
    }
}
