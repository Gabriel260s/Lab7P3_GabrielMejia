#include <iostream>
#include <vector>
#include "Personaje.h"
using namespace std;

vector <Personaje*> vectorPersonajes;

void crearPersonaje() {
    string nombre;
    int opt;
    cout << "Ingrese un nombre para el personaje:"<<endl;
    cin>> nombre;
    cout << "Escoja la clase: " << endl;
 
    cout << "1. Cazador" << endl;
    cout << "2. Gladeador" << endl;
    cout << "3. Mago" << endl;
    cout << "4.Astronomo" << endl;
    cout << "5. Herbolario" << endl;
    cin >> opt;
}

void listarPersonajes() {

}


int main()
{
    int opcion;


    do {
        cout << "----Viaje Fantastico de DMAF----"<<endl;
        cout << "1. Crear Personaje" << endl;
        cout << "2. Listar Personaje" << endl;
        cout << "3. Nombre mas Exotico" << endl;
        cout << "4.Pelear" << endl;
        cout << "0. Salir del programa" << endl;
        cin >> opcion;


        switch (opcion)
        {

        case 1:
            break;
        case 2:
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


    } while (opcion!=0);
}

