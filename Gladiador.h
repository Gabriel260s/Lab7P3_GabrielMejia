#pragma once

#include <string>
#include <iostream>
#include "Personaje.h"
using namespace std;
class Gladiador :public Personaje
{
private:
	int fuerza, destreza, constitucion;
public:
	Gladiador(string);
	~Gladiador();
	void mostrarDatos();
	int batalla;
};

