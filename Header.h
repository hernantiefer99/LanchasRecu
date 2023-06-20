#pragma once
#include <iostream>
using namespace std;


class Lancha {

private:
	int velocidad;
	int distanciarecorrida;
	int nitro;
	string name;


public:
	//constructor

	void lancha(std::string pname, int pvelo, int pdr, int pnitro);

	Lancha(std::string pname, int pvelo, int pdr, int pnitro);

	//getters

	int getvelo();

	int getdr();

	int getnitro();

	string getname();

	//setters

	void setvelo(int pvelo);

	void setdr(int pdr);

	void setnitro(int pnitro);

	void setname(std::string pname);


	//metodos propios
	void statuslancha();
	int usenitro();
	int usedado();
	int distanciatotal();
};
