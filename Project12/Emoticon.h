#pragma once
#include"Boca.h"
#include"Figure.h"
#include"Nariz.h"
#include"Ojos.h"

class Emoticon {
private:
	Ojos ojo1;
	Ojos ojo2;
	Nariz nariz;

public:
	Emoticon(){
		ojo1 = new Ojos(30, 10, 0, 0, 0);
		ojo2 = new Ojos(50, 10, 0, 0, 0);
		nariz = new Nariz(40,25,0,0,0);
	}
	~Emoticon(){}

	void CaraTriste{



	}
	void CaraAsombrada{

	}
	void CaraSeria{


	}

};
