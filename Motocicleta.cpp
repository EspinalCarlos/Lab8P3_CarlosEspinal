#include "Motocicleta.h"
#include <string>
#include <vector>

Motocicleta::Motocicleta(float cilindraje){
	this->cilindraje = cilindraje;
	this->capacidad = 0.5;
	this->velocidad = 60;
	this->consumo = 3;
}
float Motocicleta::getCilindraje() {
	return cilindraje;
}
void Motocicleta::setCilindraje(float cilindraje) {
	this->cilindraje = cilindraje;
}

