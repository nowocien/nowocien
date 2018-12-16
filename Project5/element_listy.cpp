#include "element_listy.h"



element_listy::element_listy()
{ 
	nestepny = nullptr;
}

element_listy::element_listy(Liczba_zespolona l) : liczba(l)
{
	nestepny = nullptr;
}


element_listy::~element_listy()
{
	nestepny = nullptr;
}
