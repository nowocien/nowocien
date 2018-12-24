#pragma once
#include "Silnik.h"
class Samolot
{
public:
	Samolot(); 
	Samolot(int paliwo, int dystans, int x, int y, int z, int wysokosc, Silnik pslinik);
	~Samolot();
	 
	Samolot Kopiuj_z_korekta(const Samolot s1, const int korekta);

	static void Wypisz(const Samolot&);
	 
	int paliwo, dystans, x, y, z, wysokosc;
	char* Sygnatura; 
//	const int masa; 
	Silnik pslinik;
}; 