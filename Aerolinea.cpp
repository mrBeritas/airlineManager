#include "Aerolinea.h"
#include "Header.h"

Aerolinea::Aerolinea() {
}

void Aerolinea::addVuelo(Vuelo vuelo) {
	vuelos.push_back(vuelo);
}

void Aerolinea::crearVuelo() {
	int idVuelo;
	string origen;
	string destino;
	string piloto;

	color(3);
	gotoxy(10, 1);
	cout << "#############################" << endl;
	gotoxy(10, 2);
	cout << "## CREACION DE NUEVO VUELO ##" << endl;
	gotoxy(10, 3);
	cout << "#############################" << endl;
	color(15);
	cout << endl;
	cout << endl;
	gotoxy(10, 6);
	cout << "ID Vuelo: ";
	cin >> idVuelo;
	cin.ignore();
	gotoxy(10, 7);
	cout << "Origen: ";
	getline(cin, origen);

	gotoxy(10, 8);
	cout << "Destino: ";

	getline(cin, destino);

	gotoxy(10, 9);
	cout << "Piloto: ";

	getline(cin, piloto);
	Vuelo vuelo(idVuelo, origen, destino, piloto);
	addVuelo(vuelo);
}



void Aerolinea::mostrarVuelos() {
	gotoxy(40, 1);
	cout << "***********************************" << '\n';
	for (int i = 0; i < vuelos.size(); i++) {
		vuelos[i].mostrarVuelo();
	}
}

void Aerolinea::mostrarVuelosOrigen(string origen) {
	for (int i = 0; i < vuelos.size(); i++) {
		if (vuelos[i].getOrigen() == origen) {
			vuelos[i].mostrarVuelo();
		}
	}
}

void Aerolinea::mostrarVuelosDestino(string destino) {
	for (int i = 0; i < vuelos.size(); i++) {
		if (vuelos[i].getDestino() == destino) {
			vuelos[i].mostrarVuelo();
		}
	}
}

void Aerolinea::mostrarVuelosPiloto(string piloto) {
	for (int i = 0; i < vuelos.size(); i++) {
		if (vuelos[i].getPiloto() == piloto) {
			vuelos[i].mostrarVuelo();
		}
	}
}

void Aerolinea::mostrarVuelosId(int id) {
	for (int i = 0; i < vuelos.size(); i++) {
		if (vuelos[i].getIdVuelo() == id) {
			vuelos[i].mostrarVuelo();
		}
	}
}

void Aerolinea::eliminarVuelo(int id) {
	for (int i = 0; i < vuelos.size(); i++) {
		if (vuelos[i].getIdVuelo() == id) {
			vuelos.erase(vuelos.begin() + i);
		}
	}
}

void Aerolinea::modificarVuelo(int id) {
	for (int i = 0; i < vuelos.size(); i++) {
		if (vuelos[i].getIdVuelo() == id) {
			int opt;
			cout << "1. Origen" << endl;
			cout << "2. Destino" << endl;
			cout << "3. Piloto" << endl;
			cout << "Opcion: ";
			cin >> opt;
			string origen, destino, piloto;
			switch (opt) {
			case 1:
				cout << "Origen: ";
				cin >> origen;
				vuelos[i].setOrigen(origen);
				break;
			case 2:
				cout << "Destino: ";
				cin >> destino;
				vuelos[i].setDestino(destino);
				break;
			case 3:
				cout << "Piloto: ";
				cin >> piloto;
				vuelos[i].setPiloto(piloto);
				break;
			default:
				break;
			}
		}
	}
}

Aerolinea::~Aerolinea() {
	cout << "Project ended\n";
}