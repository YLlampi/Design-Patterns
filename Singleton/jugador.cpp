#include "tablero.h"
#include "jugador.h"

Jugador::Jugador(Tablero& tablero, char pieza) : tablero(tablero), pieza(pieza){
	
}

bool Jugador::ponerPieza(int posicion){
	return tablero.ponerPieza(pieza, posicion);
}
