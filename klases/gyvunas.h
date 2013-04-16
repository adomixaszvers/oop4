#ifndef GYVUNAS_H

#include <string>
#include <iostream>

#define GYVUNAS_H

class Gyvunas {
private:
	int svoris, gimimo_metai;
	string vardas;
	int koju_skaicius;
public:
	Gyvunas(int svoris, int gimimo_metai, string vardas, int koju_skaicius);
	~Gyvunas();
};

#endif
