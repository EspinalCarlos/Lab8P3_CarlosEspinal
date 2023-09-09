#pragma once
#include "Vehiculo.h"
#include <string>
#include <vector>
using namespace std;
class Camion:public Vehiculo{
	string tipo;
public:
	Camion(string tipo);
	~Camion();
	string getTipo();
	void setTipo(string tipo);
};

