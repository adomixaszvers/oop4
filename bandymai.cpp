#include "klases/gyvunas.h"
#include "klases/katinas.h"


int main() {
	Gyvunas *p = new Katinas(3, 1999, "Katukas", 4);
	p->skleisk_garsa();
	delete p;
}
