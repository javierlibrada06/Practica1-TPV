#include "Ejemplar.h"
#include <iostream>
using namespace std;

Ejemplar();

istream& operator>>(istream& s, Ejemplar& ejemplar)
{
	cin >> ejemplar.codigo;
	char c;
	cin >> c;
	if (c == 'A') ejemplar.tipo = audiovisual;
	else if (c == 'J')ejemplar.tipo = juego;
	else if (c == 'L')ejemplar.tipo = libro;
	cin >> ejemplar.nombre;
}