#include "suo.h"

Suo::Suo(int svoris, int gimimo_metai, std::string vardas, int koju_skaicius=4): Gyvunas(svoris, gimimo_metai, vardas, koju_skaicius) {
	std::cout << "Au au au!!!" << std::endl;
}

Suo::~Suo() {
	std::cout << "As ismokau kalbeti pries pat savo sunaikinimą..." << std::endl;
}

void Suo::skleisk_garsa() {
	std::cout << "Au!" << std::endl;
}
