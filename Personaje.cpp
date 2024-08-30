#include "Personaje.h"

Personaje::Personaje()
{
}

Personaje::Personaje(string nombre)
{
	srand(time(NULL));
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
	cout << "Nombre del personaje: "<<nombre<<endl;
	cout << "La vida del personaje: " << vida << endl;
	cout << "El ataque del personaje: "  << ataque << endl;
	cout << "La experiencia del personaje: " << xp << endl;
	cout << "La defensa del personaje: " << defensa << endl;
}

int Personaje::generadorNumRandom(int rango,int fin)
{
	srand(time(NULL));
	return (rand() % fin) + rango-1;
}

int Personaje::getVida() const
{
	return vida;
}

int Personaje::getAtaque() const
{
	return ataque;
}

int Personaje::getDefensa() const
{
	return defensa;
}

int Personaje::getXP() const
{
	return xp;
}

string Personaje::getNombre() const
{
	return nombre;
}

void Personaje::setVida(int vida) 
{
	this->vida = vida;
}
