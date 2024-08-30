#pragma once
#include <string>
#include <iostream>

using namespace std;

class Personaje
{
private:
	string nombre;
	int vida, ataque, defensa, xp;
public:
	Personaje();
	Personaje(string);
	~Personaje();
	virtual void mostrarDatos();
	virtual int batalla() const = 0;
	int generadorNumRandom(int inicio,int fin);
	int getVida() const;
	int getAtaque() const;
	int getDefensa() const;
	int getXP() const;
};

