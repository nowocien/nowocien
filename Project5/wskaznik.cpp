
#include "Wskaznik.h" 


Wskaznik::Wskaznik(Wskaznik && wsk) :liczba(std::move(wsk.liczba))
{
}

Wskaznik & Wskaznik::operator=(Wskaznik && wsk)
{
	liczba = std::move(wsk.liczba);
	return *this;
}