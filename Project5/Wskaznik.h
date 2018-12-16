#pragma once
 

#include "liczba_zespolona.h"
#include <utility>

class Wskaznik
{
private:
	Liczba_zespolona * liczba;
public:
	Wskaznik(Wskaznik && wsk);
	Wskaznik& operator=(Wskaznik && wsk);
};