#include "stdafx.h"
#include "Day.h"


Day::Day()
{
}

Day::Day(int date)
{
	className = (char*)"dzien";
	display_length = 2;
	this->exact_date = date;
	this->cDisplay_date = new char[display_length];
}

Day::~Day()
{
	delete cDisplay_date; 
}
