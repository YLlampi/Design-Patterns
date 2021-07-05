#include <iostream>
using namespace std;

class Singleton{
	private:
		static Singleton *instance;
		
	protected:
		Singleton(){
			cout << "Creando Singleton" << std::endl;
		}
	
	public:
		static Singleton *getInstance(){
			if (instance == NULL)
				instance = new Singleton();
			else
				cout << "instancia ya existente"<<std::endl;

			return instance;
		}
};

Singleton* Singleton::instance=NULL;

int main(){
	Singleton *s = Singleton::getInstance();

	return 0;
}
