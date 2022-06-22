#pragma once

#include"CFigura.h"

class CBoca : public CFigura {

public:
	CBoca(int x, int y, int ancho, int alto) : CFigura(x, y) {
		this->ancho = ancho;
		this->alto = alto;

		tipo = 1;
	}

	void draw(Graphics^ gr) {
		if (tipo == 1) {
			gr->DrawEllipse(gcnew Pen(Color::Yellow, 3), x, y, ancho, alto / 2);
		}
		else {
			if (tipo == 2) {
				gr->DrawLine(gcnew Pen(Color::Yellow, 3), x, y, 200, y);
			}
			else {
				if (tipo == 3) {
					gr->DrawArc(gcnew Pen(Color::Yellow, 3), x, y, ancho, alto, 230,80);
				}
			}
		}
	}
	void setTipo(int v) {
		tipo = v;
	}

private:
	int tipo;
};