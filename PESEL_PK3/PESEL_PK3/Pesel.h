#pragma once

#include "sex.h"

class Pesel
{
	
public:
//	Pesel();
	~Pesel();

	Pesel(int, int, int, int, int); 
	Pesel(long long int number);
	Pesel(const char* pesel);


private:
	int day, month, year;
	int pin, checksum;
	Sex sex;
	Sex analiseSex(int pin);
	
};

