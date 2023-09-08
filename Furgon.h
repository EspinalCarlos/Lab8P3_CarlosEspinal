#pragma once
#include "Vehiculo.h"
class Furgon:public Vehiculo{
	int ejes;
public:
	Furgon(float capacidad, float velocidad, float consumo, int ejes);
	~Furgon();
};

