//Headers
#include "checkML.h"
#include "Prestamo.h"
#include "Catalogo.h"
#include "Date.hpp"

//Otros
#include <iostream>
using namespace std;

// Salida - Formato (Fecha devolución (días hasta la entrega) nombre penalización(sihay) )
//ejemplo: 16 / 09 / 25 (en - 7 días) La guerra de los mundos(14 días de penalización)
ostream& operator<<(ostream& salida, Prestamo& prestamo)
{
	salida << prestamo.getDevolucion() << " ";
	Date date;
	int i = prestamo.getDevolucion().Date::diff(date);
	salida << "(en " << i << " días)";
	salida << prestamo.getEjemplar().nombre << " ";	
	if (i < 0) {
		salida << "( " << i * -1 * 2 << " días de penalización)";
	}
	salida << endl;
	return salida;
}

bool operator<(const Prestamo& p1, const Prestamo& p2)
{
	return p1.getDevolucion() < p2.getDevolucion();
}

Prestamo::Prestamo() : ejemplar(), fecha(), usuario(0) {};

void Prestamo::leerPrestamo(const Catalogo& cat, istream& entrada)
{
	int i;
	entrada >> i >> fecha >> usuario;
	ejemplar = cat.buscarEjemplar(i);
}

Ejemplar Prestamo::getEjemplar() { return *ejemplar; };
int Prestamo::getUsuario() const { return usuario; };
Date Prestamo::getFecha() { return fecha; };

//Libro 30 días, Juego 14 días, Audiovisual 7 días
Date Prestamo::getDevolucion() const
{
	int i = 0;
	if (ejemplar->tipo == Ejemplar::libro) i = 30;
	else if (ejemplar->tipo == Ejemplar::audiovisual) i = 7;
	else if (ejemplar->tipo == Ejemplar::juego) i = 7;
	return fecha + i;
}
