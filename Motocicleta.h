#pragma once
#include "Vehiculo.h"
#include <vector>
#include <string>
class Motocicleta:public Vehiculo{
	float cilindraje;
public:
	Motocicleta(float cilindraje);
	~Motocicleta();
	float getCilindraje();
	void setCilindraje(float cilindraje);
};

