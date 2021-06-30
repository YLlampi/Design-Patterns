#ifndef _io_
#define _io_

#include <iostream>
using namespace std;

#endif

class Juguete{
	protected:
		string nombre;
		float precio;
	public:
		Juguete(string nombre, float precio){
			this->nombre = nombre;
			this->precio = precio;
		}
		//virtual ~Juguete();
		
		virtual void prepararPartes() = 0;
		virtual void combinarPartes() = 0;
		virtual void ensamblarPartes() = 0;
		virtual void verProducto() = 0;
};

class Carro : public Juguete{
	private:
		
	public:
		Carro(string nombre, float precio) : Juguete(nombre, precio){}
		//~Carro();
		void prepararPartes() {cout<<"Preparando partes del Carro"<<'\n';}
		void combinarPartes() {cout<<"Combinando partes del Carro"<<'\n';}
		void ensamblarPartes() {cout<<"Ensamblando partes del Carro"<<'\n';}
		void verProducto() {cout<<"Nombre: "<<nombre<<'\n'<<"Precio: "<<precio<<"\n\n";}
};

class Bicicleta : public Juguete{
	private:
		
	public:
		Bicicleta(string nombre, float precio) : Juguete(nombre, precio){}
		//~Bicicleta();
		void prepararPartes() {cout<<"Preparando partes de la Bicicleta"<<'\n';}
		void combinarPartes() {cout<<"Combinando partes de la Bicicleta"<<'\n';}
		void ensamblarPartes() {cout<<"Ensamblando partes de la Bicicleta"<<'\n';}
		void verProducto() {cout<<"Nombre: "<<nombre<<'\n'<<"Precio: "<<precio<<"\n\n";}
};

class Avion : public Juguete{
	private:
		
	public:
		Avion(string nombre, float precio) : Juguete(nombre, precio){}
		//~Avion();
		void prepararPartes() {cout<<"Preparando partes del Avion"<<'\n';}
		void combinarPartes() {cout<<"Combinando partes del Avion"<<'\n';}
		void ensamblarPartes() {cout<<"Ensamblando partes del Avion"<<'\n';}
		void verProducto() {cout<<"Nombre: "<<nombre<<'\n'<<"Precio: "<<precio<<"\n\n";}
};
