#pragma once
#include "Vehiculo.h"	
#include <string>
#include <vector>
using namespace std;
class Viaje{
	string ciudad;
	float distancia;
	float carga;
	Vehiculo* vehiculo;
	float tiempoEstimado;
	float costoEstimado;
	
public:
	Viaje(string ciudad, float distancia,float carga);
	~Viaje();
	void AsignarVehiculo();
	void calcularTiempoCosto();
	
	
	//getters y setters
	void setCarga(float carga);
	float getCarga();
	void setCiudad(string ciudad);
	string getCiudad();
	void setDistancia(float distancia);
	float getDistancia();
	void setVehiculo(Vehiculo* vehiculo);
	Vehiculo* getVehiculo();

};

