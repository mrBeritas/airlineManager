#pragma once
#include "Vuelo.h"

class Aerolinea
{
private:
	vector<Vuelo> vuelos;
public:
	Aerolinea();
	void crearVuelo();
	void addVuelo(Vuelo);
	void mostrarVuelos();
	void mostrarVuelosOrigen(string);
	void mostrarVuelosDestino(string);
	void mostrarVuelosPiloto(string);
	void mostrarVuelosId(int);
	void eliminarVuelo(int);
	void modificarVuelo(int);
	~Aerolinea();
};