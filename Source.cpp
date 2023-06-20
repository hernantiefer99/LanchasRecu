#include <iostream>
#include "Header.h"
using namespace std;

//constructor
Lancha::Lancha(string pname, int pvelo, int pdr, int pnitro) {
	velocidad = pvelo;
	distanciarecorrida = pdr;
	nitro = pnitro;
	name = pname;
}

//getters

string Lancha::getname() {
	return name;
}

int Lancha::getnitro() {
	return nitro;
}

int Lancha::getdr() {
	distanciarecorrida = distanciarecorrida + velocidad * 100;
	return distanciarecorrida;
}

int Lancha::getvelo() {
	velocidad = velocidad + usedado();
	return velocidad;
}


//setters

void Lancha::setname(string pname) {
	name = pname;
}

void Lancha::setnitro(int pnitro) {
	nitro = pnitro;
}

void Lancha::setdr(int pdr) {
	distanciarecorrida = pdr;
}

void Lancha::setvelo(int pvelo) {
	velocidad = pvelo;
}

//metodos propios

void Lancha::statuslancha() {
	cout << "El jugador " << getname() << "ha recorrido una distancia de " << getdr() << " con una velocidad de " << getvelo() << "\n";
}

int Lancha::usenitro() {
	if (nitro > 0) {
		nitro = 0;
		int a = rand() % 2;
		if (a == 0) {
			velocidad /= 2;
			cout << "La lancha " << name << " ha usado el nitro y ha salido 0 en el dado. La velocidad se dividira por 2" << endl;
			return nitro;
		}
		else {
			velocidad *= 2;
			cout << "La lancha " << name << " ha usado el nitro y ha salido 1 en el dado. Su velocidad se multiplicara por 2" << endl;
		}
	}
	else {
		cout << " La lancha " << name << " no tiene nitro" << endl;

	}
}

int Lancha::usedado() {
	int pointsdado = (rand() % 6 + 1);
	cout << "Ha salido " << pointsdado << " puntos en el dado" << endl;
	return pointsdado;
}

int Lancha::distanciatotal() {
	distanciarecorrida += velocidad * 100;
	cout << name << " ha recorrido " << distanciarecorrida << " kilometros" << endl;
	return distanciarecorrida;
}