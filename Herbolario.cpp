#include "Herbolario.h"

Herbolario::Herbolario(string nombre):Personaje(nombre)
{
	inteligencia = generadorNumRandom(1, 5);
}

void Herbolario::mostrarDatos()
{
	Personaje::mostrarDatos();
	cout << "La agilidad del cazador" << inteligencia << endl;
	cout << "La velocidad del cazador" << sabiduria << endl;
	cout << "La perspicacia del cazador" << suerte << endl;
}
