#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Header.h"

using namespace std;
class Vuelo
{
private:
	int idVuelo;
	string origen;
	string destino;
	string piloto;
public:
	Vuelo();
	Vuelo(int, string, string, string);
	void setIdVuelo(int);
	void setOrigen(string);
	void setDestino(string);
	void setPiloto(string);
	int getIdVuelo();
	string getOrigen();
	string getDestino();
	string getPiloto();
	void mostrarVuelo();
	~Vuelo();
};