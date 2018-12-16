

#include "lsita_obiektow.h"
#include "element_listy.h" 
#include <iostream>


lista_obiektow::lista_obiektow()
{
	glowa = nullptr;
}

lista_obiektow::~lista_obiektow()
{
}

void lista_obiektow::dodaj(element_listy *element)
{
	if (glowa == nullptr)
		glowa = element;	
	else
	{
		element_listy *tmp = new element_listy;
		tmp = glowa;

		while (tmp->nestepny != nullptr)
		{
			tmp = tmp->nestepny;
		}
		tmp->nestepny = element;
	}
}


void lista_obiektow::usun(element_listy *element)
{
	element_listy *tymczasowy = new element_listy;
	tymczasowy = glowa;

	if (glowa == nullptr)
	{
		std::cout << "Wskazana lista jest lista pusta"; 
	}
	else if (glowa == element)
	{ 
		glowa = glowa->nestepny;
		tymczasowy->~element_listy(); 
	}
	else
	{
		while (tymczasowy->nestepny != nullptr)
		{
			if (tymczasowy->nestepny == element)
			{ 
				tymczasowy->nestepny = tymczasowy->nestepny->nestepny;
				tymczasowy->nestepny->~element_listy();
				return;
			}
		}
	}
}

void lista_obiektow::wypisz()
{
	element_listy *tmp = new element_listy;
	tmp = glowa;
	 
	while (tmp != nullptr)
	{  
		std::cout << "RE:" << tmp->liczba.RE_get();  
		std::cout << "IM:" << tmp->liczba.IM_get() << std::endl;
		tmp = tmp->nestepny;
	}
}
