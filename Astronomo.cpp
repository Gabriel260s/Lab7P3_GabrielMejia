#include "Astronomo.h"

void Astronomo::mostrarDatos()
{
	Personaje::mostrarDatos();
	cout << "La inteligencia del astronomo" << inteligencia << endl;
	cout << "La sabiduria del astronomo" << sabiduria << endl;
	cout << "La vitalidad del astronomo" << vitalidad << endl;
}
