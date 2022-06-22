#pragma once

#include"CFigura.h"

class CNariz : public CFigura {

public:
	CNariz(int x, int y, int ancho, int alto) : CFigura(x, y) {
		this->ancho = ancho;
		this->alto = alto;
	}

	void draw(Graphics^ gr) {
		gr->DrawLine(gcnew Pen(Color::Green, 3), x+(ancho/2), y, x + ancho, y + alto);
		gr->DrawLine(gcnew Pen(Color::Green, 3), x + ancho, y + alto,  x, y + alto);
		gr->DrawLine(gcnew Pen(Color::Green, 3), x + (ancho / 2), y, x, y+alto);
	}
};