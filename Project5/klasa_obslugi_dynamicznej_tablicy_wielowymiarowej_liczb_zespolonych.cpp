#include "klasa_obslugi_dynamicznej_tablicy_wielowymiarowej_liczb_zespolonych.h"


kdodtw_lz::kdodtw_lz(int x, int y)
	:x(x), y(y)
{ 
	this->tab = new Liczba_zespolona*[y];

	for (int i = 0; i < y; i++)
	{
		this->tab[i] = new Liczba_zespolona[x];
	}
}

kdodtw_lz::kdodtw_lz()
	:x(0), y(0)
{ 
}


kdodtw_lz::~kdodtw_lz()
{
	for (int i = 0; i < y; i++)
	{
		delete this->tab[i];
	}
	delete tab; 
}

kdodtw_lz::kdodtw_lz(kdodtw_lz && t) :x(std::move(t.x)), y(std::move(t.y)), tab(std::move(t.tab))
{
}kdodtw_lz & kdodtw_lz::operator=(kdodtw_lz && t)
{
	x = std::move(t.x);
	y = std::move(t.y);
	tab = std::move(t.tab);
	return *this;
}
