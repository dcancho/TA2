#pragma once

#include"CFigura.h"

class COjo : public CFigura {

public:
	COjo(int x, int y, int ancho, int alto) : CFigura(x, y) {
		this->ancho = ancho;
		this->alto = alto;
	}

	void draw(Graphics^ gr) {
		gr->DrawRectangle(gcnew Pen(Color::Red, 3), ojo());
	}

	Rectangle ojo() {
		return Rectangle(x, y, ancho, alto);
	}
};