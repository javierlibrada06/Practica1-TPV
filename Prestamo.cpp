#include "Prestamo.h"
#include "Date.hpp"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& salida, Prestamo& prestamo)
{
	salida << prestamo.getEjemplar().codigo;
	salida << prestamo.getFecha();
	salida << prestamo.getUsuario();

	return salida;
}

Prestamo::Prestamo() : ejemplar(), fecha(0, 0, 0), usuario(0) {};

void Prestamo::leerPrestamo(const Catalogo& catalogo, istream& entrada)
{
	Catalogo cat = catalogo;
	int i;
	entrada >> i;
	ejemplar = cat.buscarEjemplar(i);
	entrada >> fecha;
	entrada >> usuario;
}

Ejemplar Prestamo::getEjemplar() { return *ejemplar; };
int Prestamo::getUsuario() const { return usuario; };
Date Prestamo::getFecha() { return fecha; };

//libro 30 dias, juego 14 dias, audiovisual 7 dias
Date Prestamo::getDevolucion() const
{
	int i = 0;
	if (ejemplar->tipo == Ejemplar::libro) i = 30;
	else if (ejemplar->tipo == Ejemplar::audiovisual) i = 7;
	else if (ejemplar->tipo == Ejemplar::juego) i = 7;
	return fecha + i;
}
