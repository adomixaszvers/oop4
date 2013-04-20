#ifndef SUO_H
#include "gyvunas.h"

#define SUO_H

class Suo: public Gyvunas {
public:
	Suo(int svoris, int gimimo_metai, std::string vardas, int koju_skaicius);
	~Suo();
	void skleisk_garsa();
};

#endif
