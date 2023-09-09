#pragma once
#include "Viaje.h"
#include <string>
#include <vector>
using namespace std;

class AdminArchivos{
	string archivoViajes;
	string archivoResultados;
	vector<Viaje*> viajes;
	vector<string> tokens;

public:
	AdminArchivos(const string AViajes, const string AResultados);
	~AdminArchivos();
	void leerViajes();
	void guardarResultados();
	void printViajes();
	vector<Viaje*> getVectorViajes();
};

