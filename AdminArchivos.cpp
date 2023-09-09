#include "AdminArchivos.h"
#include <iostream>
#include<fstream>
#include <sstream>
#include<string>
using namespace std;

AdminArchivos::AdminArchivos(const string archivoViajes, const string archivoResultados) {
	this->archivoViajes = archivoViajes;
	this->archivoResultados = archivoResultados;
}
void AdminArchivos::leerViajes() {
    string cadena;
 
    string ciudad;
    float distancia;
    float carga;
    ifstream aviajes(archivoViajes);
    while (getline(aviajes, cadena)) {
        stringstream ss(cadena);
        string token;
        while (getline(ss, token, ',')) {
            tokens.push_back(token);
        }
        ciudad = tokens.at(0);
        distancia = stof(tokens.at(1));
        carga = stof(tokens.at(2));
        viajes.push_back(new Viaje(ciudad, distancia, carga));

        tokens.clear();

    }

}
void AdminArchivos::printViajes() {
    for (Viaje* v : viajes) {
        cout << v->getCiudad() << endl;
    }
}

vector<Viaje*> AdminArchivos::getVectorViajes() {
    return viajes;
}
AdminArchivos::~AdminArchivos() {
    for (Viaje* v: viajes) {
        delete v;
    }
    viajes.clear();
}

void AdminArchivos::guardarResultados() {
    ofstream output(archivoResultados);

    if (output.is_open()){
        for (Viaje* v : viajes) {
            if (v->getVehiculo() != NULL) {
                output << v->getCiudad() << ","<< v->getDistancia()<< "," << v->getCarga()<<"," << " Vehiculo: " << v->getVehiculo()->getCapacidad() << "," << v->getVehiculo()->getConsumo() << "," << v->getVehiculo()->getVelocidad() << endl;
            }
        }
        output.close();
    }
}
