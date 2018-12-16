#pragma once

#include "element_listy.h"

class lista_obiektow
{
private:
	element_listy * glowa;
public:
	lista_obiektow();
	~lista_obiektow();

	void dodaj(element_listy *element);
	void usun(element_listy *element);
	void wypisz();
};
 