#include "Astronomo.h"

Astronomo::Astronomo(string nombre):Personaje(nombre)
{
	inteligencia = generadorNumRandom(1, 5);
	sabiduria = generadorNumRandom(1, 5);
	vitalidad = generadorNumRandom(1, 5);
}

Astronomo::~Astronomo()
{
}

void Astronomo::mostrarDatos()
{
	Personaje::mostrarDatos();
	cout << "La inteligencia del astronomo: " << inteligencia << endl;
	cout << "La sabiduria del astronomo: " << sabiduria << endl;
	cout << "La vitalidad del astronomo: " << vitalidad << endl;
	cout << endl;
}

int Astronomo::batalla() const
{
	return (inteligencia+sabiduria)*(vitalidad+Personaje::getAtaque());
}
