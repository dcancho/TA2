#pragma once

using namespace System::Windows::Forms;
using namespace System::Drawing;

class CFigura {

protected:
	int x, y;
	int ancho, alto;

public:
	CFigura(int x, int y) {
		this->x = x;
		this->y = y;
		ancho = alto = 0;
	}

	virtual void draw(Graphics^) = 0;
};