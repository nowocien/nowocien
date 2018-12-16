#include "klasa_obslugi_dynamicznej_tablicy_wielowymiarowej_liczb_zespolonych.h"


ob_lz::ob_lz(int x, int y)
	:x(x), y(y)
{ 
	this->tab = new Liczba_zespolona*[y];

	for (int i = 0; i < y; i++)
	{
		this->tab[i] = new Liczba_zespolona[x];
	}
}

ob_lz::ob_lz()
	:x(0), y(0)
{ 
}


ob_lz::~ob_lz()
{
	for (int i = 0; i < y; i++)
	{
		delete this->tab[i];
	}
	delete tab; 
}

ob_lz::ob_lz(ob_lz && t) :x(std::move(t.x)), y(std::move(t.y)), tab(std::move(t.tab))
{
}ob_lz & ob_lz::operator=(ob_lz && t)
{
	x = std::move(t.x);
	y = std::move(t.y);
	tab = std::move(t.tab);
	return *this;
}
