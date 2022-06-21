#pragma once

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

	void CaraTriste()
	{
		Figure* boca = new Boca(100,20,)
		setBoca()
	}
	void CaraAsombrada() {

	}
	void CaraSeria() {


	}

	void Draw(Graphics^ g)
	{

	}
};
