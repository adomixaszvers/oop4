#include "gyvunas.h"

Gyvunas::Gyvunas(int svoris, int gimimo_metai, std::string vardas, int koju_skaicius) {
	this->svoris = svoris;
	this->gimimo_metai = gimimo_metai;
	this->vardas =  vardas;
	this->koju_skaicius = koju_skaicius;
}

Gyvunas::~Gyvunas() {
	//std::cout << "Kviečiamas Gyvunas destruktorius." << std::endl;
}
