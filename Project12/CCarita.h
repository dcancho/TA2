#pragma once

#include"COjo.h"
#include"CNariz.h"
#include"CBoca.h"

class CCarita {

public:
	CCarita() {
		ojoSize = 2;
		ojo[0] = new COjo(60, 40, 60, 20);
		ojo[1] = new COjo(140, 40, 60, 20);

		nariz = new CNariz(130, 80, 40, 40);

		boca = new CBoca(60, 140, 120, 120);
	}
	~CCarita() {
		for (int i = 0; i < ojoSize; ++i) {
			delete ojo[i];
		}
		delete nariz;
		delete boca;
	}
	void cambiarEstado(Keys e) {
		if (e == Keys::A) {
			boca->setTipo(1);
		}
		else {
			if (e == Keys::D) {
				boca->setTipo(2);
			}
			else {
				if (e == Keys::S) {
					boca->setTipo(3);
				}
			}
		}
	}
	void pintarCarita(Graphics^ gr) {
		for (int i = 0; i < ojoSize; ++i) {
			ojo[i]->draw(gr);
		}
		nariz->draw(gr);
		boca->draw(gr);
	}

private:
	COjo* ojo[2];
	int ojoSize;

	CNariz* nariz;

	CBoca* boca;
};