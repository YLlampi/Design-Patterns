#ifndef _io_
#define _io_

#include <iostream>
using namespace std;

#endif

#include "FabricaJuguetes.h"

int main(){
	int tipo;
	while(true){
		cout<<"Ingrese una opcion:"<<'\n';
		cout<<"1) Carro"<<'\n';
		cout<<"2) Bicicleta"<<'\n';
		cout<<"3) Avion"<<'\n';
		cout<<"0) Salir"<<'\n';
		cin>>tipo;
		if(not tipo) break;
		Juguete *myJuguete = FabricaJuguetes::crearJuguete(tipo);
		if(myJuguete){
			myJuguete->verProducto();
			delete myJuguete;
		}
	}
	cout<<"Finalizando..."<<'\n';
	
	return 0;
}
