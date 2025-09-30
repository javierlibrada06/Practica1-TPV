#pragma once
#include "Ejemplar.h"
#include "Catalogo.h"
#include "Date.hpp"
#include "checkML.h"

using namespace std;
class Prestamo
{
	Ejemplar* ejemplar;;
	Date fecha;
	int usuario;

public: 
	Prestamo();
	Prestamo(Ejemplar*, Date, int);

	Ejemplar getEjemplar();
	Date getFecha();
	int getUsuario() const;
	Date getDevolucion() const;

	void leerPrestamo(const Catalogo&, std::istream&);
	friend bool operator<(const Prestamo&, const Prestamo&);
	friend ostream& operator<<(ostream&, Prestamo&);

};

