#include <iostream>
using namespace std;

class ProductoA{
	public:
		virtual ~ProductoA(){}
		virtual const string getNombre() = 0;
};

class ProductoConcretoXA : public ProductoA{
	public:
		~ProductoConcretoXA(){}
		const string getNombre(){ return "Producto Concreto X-A";}
};

class ProductoConcretoYA : public ProductoA{
	public:
		~ProductoConcretoYA(){}
		const string getNombre(){ return "Producto Concreto Y-A";}
};

class ProductoB{
	public:
		virtual ~ProductoB(){}
		virtual const string getNombre() = 0;
};

class ProductoConcretoXB : public ProductoB{
	public:
		~ProductoConcretoXB(){}
		const string getNombre(){ return "Producto Concreto X-B";}
};

class ProductoConcretoYB : public ProductoB{
	public:
		~ProductoConcretoYB(){}
		const string getNombre(){ return "Producto Concreto Y-B";}
};

class AbstractFactory{
	public:
		virtual ~AbstractFactory() {}
  
		virtual ProductoA *crearProductoA() = 0;
		virtual ProductoB *crearProductoB() = 0;
};

class FabricaConcretaX : public AbstractFactory{
	public:
		~FabricaConcretaX() {}
  
		ProductoA *crearProductoA(){
			return new ProductoConcretoXA();
		}
		ProductoB *crearProductoB(){
			return new ProductoConcretoXB();
		}
};

class FabricaConcretaY : public AbstractFactory{
	public:
		~FabricaConcretaY() {}
  
		ProductoA *crearProductoA(){
			return new ProductoConcretoYA();
		}
		ProductoB *crearProductoB(){
			return new ProductoConcretoYB();
		}
};

int main(){
	FabricaConcretaX *fabricaX = new FabricaConcretaX();
	FabricaConcretaY *fabricaY = new FabricaConcretaY();
	
	ProductoA *p1 = fabricaX->crearProductoA();
	cout<<"Producto: "<<p1->getNombre()<<'\n';
	
	ProductoA *p2 = fabricaY->crearProductoA();
	cout<<"Producto: "<<p2->getNombre()<<'\n';
	
	delete p1;
	delete p2;
	
	delete fabricaX;
	delete fabricaY;
	
	return 0;
}
