#pragma once
#include "Liczba_zespolona.h"
class kdodtw_lz
{
private:
	int x;
	int y; 
	Liczba_zespolona **tab;

public:

	kdodtw_lz(); //k. bezargumentowy
	kdodtw_lz(int x, int y);//k.2-argumentowy
	~kdodtw_lz();//dek.

	kdodtw_lz(kdodtw_lz&& tab); //k. przenosz¹cy

	kdodtw_lz& operator=(kdodtw_lz && tab); //op. przeniesienia 
};

