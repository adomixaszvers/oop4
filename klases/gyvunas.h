#ifndef GYVUNAS_H

#include <string>
#include <iostream>

#define GYVUNAS_H

class Gyvunas {
protected:
	int svoris, gimimo_metai;
	std::string vardas;
	int koju_skaicius;
public:
	Gyvunas(int svoris, int gimimo_metai, std::string vardas, int koju_skaicius);
	virtual ~Gyvunas();
	virtual void skleisk_garsa() = 0;
};

#endif
