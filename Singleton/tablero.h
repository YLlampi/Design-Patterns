#ifndef TABLERO
#define TABLERO
#include <array>

class Tablero{
	private:
		std::array<char,9> tablero;
		int espaciosVacios;

		Tablero();
	public:
		static Tablero &instancia();
		Tablero(const Tablero&) = delete;
		Tablero &operator =(const Tablero&) = delete;

		bool ponerPieza(char pieza, int posicion);
		bool juegoTerminado();
		char ganador();
		void dibujar();
};

#endif
