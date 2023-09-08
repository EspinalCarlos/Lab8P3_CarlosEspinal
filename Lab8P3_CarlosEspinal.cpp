#include <iostream>
#include <vector>
#include <string>

using namespace std;

void mainmenu() {
    cout << "---- Menu Principal ----\n" << "1. Agregar Vehiculo\n" << "2. Listar Vehiculos\n" << "3. Leer archivos\n"<<"4. Asignar Viajes\n" << "5. Guardar informacion de viajes\n" << "6. SALIDA\n" << "Ingrese la opcion que desea utilizar: ";
}
void menuvehiculo() {
    cout << "---- Vehiculos ----\n" << "1. Camion\n"<<"2. Furgon\n" << "3. Motocicleta\n" << "Ingrese la opcion que desea usar: ";
}

int main(){
    int opcion;
    do {
        mainmenu();
        cin >> opcion;
        cout << endl;


        int opcionV;
        float cap, vel, con;
        string type;
        switch (opcion) {
            case 1:
                menuvehiculo();
                cin >> opcionV;
                switch (opcionV) {
                    case 1:
                        cout << "Ingrese la capacidad: ";
                        cin >> cap;
                        cout << endl;
                        cout << "Ingrese la velocidad: ";
                        cin >> vel;
                        cout << endl;
                        cout << "Ingrese el consumo: ";
                        cin >> con;
                        cout << endl;
                        cout << "Ingrese el tipo: ";
                        cin.ignore();
                        getline(cin, type);

                        break;
                    case 2:
                        cout << "Ingrese la capacidad: ";
                        cin >> cap;
                        cout << endl;
                        cout << "Ingrese la velocidad: ";
                        cin >> vel;
                        cout << endl;
                        cout << "Ingrese el consumo: ";
                        cin >> con;
                        cout << endl;
                        break;
                    case 3:
                        cout << "Ingrese la capacidad: ";
                        cin >> cap;
                        cout << endl;
                        cout << "Ingrese la velocidad: ";
                        cin >> vel;
                        cout << endl;
                        cout << "Ingrese el consumo: ";
                        cin >> con;
                        cout << endl;
                        break;
                }
                break;

        }
    } while(opcion != 6);
}