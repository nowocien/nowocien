#pragma once

#include "sex.h"
#include "Date.h"
#include "Day.h"
#include "Month.h"
#include "Year.h"
#include "PIN.h"

class Pesel
{
	
public:
//	Pesel();
	~Pesel();

	Pesel(int, int, int, int, int); 
	Pesel(long long int number);
	Pesel(const char* pesel);

	Day getDay()const;
	Month getMonth()const;
	Year getYear()const;
	PIN getPIN()const;


	Day day;
	Month month;
	Year year;
	
	friend std::ostream & operator<<(std::ostream & screen, const Pesel & p);


private:	
	
	PIN pin;
	int checksum; 
	
};

