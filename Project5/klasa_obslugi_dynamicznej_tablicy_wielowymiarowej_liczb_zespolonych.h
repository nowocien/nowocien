#pragma once
#include "Liczba_zespolona.h"
class ob_lz
{
private:
	int x;
	int y; 
	Liczba_zespolona **tab;

public:

	ob_lz(); //k. bezargumentowy
	ob_lz(int x, int y);//k.2-argumentowy
	~ob_lz();//dek.

	ob_lz(ob_lz&& tab); //k. przenosz¹cy

	ob_lz& operator=(ob_lz && tab); //op. przeniesienia 
};

