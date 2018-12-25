#include "stdafx.h"
#include "Month.h"


const char* cMonth_names[] = {"stycznia", "lutego", "marca", "kwietnia", "maja", "czerwca", "lipca",
"sierpnia", "wrzesnia", "pazdizernika", "listopada", "grudnia" };
 
Month::Month(int date)
{
	className = (char*)"miesiac";
	display_length = 2;
	this->exact_date = date;
	this->cDisplay_date = new char[display_length];
}

Month::Month()
{
}

void Month::Udpate_offset_and_char_notatnion(int offset)
{ 
	display_date = offset + exact_date;
	cDisplay_date = (char*)cMonth_names[display_date-1];
}


Month::~Month()
{
	delete cDisplay_date;  
}
