#pragma once
#include <string>
#include <vector>
using namespace std;
class Vehiculo{
protected:
	float capacidad;
	float velocidad;
	float consumo;
public:
	Vehiculo();
	Vehiculo(float capacidad, float velocidad, float consumo);
	~Vehiculo();

	//getters
	float getCapacidad();
	float getVelocidad();
	float getConsumo();

	//setters
	void setCapacidad(float capacidad);
	void setVelocidad(float velocidad);
	void setConsumo(float consumo);
	
};

