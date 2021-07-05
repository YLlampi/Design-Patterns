#ifndef JUGADOR
#define JUGADOR
#include "tablero.h"

class Jugador{
	private:
		Tablero& tablero;
		char pieza;
	public:
		Jugador(Tablero& tablero, char pieza);
		bool ponerPieza(int posicion);
};

#endif
