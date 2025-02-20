#include "Gladiador.h"

Gladiador::Gladiador(string nombre):Personaje(nombre)
{
	srand(time(NULL));
	fuerza = generadorNumRandom(1, 5);
	destreza = generadorNumRandom(1, 5);
	constitucion = generadorNumRandom(1, 5);
}

Gladiador::~Gladiador()
{
}

void Gladiador::mostrarDatos()
{
	cout << "La clase del personaje: gladiador" << endl;
	Personaje::mostrarDatos();
	cout << "La fuerza del gladiador: " << fuerza << endl;
	cout << "La destreza del gladiador: " << destreza << endl;
	cout << "La constitucion del gladiador: " << constitucion << endl;
	cout << endl;
}

int Gladiador::batalla() const
{
	return (Personaje::getAtaque() + constitucion)*(fuerza+destreza);
}
