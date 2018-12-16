#pragma once

#include "Liczba_zespolona.h"

class element_listy
{
	 

public:
	element_listy();
	element_listy(Liczba_zespolona liczba);
	~element_listy();


	Liczba_zespolona liczba;
	element_listy* nestepny;
};

