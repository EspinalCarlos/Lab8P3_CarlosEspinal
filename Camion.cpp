#include "Camion.h"

Camion::Camion(string tipo){
	this->tipo = tipo;
	this->velocidad = 90;
	this->capacidad = 30;
	this->consumo = 15;
}

Camion::~Camion() {}

string Camion::getTipo() {
	return tipo;
}
void Camion::setTipo(string tipo) {
	this->tipo = tipo;
}
