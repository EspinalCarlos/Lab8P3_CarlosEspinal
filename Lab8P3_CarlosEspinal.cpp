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
    }
}

int main(){
    int opcion;
    vector<Camion*> camiones;
    vector<Furgon*> furgones;
    vector<Motocicleta*>motos;
    do {
        mainmenu();
        cin >> opcion;
        cout << endl;


        int opcionV,ejes;
        float cap, vel, con,tilin;
        string path1 = "viajes.txt";
        string path2 = "resultados.txt";
        AdminArchivos aa(path1,path2);
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
                       
                        cout << "Ingrese el cilindraje";
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
                aa.printViajes();
                cout << "\n\n\n";
                break;

        }
    } while(opcion != 6);
}