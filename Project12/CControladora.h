#pragma once

#include"CCarita.h"

class CControladora {

public:
	CControladora() {
		carita = new CCarita;
	}
	~CControladora() {
		delete carita;
	}
	void cambiarEstado(Keys e) {
		carita->cambiarEstado(e);
	}
	void emoticon(Graphics^ gr) {
		carita->pintarCarita(gr);
	}
	
private:
	CCarita* carita;
};