#include "stdafx.h"
#include "Year.h"


Year::Year()
{
}

Year::Year(int date)
{
	className = (char*)"rok"; 
	display_length = 4;
	this->exact_date = date;
	this->cDisplay_date = new char[display_length];
}

Year::~Year()
{
	delete cDisplay_date;
}
