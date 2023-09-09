#include "Viaje.h"
#include<string>
#include<vector>
#include<iostream>
using namespace std;

Viaje::Viaje(string ciudad, float distanica, float carga) {
	this->ciudad = ciudad; 
	this->distancia = distanica; 
	this->carga = carga;
}
Viaje::~Viaje(){
	delete vehiculo;
}

void Viaje::setCarga(float carga) {
	this->carga = carga;
}
void Viaje::setCiudad(string ciudad) {
	this->ciudad = ciudad;
}
void Viaje::setDistancia(float distancia) {
	this->distancia = distancia;
}
float Viaje::getDistancia() {
	return distancia;
}
float Viaje::getCarga() {
	return carga;
}
string Viaje::getCiudad() {
	return ciudad;
}
Vehiculo* Viaje::getVehiculo() {
	return vehiculo;
}
void Viaje::setVehiculo(Vehiculo* vehiculo) {
	this->vehiculo = vehiculo;
}
