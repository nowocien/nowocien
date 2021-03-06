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
 	Pesel();
	~Pesel();

	Pesel(int, int, int, int, int); 
	Pesel(long long int number);
	Pesel(const char* pesel);

	Day getDay()const;
	Month getMonth()const;
	Year getYear()const;
	PIN getPIN()const; 
	void someAmendments();

	int checksum;

	Day day;
	Month month;
	Year year;
	
	bool & operator==(const Pesel &p) const;
	friend std::ostream & operator<<(std::ostream & screen, const Pesel & p);
	friend std::istream & operator >> (std::fstream & file, Pesel & p);


private:	
	
	PIN pin;
	
};

