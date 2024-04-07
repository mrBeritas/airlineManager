#pragma once
#include <Windows.h>

inline void gotoxy(int x, int y) {
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}

inline void ocultarCursor() {
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 50;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon, &cci);
}

inline int whereX() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int column;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	column = csbi.dwCursorPosition.X;
	return column;
}

inline int whereY() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int row;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	row = csbi.dwCursorPosition.Y;
	return row;
}
/*
	Funcion que cambia el color de la consola
	@param x: color a cambiar
*/
inline void color(int x) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
