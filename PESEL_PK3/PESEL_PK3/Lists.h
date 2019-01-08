#pragma once
#include "Pesel.h"

//lista ta jest list¹ cykliczn¹. 
//Dlaczego? a dlaczego nie? nowy element do przeæwiczenia 

class Lists
{
public:
	Lists(Pesel );
	~Lists();

	void add(Pesel);
	void remove(); 
	Lists* nextElement();

	Lists *next;
	Pesel pesel;
	static int counter;
};

