#include "Mago.h"

Mago::Mago(string nombre):Personaje(nombre)
{
	inteligencia = generadorNumRandom(1,5)
}

Mago::~Mago()
{
}

void Mago::mostrarDatos()
{
	Personaje::mostrarDatos();
	cout << "La inteligencia del cazador" << inteligencia << endl;
	cout << "La sabiduria del cazador" << sabiduria << endl;
	cout << "La magia del cazador" << magia << endl;
}
