#include <iostream>
#include <vector>
#include "Personaje.h"
#include "Astronomo.h"
#include "Herbolario.h"
#include "Mago.h"
#include "Gladiador.h"
#include "Cazador.h"


using namespace std;

vector <Personaje*> vectorPersonajes;

void crearPersonaje() {
	string nombre;
	int opt;
	Cazador* cazador;
	Gladiador* gladeador;
	Mago* mago;
	Astronomo* astronomo;
	Herbolario* herbolario;
	cout << "Ingrese un nombre para el personaje:" << endl;
	cin >> nombre;
	cout << "Escoja la clase: " << endl;

	cout << "1. Cazador" << endl;
	cout << "2. Gladeador" << endl;
	cout << "3. Mago" << endl;
	cout << "4. Astronomo" << endl;
	cout << "5. Herbolario" << endl;
	cin >> opt;
	switch (opt)
	{
	case 1:
		cazador = new Cazador(nombre);
		vectorPersonajes.push_back(cazador);
		break;
	case 2:
		gladeador = new Gladiador(nombre);
		vectorPersonajes.push_back(gladeador);
		break;
	case 3:
		mago = new Mago(nombre);
		vectorPersonajes.push_back(mago);
		break;
	case 4:
		astronomo = new Astronomo(nombre);
		vectorPersonajes.push_back(astronomo);
		break;
	case 5:
		herbolario = new Herbolario(nombre);
		vectorPersonajes.push_back(herbolario);
		break;
	default:
		cout << "Opcion no existe";
		break;
	}


}

void listarPersonajes() {

	if (vectorPersonajes.empty()) {
		cout << "No hay personas registradas" << endl;
		return;
	}
	int i = 0;
	for (auto& personajes : vectorPersonajes) {
		cout << i++ << ".-";
		if (typeid(*personajes) == typeid(Cazador)) {
			static_cast<Cazador*>(personajes)->mostrarDatos();
		}
		else if (typeid(*personajes) == typeid(Mago)) {
			static_cast<Mago*>(personajes)->mostrarDatos();
		}
		else if (typeid(*personajes) == typeid(Astronomo)) {
			static_cast<Astronomo*>(personajes)->mostrarDatos();
		}
		else if (typeid(*personajes) == typeid(Gladiador)) {
			static_cast<Gladiador*>(personajes)->mostrarDatos();
		}
		else if (typeid(*personajes) == typeid(Herbolario)) {
			static_cast<Herbolario*>(personajes)->mostrarDatos();
		}

	}
}


int main()
{
	int opcion;


	do {
		cout << "----Viaje Fantastico de DMAF----" << endl;
		cout << "1. Crear Personaje" << endl;
		cout << "2. Listar Personaje" << endl;
		cout << "3. Nombre mas Exotico" << endl;
		cout << "4. Pelear" << endl;
		cout << "0. Salir del programa" << endl;
		cin >> opcion;


		switch (opcion)
		{

		case 1:
			crearPersonaje();
			break;
		case 2:
			listarPersonajes();
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			break;
		}


	} while (opcion != 0);
}

