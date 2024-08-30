#pragma once

#include <string>
#include <iostream>
#include <stdlib.h>  
#include "Personaje.h"
using namespace std;
class Astronomo :public Personaje
{
private:
	int inteligencia, sabiduria, vitalidad;
public:
	Astronomo(string);
	~Astronomo();
	void mostrarDatos();
	int batalla() const;
};

