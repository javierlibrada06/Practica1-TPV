#pragma once
#include "Ejemplar.h"
#include "Date.hpp"
class Prestamo
{
//ejemplar: Ejemplar*
//fecha : Date
//usuario : int

private:
	Ejemplar* ejemplar;
	int usuario;
	//Date fecha;
public: 
	Prestamo(Ejemplar*, Date, int);

};

