#include "Liczba_zespolona.h"

int Liczba_zespolona::licznik = 0;
 
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
	licznik++;
	std::cout << "konstruktor bezargumentowy zostal wywolany" << std::endl;
}

Liczba_zespolona::Liczba_zespolona(float im)
{
	IM = im;
	RE = 0;
	licznik++;
	std::cout << "konstruktor 1-argumentowy zostal wywolany" << std::endl;
}

Liczba_zespolona::Liczba_zespolona(float re, float im)
{
	RE = re;
	IM = im;
	licznik++;
	std::cout << "konstruktor 2-argumentowy zostal wywolany" << std::endl;
}

Liczba_zespolona::Liczba_zespolona(const Liczba_zespolona & zesp) :RE(zesp.RE), IM(zesp.IM)
{
	licznik++;
	std::cout << "konstruktor kopiuj¹cy zostal wywolany" << std::endl;
}

Liczba_zespolona::~Liczba_zespolona()
{ 
	licznik--;
	std::cout << "dekonstruktor zostal wywolany" << std::endl;
}
