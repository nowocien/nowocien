#include "stdafx.h"
#include "Silnik.h"


Silnik::Silnik()
{}
 
Silnik::~Silnik()
{}

Silnik & Silnik::operator=(const Silnik &silnik)
{
	if (this != &silnik)
	{
		this->stan = silnik.stan;
		this->szybkosc = silnik.szybkosc;
		this->identyfikator = silnik.identyfikator;
	}
	return *this;
}