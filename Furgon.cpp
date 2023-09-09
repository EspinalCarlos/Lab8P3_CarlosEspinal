#include "Furgon.h"
#include <string>
#include <vector>
using namespace std;

Furgon::Furgon(int ejes) {
	this->ejes = ejes;
	this->capacidad = 5;
	this->velocidad = 110;
	this->consumo = 8;
}
Furgon::~Furgon(){}
int Furgon::getEjes() {
	return this->ejes;
}
void Furgon::setEjes(int ejes) {
	this->ejes = ejes;
}

