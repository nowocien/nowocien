#include "Liczba_zespolona.h"

 
float Liczba_zespolona::IM_get()
{
	return IM;
}
float Liczba_zespolona::RE_get()
{
	return RE;
}

void Liczba_zespolona::IM_set(float im)
{
	IM = im;
}
void Liczba_zespolona::RE_set(float re)
{
	RE = re;
}

Liczba_zespolona::Liczba_zespolona()
{
	std::cout << "konstruktor bezargumentowy zostal wywolany" << std::endl;
}

Liczba_zespolona::Liczba_zespolona(float im)
{
	IM = im;
	std::cout << "konstruktor 1-argumentowy zostal wywolany" << std::endl;
}

Liczba_zespolona::Liczba_zespolona(float re, float im)
{
	RE = re;
	IM = im;
	std::cout << "konstruktor 2-argumentowy zostal wywolany" << std::endl;
}

Liczba_zespolona::~Liczba_zespolona()
{

	std::cout << "dekonstruktor zostal wywolany" << std::endl;
}
