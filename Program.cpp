// Main

// Headers
#include "checkML.h"
#include "Ejemplar.h"
#include "Catalogo.h"
#include "ListaPrestamos.h"
#include "Prestamo.h"
#include "Date.hpp"

// Otros
#include <iostream>
#include <fstream>
#include <string>
//#include <windows.h>

using namespace std;

// Método principal provisional
int main()
{

	//SetConsoleOutputCP(CP_UTF8);

	ifstream inputCatalogo;
	inputCatalogo.open("catalogo.txt");
	if (!inputCatalogo.is_open()) cout << "No se encuentra el fichero" << endl;
	else 
	{
		Catalogo catalogo (inputCatalogo);

		inputCatalogo.close();

		ifstream inputPrestamo;
		inputPrestamo.open("prestamos.txt");
		if (!inputPrestamo.is_open()) cout << "No se encuentra el fichero" << endl;
		else
		{
			ListaPrestamos lista (catalogo, inputPrestamo);
			lista.ordenar();
			ofstream outfile("salida.txt");
			lista.mostrar(outfile);
		}

		inputPrestamo.close();
	}
	return 0;
}
