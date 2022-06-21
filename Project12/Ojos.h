#pragma once
#include "Figure.h"

class Ojos : public Figure {
public:
	Ojos(int x, int y, int r, int g, int b) : Figure(x, y, r, g, b) {
		width = height;
	}
	~Ojos() {}

	//Erase - Move - Draw
	void draw(Graphics^ g) {
		Pen^ p = gcnew Pen(Color::FromArgb(r, this->g, b), 4);
		g->DrawRectangle(p, x, y, width, height);
	}
};