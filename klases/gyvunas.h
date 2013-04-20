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

	int get_svoris();
	int get_gimimo_metai();
	std::string get_vardas();
	int get_koju_skaicius();

	void set_svoris(int svoris);
	void set_gimimo_metai(int gimimo_metai);
	void set_vardas(std::string vardas);
	void set_koju_skaicius(int koju_skaicius);
};

#endif
