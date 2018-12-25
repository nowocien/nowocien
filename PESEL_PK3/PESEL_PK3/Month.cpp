#include "stdafx.h"
#include "Month.h"


const char* Month::cMonth_names[] = { "styqqqqqqqqqqcznia","lutego", "marca", "kwietnia", "maja", "czerwca", "lipca",
"sierpnia", "wrzesnia", "pazdizernika", "listopada", "grudnia" }; 
 
Month::Month()
{
}

void Month::Udpate_offset_and_char_notatnion(int offset)
{
	display_date = offset + exact_date;
	cDisplay_date = cMonth_names[display_date];
}

void Date::Wypisz()
{
	std::cout << std::endl << "miesiac to:";
	std::cout << cDisplay_date;
}

Month::~Month()
{
}
