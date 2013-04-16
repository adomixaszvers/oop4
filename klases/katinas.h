#ifndef KATINAS_H
#include "gyvunas.h"

#define KATINAS_H

class Katinas: public Gyvunas {
public:
	Katinas(int svoris, int gimimo_metai, std::string vardas, int koju_skaicius);
	~Katinas();
	void skleisk_garsa();
};

#endif
