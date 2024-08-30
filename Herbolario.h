#pragma once

#include <string>
#include <iostream>
#include "Personaje.h"
using namespace std;
class Herbolario :public Personaje
{
private:
	int inteligencia, sabiduria, suerte;
public:
	Herbolario(string);
	~Herbolario();
	void mostrarDatos();
	int batalla;
};

