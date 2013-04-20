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

int Gyvunas::get_svoris() {
	return svoris;
}

int Gyvunas::get_gimimo_metai() {
	return gimimo_metai;
}

std::string Gyvunas::get_vardas() {
	return vardas;
}

int Gyvunas::get_koju_skaicius() {
	return koju_skaicius;
}

void Gyvunas::set_svoris(int svoris) {
	this->svoris = svoris;
}

void Gyvunas::set_gimimo_metai(int gimimo_metai) {
	this->gimimo_metai =  gimimo_metai;
}

void Gyvunas::set_vardas(std::string vardas) {
	this->vardas =  vardas;
}

void Gyvunas::set_koju_skaicius(int koju_skaicius) {
	this->koju_skaicius = koju_skaicius;
}
