#include "Herbolario.h"

Herbolario::Herbolario(string nombre):Personaje(nombre)
{
	srand(time(NULL));
	inteligencia = generadorNumRandom(1, 5);
	sabiduria = generadorNumRandom(1, 5);
	suerte = generadorNumRandom(1, 5);
}

Herbolario::~Herbolario()
{
}

void Herbolario::mostrarDatos()
{
	cout << "La clase del personaje: herbolario" << endl;
	Personaje::mostrarDatos();
	cout << "La inteligencia del herbolario: " << inteligencia << endl;
	cout << "La sabiduria del herbolario: " << sabiduria << endl;
	cout << "La suerte del herbolario: " << suerte << endl;
	cout << endl;
}

int Herbolario::batalla() const
{
	return Personaje::getAtaque()+(inteligencia+sabiduria);
}
