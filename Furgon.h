#pragma once
#include "Vehiculo.h"
class Furgon:public Vehiculo{
	int ejes;
public:
	Furgon(int ejes);
	~Furgon();
	int getEjes();
	void setEjes(int ejes);
};

