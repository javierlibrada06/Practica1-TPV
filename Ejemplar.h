#pragma once
#include <string>

using namespace std;

enum Tipo {
	libro,
	audiovisual,
	juego
};
class Ejemplar
{
private:
	Tipo tipo;
	int codigo;
	string nombre;
public:
	Ejemplar(int, Tipo, string);
};

