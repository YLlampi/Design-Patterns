#include "tablero.h"
#include "jugador.h"
#include <iostream>
using namespace std;

int main(){
	Jugador circulo = Jugador(Tablero::instancia(), 'O');
	Jugador cruz = Jugador(Tablero::instancia(), 'X');

	Tablero& tablero = Tablero::instancia();
	Jugador *jugadorActual = &circulo;

	while(!tablero.juegoTerminado()){
		int posicion;
		cout<<"Indica la posicion del siguiente turno: ";
		cin>>posicion;

		while(!jugadorActual->ponerPieza(posicion)){
			cout<<"Espacio ocupado, indicar otra posicion: ";
			cin>>posicion;
		}
		cout<<'\n';
		jugadorActual = (jugadorActual == &circulo) ? &cruz : &circulo;

		tablero.dibujar();
		cout<<'\n';
	}

	char ganador = tablero.ganador();
	if(ganador == '\0') cout<<"Empate"<<'\n';
	else{
		cout<<"Gana el jugador con la pieza: "<<ganador<<'\n';
	}

	return 0;
}
