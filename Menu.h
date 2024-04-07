#pragma once
#include <iostream>
#include "Aerolinea.h"
#include "Header.h"

using namespace std;
Aerolinea aerolinea;
void printMenu(int& opt) {
	do {
		color(11);
		gotoxy(40, 2);
		cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
		gotoxy(40, 3);
		cout << "X                                                    X\n";
		gotoxy(40, 4);
		cout << "X          SISTEMA DE VUELOS - FISIAIRLINES          X\n";
		gotoxy(40, 5);
		cout << "X                                                    X\n";
		gotoxy(40, 6);
		cout << "X R.U.C: 20544547756                                 X\n";
		gotoxy(40, 7);
		cout << "X Direccion: Avenida Rivera Navarreta 475            X\n";
		gotoxy(40, 8);
		cout << "X                                                    X\n";
		gotoxy(40, 9);
		cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
		color(14);

		gotoxy(56, 15);
		cout << "##################\n";
		gotoxy(58, 16);
		cout << "MENU PRINCIPAL\n";
		gotoxy(56, 17);
		cout << "##################\n";

		gotoxy(44, 19);
		cout << "[1] Agregar vuelo" << endl;
		gotoxy(44, 20);
		cout << "[2] Mostrar vuelos programados" << endl;
		gotoxy(44, 21);
		cout << "[3] Buscar informacion de vuelo" << endl;
		gotoxy(44, 22);
		cout << "[4] Buscar informacion de pasajero" << endl;
		gotoxy(44, 23);
		cout << "[5] Salir" << endl;
		gotoxy(44, 24);
		cout << "Opcion: ";
		cin >> opt;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "Opcion invalida, intente de nuevo" << endl;
			system("pause");
			system("cls");
			continue;
		}
		if (opt < 1 || opt > 5) {
			cout << "Opcion invalida, intente de nuevo" << endl;
			system("pause");
			system("cls");
			continue;
		}

		switch (opt) {
		case 1:
			system("cls");
			aerolinea.crearVuelo();
			system("pause");
			system("cls");
			printMenu(opt);
			break;
		case 2:
			system("cls");
			aerolinea.mostrarVuelos();
			system("pause");
			system("cls");
			printMenu(opt);
			break;
		}
	} while (opt != 5);
}
