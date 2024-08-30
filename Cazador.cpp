#include "Cazador.h"

Cazador::Cazador(string nombre ):Personaje( nombre)
{
	agilidad = generadorNumRandom(1, 5);
	velocidad = generadorNumRandom(1, 5);
	perspicacia = generadorNumRandom(1, 5);
}

Cazador::~Cazador()
{
}

void Cazador::mostrarDatos()
{
	Personaje::mostrarDatos();
	cout << "La agilidad del cazador: " << agilidad<<endl;
	cout << "La velocidad del cazador: " << velocidad << endl;
	cout << "La perspicia del cazador: " << perspicacia << endl;
	cout << endl;
	
}

int Cazador::batalla() const
{
	return (Personaje::getAtaque()*agilidad)+(velocidad+perspicacia);
}
