#include "Gladiador.h"

Gladiador::Gladiador(string nombre):Personaje(nombre)
{
	fuerza = generadorNumRandom(1, 5);
	destreza = generadorNumRandom(1, 5);
	constitucion = generadorNumRandom(1, 5);
}

void Gladiador::mostrarDatos()
{
	Personaje::mostrarDatos();
	cout << "La fuerza del cazador" << fuerza << endl;
	cout << "La destreza del cazador" << destreza << endl;
	cout << "La constitucion del cazador" << constitucion << endl;
}
