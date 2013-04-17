#include "katinas.h"

Katinas::Katinas(int svoris, int gimimo_metai, std::string vardas, int koju_skaicius=4): Gyvunas(svoris, gimimo_metai, vardas, koju_skaicius) {
	std::cout << "Miau, aš esu katinas. Mane ką tik sukūrė." << std::endl;
}

Katinas::~Katinas() {
	//std::cout << "Kviečiamas Katinas destruktorius." << std::endl;
}

void Katinas::skleisk_garsa() {
	std::cout << "Miau! Aš vardu " << vardas << ".\n";
}
