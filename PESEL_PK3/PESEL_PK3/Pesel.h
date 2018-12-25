#pragma once

#include "sex.h"
#include "Date.h"
#include "Day.h"
#include "Month.h"
#include "Year.h"
#include "Gender.h"

class Pesel
{
	
public:
//	Pesel();
	~Pesel();

	Pesel(int, int, int, int, int); 
	Pesel(long long int number);
	Pesel(const char* pesel);


	Day day;
	Month month;
	Year year;

	Gender gender;

private:

	int pin, checksum; 
	
};

