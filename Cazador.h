#pragma once

#include <string>
#include <iostream>
#include "Personaje.h"
using namespace std;
class Cazador:public Personaje
{
private:
	int agilidad, velocidad, perspicacia;
public:
	Cazador(string);
	~Cazador();	
	void mostrarDatos();
	int batalla;
};

