#pragma once


#include <iostream>

class Liczba_zespolona
{
public:
	Liczba_zespolona();
	Liczba_zespolona(float im); 
	Liczba_zespolona(float re, float im);
	~Liczba_zespolona();

	void IM_set(float im);
	float IM_get();
	void RE_set(float re);
	float RE_get();

private:

	float RE;
	float IM;


};