#include "katinas.h"
Katinas::Katinas(int svoris, int gimimo_metai, std::string vardas, int koju_skaicius): Gyvunas(svoris, gimimo_metai, vardas, koju_skaicius) {
	std::cout << "Miau, aš esu katinas. Mane ką tik sukūrė." << std::endl;
}
