#include "Astronomo.h"

Astronomo::Astronomo(string nombre):Personaje(nombre)
{
	srand(time(NULL));
	inteligencia = generadorNumRandom(1, 5);
	sabiduria = generadorNumRandom(1, 5);
	vitalidad = generadorNumRandom(1, 5);
}

Astronomo::~Astronomo()
{
}

void Astronomo::mostrarDatos()
{
	cout << "La clase del personaje: astronomo" << endl;
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
