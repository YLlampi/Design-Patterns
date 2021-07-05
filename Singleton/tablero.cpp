#include "tablero.h"
#include <iostream>
#include <array>
using namespace std;

Tablero::Tablero(){
	tablero.fill('\0');
	espaciosVacios = tablero.size();
}

Tablero& Tablero::instancia(){
	static Tablero instancia;
	return instancia;
}

bool Tablero::ponerPieza(char pieza, int posicion){
	if(tablero[posicion] != '\0') return false;
	else{
		tablero[posicion] = pieza;
		espaciosVacios--;
		return true;
	}
}

bool Tablero::juegoTerminado(){
	return (espacios == 0 or (ganador() != '\0');
}

char Tablero::ganador(){
	for(int i = 0; i < tablero.size(); i += 3){
		if((tablero[i] == tablero[i+1]) and (tablero[i+1] == tablero[i+2])){
			return tablero[i];
		}
	}

	for(int i = 0; i < 3; i++){
		if((tablero[i] == tablero[i+3]) and (tablero[i+3] == tablero[i+6])){
			return tablero[i];
		}
	}

	if(tablero[0] == tablero[4] and tablero[4] == tablero[8]) return tablero[0];
	if(tablero[2] == tablero[4] and tablero[4] == tablero[6]) return tablero[2];

	return '\0';
}

void Tablero::dibujar(){
	for(int i = 0; i<tablero.size(); i++){
		cout<<((tablero[i] == '\0') ? ' ' : tablero[i]);
		if((i % 3 == 2)){
			cout<<'\n';
		}
	}
}
