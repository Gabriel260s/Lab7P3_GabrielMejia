#include "Cazador.h"

void Cazador::mostrarDatos()
{
	Personaje::mostrarDatos();
	cout << "La agilidad del cazador" << agilidad<<endl;
	cout << "La velocidad del cazador" << velocidad << endl;
	cout << "La perspicia del cazador" << perspicacia << endl;
	
}
