#include "Vuelo.h"

Vuelo::Vuelo() {
	idVuelo = 0;
	origen = "";
	destino = "";
	piloto = "";
}

Vuelo::Vuelo(int idVuelo, string origen, string destino, string piloto) {
	this->idVuelo = idVuelo;
	this->origen = origen;
	this->destino = destino;
	this->piloto = piloto;
}

void Vuelo::setIdVuelo(int idVuelo) {
	this->idVuelo = idVuelo;
}

void Vuelo::setOrigen(string origen) {
	this->origen = origen;
}

void Vuelo::setDestino(string destino) {
	this->destino = destino;
}

void Vuelo::setPiloto(string piloto) {
	this->piloto = piloto;
}

int Vuelo::getIdVuelo() {
	return idVuelo;
}

string Vuelo::getOrigen() {
	return origen;
}

string Vuelo::getDestino() {
	return destino;
}

string Vuelo::getPiloto() {
	return piloto;
}

void Vuelo::mostrarVuelo() {
	color(4);
	gotoxy(40, whereY());
	cout << "ID Vuelo: " << idVuelo << endl;
	gotoxy(40, whereY());
	cout << "Origen: " << origen << endl;
	gotoxy(40, whereY());
	cout << "Destino: " << destino << endl;
	gotoxy(40, whereY());
	cout << "Piloto: " << piloto << endl;
	cout << '\n';
}

Vuelo::~Vuelo() {
}