#include "Mago.h"

Mago::Mago(string nombre):Personaje(nombre)
{
	srand(time(NULL));
	inteligencia = generadorNumRandom(1, 5);
	sabiduria = generadorNumRandom(1, 5);
	magia = generadorNumRandom(1, 5);
}

Mago::~Mago()
{
}

void Mago::mostrarDatos()
{
	cout << "La clase del personaje: mago" << endl;
	Personaje::mostrarDatos();
	cout << "La inteligencia del mago: " << inteligencia << endl;
	cout << "La sabiduria del mago: " << sabiduria << endl;
	cout << "La magia del mago: " << magia << endl;
	cout << endl;
}

int Mago::batalla() const
{
	return Personaje::getAtaque()+(inteligencia*magia)+sabiduria;
}
