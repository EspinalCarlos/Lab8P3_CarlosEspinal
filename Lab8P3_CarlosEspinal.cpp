#include <iostream>
#include <vector>
#include"Vehiculo.h"
#include "Motocicleta.h"
#include "Camion.h"
#include "Furgon.h"
#include "Viaje.h"
#include "AdminArchivos.h"
#include <string>

using namespace std;

void mainmenu() {
    cout << "---- Menu Principal ----\n" << "1. Agregar Vehiculo\n" << "2. Listar Vehiculos\n" << "3. Leer archivos\n"<<"4. Asignar Viajes\n" << "5. Guardar informacion de viajes\n" << "6. SALIDA\n" << "Ingrese la opcion que desea utilizar: ";
}
void menuvehiculo() {
    cout << "---- Vehiculos ----\n" << "1. Camion\n"<<"2. Furgon\n" << "3. Motocicleta\n" << "Ingrese la opcion que desea usar: ";
}
template<typename T>
void imprimirLista(vector<T> vec) {
    int posc = 0;
    for (T t : vec) {
        cout << posc << ". " << t->getCapacidad() << endl;
        posc++;
    }
}

int main(){
    int opcion;
    vector<Camion*> camiones;
    vector<Furgon*> furgones;
    vector<Motocicleta*>motos;
    string path1 = "viajes.txt";
    string path2 = "resultados.txt"; 
    AdminArchivos aa(path1, path2); 

    do {
        mainmenu();
        cin >> opcion;
        cout << endl;


        int opcionV,ejes, contador = 0,viajeop,opasign,opasign2;
        float cap, vel, con,tilin;

        string type;
        switch (opcion) {
            case 1:
                menuvehiculo();
                cin >> opcionV;
                switch (opcionV) {
                    case 1:
                        cout << "Ingrese el tipo: ";
                        cin.ignore();
                        getline(cin, type);
                        cout << endl;
                        camiones.push_back(new Camion(type));

                        break;
                    case 2:
                   
                        cout << "Ingrese el eje: ";
                        cin >> ejes;
                        cout << endl;
                        furgones.push_back(new Furgon(ejes));
                        break;
                    case 3:
                       
                        cout << "Ingrese el cilindraje: ";
                        cin >> tilin;
                        cout << endl;
                        motos.push_back(new Motocicleta(tilin));
                        break;
                }
                break;
            case 2:
                cout << "---- Vehiculos ----\n";
                imprimirLista<Camion*>(camiones);
                cout << endl;
                imprimirLista<Furgon*>(furgones);
                cout << endl;
                imprimirLista<Motocicleta*>(motos);
                cout << endl;

                break;
            case 3:
                aa.leerViajes();
                cout << "\n\n---- Lectura de archivo completada ----\n\n";
                break;
            case 4:
                cout << "\n---- Viajes Disponibles ----\n";
                for (Viaje* v : aa.getVectorViajes()) {
                    cout << contador <<". " << v->getCiudad() << endl;
                    contador++;
                }
                cout << endl;
                cout << "Ingrese el numero del viaje que quiere realizar: ";
                cin >> viajeop;

                cout << "Vehiculos que pueden realizar el viaje a " << aa.getVectorViajes()[viajeop]->getCiudad() << ", " << aa.getVectorViajes()[viajeop]->getDistancia() << "km, " << aa.getVectorViajes()[viajeop]->getCarga() << " toneladas: \n";
                if (aa.getVectorViajes()[viajeop]->getCarga() <= 0.5) {
                    cout << "1. Motos\n"; 
                }
                else if (aa.getVectorViajes()[viajeop]->getCarga() <= 5) {
                    cout << "2. Furgones\n";
                }
                else if (aa.getVectorViajes()[viajeop]->getCarga() <= 30) {
                    cout << "3. Motocicleta\n\n";
                }
                cout << "Eliga el tipo: ";
                cin >> opasign;
                switch (opasign) {
                    case 1:
                        cout << endl;
                        imprimirLista<Motocicleta*>(motos);
                        cin >> opasign2;
                        aa.getVectorViajes()[viajeop]->setVehiculo(motos[opasign2]);
                        break;
                    case 2:
                        cout << endl;
                        imprimirLista<Furgon*>(furgones);
                        cin >> opasign2;
                        aa.getVectorViajes()[viajeop]->setVehiculo(furgones[opasign2]);
                        break;
                    case 3:
                        cout << endl;
                        imprimirLista<Camion*>(camiones);
                        cin >> opasign2;
                        aa.getVectorViajes()[viajeop]->setVehiculo(camiones[opasign2]);
                        break; 

                    
                }

                break;
            case 5:
                aa.guardarResultados();
                cout << "\n---- Cambios escritos ----\n";
                break;

        }
    } while(opcion != 6);
}