// Practica1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// Headers
#include "Ejemplar.h"
#include "Catalogo.h"

// Others
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Método principal provisional
// Escribe en consola el catálogo creado
int main()
{
	ifstream input;
	input.open("catalogo.txt");
	if (!input.is_open()) cout << "No se encuentra el fichero" << endl;
	else 
	{
		Catalogo catalogo = Catalogo(input);
		catalogo.LeerCatalogo();
	}
	input.close();
	
	

	return 0;
}
