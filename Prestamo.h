#pragma once
#include "Ejemplar.h"
#include "Catalogo.h"
#include "Date.hpp"
class Prestamo
{
	Ejemplar* ejemplar;
	int usuario;
	Date fecha;
public: 
	Prestamo();
	Prestamo(Ejemplar*, Date, int);

	Ejemplar getEjemplar();
	Date getFecha();
	int getUsuario() const;
	Date getDevolucion() const;

	void leerPrestamo(const Catalogo&, std::istream&);
	bool operator<(const Prestamo&) const;



};

