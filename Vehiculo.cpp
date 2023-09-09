#include "Vehiculo.h"
#include <string>
#include <vector>

Vehiculo::Vehiculo() {
	
}

Vehiculo::~Vehiculo(){}

float Vehiculo::getCapacidad() {
	return capacidad;
}
float Vehiculo::getConsumo() {
	return consumo;
}
float Vehiculo::getVelocidad() {
	return velocidad;
}
void Vehiculo::setCapacidad(float capacidad) {
	this->capacidad = capacidad;
}
void Vehiculo::setConsumo(float consumo) {
	this->consumo = consumo;
}
void Vehiculo::setVelocidad(float velocidad) {
	this->velocidad = velocidad;
}
