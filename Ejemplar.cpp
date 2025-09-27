#include "Ejemplar.h"
#include <iostream>
using namespace std;

// Sobrecarga del operador >>
/*
* Al usar entradaDeTexto >> Elemento crea un nuevo ejemplar en la direcci�n ejemplar
* Y rellena los argumentos - C�digo, Tipo, Nombre
*/
istream& operator>>(istream& entrada, Ejemplar& ejemplar)
{
	entrada >> ejemplar.codigo;
	char c;
	entrada >> c; 
	if (c == 'A') ejemplar.tipo = Ejemplar::audiovisual;
	else if (c == 'J')ejemplar.tipo = Ejemplar::juego;
	else if (c == 'L')ejemplar.tipo = Ejemplar::libro;
	getline(entrada, ejemplar.nombre);

	return entrada;
}

// Constructor de ejemplar vacio
Ejemplar::Ejemplar() : codigo(0), tipo(libro), nombre("") {};

// M�todo auxiliar para comprobar que el cat�logo y sus ejemplares se guardan correctamente
void LeerEjemplar(Ejemplar ejemplar) {
	cout << ejemplar.codigo << " ";
	if (ejemplar.tipo == Ejemplar::libro) cout << "Libro" << " ";
	else if(ejemplar.tipo == Ejemplar::audiovisual) cout << "Audiovisual" << " ";
	else if(ejemplar.tipo == Ejemplar::juego) cout << "Juego" << " ";
	cout << ejemplar.nombre << " " << endl;
}