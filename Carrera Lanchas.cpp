#include <iostream>
#include "Header.h"
using namespace std;

int jugadores;
string nombrejugadores[5];

//funciones
void inicio();

void inicio() {
	cout << "===========================================================================" << endl;
	cout << "=                                                                         =" << endl;
	cout << "=                              GRAN CARRERA                               =" << endl;
	cout << "=                               DE LANCHAS                                =" << endl;
	cout << "=                                                                         =" << endl;
	cout << "===========================================================================" << endl;

}


int main() {
	int option = 0;
	Lancha lancha1("lancha1", 0, 0, 0);
	Lancha lancha2("lancha2", 0, 0, 0);

	inicio();
	//players();

	cout << "Introduce la cantidad de jugadores como maximo 2" << endl;
	cin >> option;

	if (option == 2)
	{
		for (int turno = 1; turno <= 5; turno++) {
			cout << "Turno " << turno << endl;
			lancha1.getvelo();
			lancha1.distanciatotal();

			int opcion;
			cout << "Quieres utilizar el nitro? (SI = 1, NO = 0)" << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				lancha1.usenitro();
			}
		}
		lancha1.statuslancha();

		for (int turno = 1; turno <= 5; turno++) {
			cout << "Turno " << turno << endl;
			lancha2.getvelo();
			lancha2.distanciatotal();

			int opcion;
			cout << "Quieres utilizar el nitro? (SI = 1, NO = 0)" << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				lancha2.usenitro();
			}
		}lancha2.statuslancha();
	}
	else {
		cout << "Invalid Option" << endl;
	}
	cout << "		" << endl;
	cout << "La distancia de la lancha1 ha sido de " << lancha1.distanciatotal() << endl;
	cout << "La distancia de la lancha2 ha sido de " << lancha2.distanciatotal() << endl;

	if (lancha1.distanciatotal() > lancha2.distanciatotal()) {
		cout << "Ha ganado la lancha1" << endl;
	}

	else if (lancha2.distanciatotal() > lancha1.distanciatotal()) {
		cout << "Ha ganado la lancha2" << endl;
	}

	else if (lancha1.distanciatotal() == lancha2.distanciatotal()) {
		cout << "Las lanchas han empatado" << endl;
	}
}
