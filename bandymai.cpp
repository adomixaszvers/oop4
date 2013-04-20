#include "klases/katinas.h"
#include "klases/suo.h"


int main() {
	Gyvunas *p;
	Katinas katinas (3, 1999, "Katukas", 4);
	Suo suo (8, 2005, "Amsius", 4);
	p = &katinas;
	p->skleisk_garsa();
	p = &suo;
	p->skleisk_garsa();

	return 0;
}
