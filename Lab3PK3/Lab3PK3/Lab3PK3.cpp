// Lab3PK3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Samolot.h"


int main()
{

	int paliwo, dystans, x, y, z, wysokosc;
	paliwo = 12345;
	dystans = 12;
	x = 8;
	y = 5;
	z = 9;
	wysokosc = 12000;
	Silnik silnik;


	Samolot s1 = Samolot(paliwo, dystans, x, y, z, wysokosc, Silnik());

	Samolot s2 = Samolot();
	s2.dystans = dystans;
	s2.paliwo = paliwo;
	s2.x = x;
	s2.y = y;
	s2.z = z;
	s2.wysokosc = wysokosc;

	Samolot::Wypisz(s1);
	Samolot::Wypisz(s2);

	Samolot s3;
	Samolot s4;

    //s4 = s1;
	//s1 = s3;

	    return 0;
}

