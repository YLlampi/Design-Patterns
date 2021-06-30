#ifndef _io_
#define _io_

#include <iostream>
using namespace std;

#endif

#include "Objeto.h"

class FabricaJuguetes{
	public:
		static Juguete *crearJuguete(int tipo){
			Juguete *juguete = nullptr;
			switch(tipo){
				case 1:
					juguete = new Carro("Carro Uno", 20);
					break;
				case 2:
					juguete = new Bicicleta("Bicicleta uno", 50);
					break;
				case 3:
					juguete = new Avion("Avion uno", 100);
					break;
				default:
					return nullptr;
			}
			
			juguete->prepararPartes();
			juguete->combinarPartes();
			juguete->ensamblarPartes();
			
			return juguete;
		}
};
