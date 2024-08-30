#include "Personaje.h"

Personaje::Personaje()
{
}

Personaje::Personaje(string)
{
	this->nombre = nombre;
	vida = 100;
	ataque = generadorNumRandom(5,25);
	defensa = generadorNumRandom(5,10);
	xp = 0;
	
}

Personaje::~Personaje()
{
}

void Personaje::mostrarDatos()
{
	cout << "Nombre del personaje:"<<nombre<<endl;
	cout << "La clase del personaje:" << typeid(this).name() << endl;
	cout << "La vida del personaje:<" << vida << endl;
	cout << "El ataque del personaje:<" << ataque << endl;
	cout << "La experiencia del personaje:<" << xp << endl;
	cout << "La defensa del personaje:" << defensa << endl;
}

int Personaje::generadorNumRandom(int rango,int fin)
{
	return (rand() % rango) - fin;
}
