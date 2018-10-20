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
}

Liczba_zespolona::~Liczba_zespolona()
{
}
