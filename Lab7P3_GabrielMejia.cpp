#include <iostream>
#include <vector>
#include "Personaje.h"
#include "Astronomo.h"
#include "Herbolario.h"
#include "Mago.h"
#include "Gladiador.h"
#include "Cazador.h"
#include <stdlib.h>  



using namespace std;
template <typename T>
//Hace los deletes al vector
void limpiarVector(vector<T*>& vec) {
	for (auto& ptr : vec) {
		if (ptr != nullptr) {
			delete ptr;
			ptr = nullptr;
		}
	}
	vec.clear();
	
}

vector <Personaje*> vectorPersonajes;
//Crea un personaje con el nombre ingresado
void crearPersonaje() {
	if (vectorPersonajes.size() > 2) {
		cout << "Ya no se peuden crear mas personajes." << endl;
		return;
	}
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
		cout << "No hay personajes registrados" << endl;
		return;
	}
	int i = 0;
	for (auto& personajes : vectorPersonajes) {
		cout << i++ << ".-";
		personajes->mostrarDatos();
	}
}
//Lista solo el nombre de los personajes
void listarSimple() {
	if (vectorPersonajes.empty()) {
		cout << "No hay personajes registrados" << endl;
		return;
	}
	int i = 0;
	for (auto& personajes : vectorPersonajes) {
		cout << i++ << ".-";
		cout << personajes->getNombre() << endl;;
	}
}

template <typename t>

void nombreMasExotico(t& Personaje1, t& Personaje2,string& nombre1,string& nombre2) {
	t ptr1, ptr2;
	ptr1 = Personaje1;
	ptr2 = Personaje2;
	
	if (ptr1 > ptr2) {
		cout << ptr1<<" > " << ptr2 << endl;
		cout << "El ganador es: " << nombre1 << endl;
		
	}if (ptr1 < ptr2) {
		cout << ptr2<<" > " << ptr1 << endl;
		cout << "El ganador es: " << nombre2 << endl;
	}

}

//Elegi los personajes a comparar
void elegirNombres() {
	listarSimple();
	if (vectorPersonajes.empty()) {
		return;
	}
	int opt1, opt2;
	cout << "Ingrese el indice del primer jugador: " << endl;
	cin >> opt1;
	cout << "Ingrese el indice del segundo jugador: " << endl;
	cin >> opt2;
	if (opt1 == opt2) {
		cout << "No puedes comparar los mismos jugadores" << endl;
	}
	else if (opt1<0 || opt1>vectorPersonajes.size() || opt2 < 0 || opt2>vectorPersonajes.size()) {
		cout << "Rango no valido";
		return;
	}
	string nombre1 = vectorPersonajes[opt1]->getNombre();
	string nombre2 = vectorPersonajes[opt2]->getNombre();

	nombreMasExotico(vectorPersonajes[opt1], vectorPersonajes[opt2],nombre1,nombre2);
}
//Pide el usuario la posicion de 2 personajes para que uno de los personajes ataque con 50% cada uno 
void pelear() {
	listarSimple();
	if (vectorPersonajes.empty()) {
		return;
	}
	int opt1, opt2;
	cout << "Ingrese el indice del primer jugador: " << endl;
	cin >> opt1;
	cout << "Ingrese el indice del segundo jugador: " << endl;
	cin >> opt2;

	int random = (rand() % 2) + 1;
	int nuevaVida;
	if (random == 2) {
		cout << "El jugador 1 va a atacar" << endl;
		cout << "El dano que hara " << vectorPersonajes[opt1]->getNombre() << " es de: " << vectorPersonajes[opt1]->batalla() << endl;
		nuevaVida = vectorPersonajes[opt2]->getVida() - vectorPersonajes[opt1]->batalla();
		vectorPersonajes[opt2]->setVida(nuevaVida);
		if (nuevaVida <= 0) {
			cout << "El jugador 2 a muerto!" << endl;
			vectorPersonajes.erase(vectorPersonajes.begin() + opt2);
		}
	}
	else if (random == 1) {
		cout << "El jugador 2 va a atacar" << endl;
		cout << "El dano que hara " << vectorPersonajes[opt2]->getNombre() << " es de: " << vectorPersonajes[opt2]->batalla() << endl;;
		nuevaVida = vectorPersonajes[opt1]->getVida() - vectorPersonajes[opt2]->batalla();
		vectorPersonajes[opt1]->setVida(nuevaVida);
		if (nuevaVida <= 0) {
			cout << "El jugador 1 a muerto!" << endl;
			vectorPersonajes.erase(vectorPersonajes.begin() + opt1);
		}
	}
}


void main()
{
	int opcion;
	srand(time(NULL));


	do {
		cout << "\n----Viaje Fantastico de DMAF----" << endl;
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
			elegirNombres();
			break;
		case 4:
			pelear();
			break;
		case 0:
			cout << "Fin del programa" << endl;
			limpiarVector(vectorPersonajes);
			break;
		default:
			cout << "Opcion no existe." << endl;
			break;
		}


	} while (opcion != 0);
}

