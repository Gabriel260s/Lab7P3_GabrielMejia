#pragma once

#include <string>
#include <iostream>
#include "Personaje.h"
using namespace std;
class Mago :public Personaje
{
private:
	int inteligencia, sabiduria, magia;
public:
	Mago(string);
	~Mago();
	void mostrarDatos();
	int batalla;
};

