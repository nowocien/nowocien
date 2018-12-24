#include "stdafx.h"
#include "Samolot.h"
#include <iostream>


Samolot::Samolot()
{
}

Samolot::Samolot(int paliwo, int dystans, int x, int y, int z, int wysokosc, Silnik pslinik)
{
	this->paliwo = paliwo;
	this->dystans = dystans;
	this->x = x;
	this->y = y;
	this->z = x;
	this->wysokosc = wysokosc;
	this->pslinik = pslinik;
}


Samolot::~Samolot()
{
}


void Samolot::Wypisz(const Samolot&s1)
{
	std::cout << "Koordynaty samolotu to:" << std::endl;
		 
	std::cout << "X:" << s1.x << std::endl;
	std::cout << "Y:" << s1.y << std::endl;
	std::cout << "Z:" << s1.z << std::endl;
}

Samolot Samolot::Kopiuj_z_korekta(const Samolot s1, const int korekta)
{
	Samolot kopia(s1);
	kopia.wysokosc = kopia.wysokosc - korekta;
	return kopia;
}