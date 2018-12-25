#include "stdafx.h"
#include "Pesel.h"
#include "Date.h"


Pesel::Pesel(const char* pesel)
{

}

Pesel::Pesel(int day, int month, int year, int pin, int checksum)
{
	this->day = day;
	this->month = month;
	this->year = year;
	this->pin = pin;
	this->checksum = checksum;

	this->sex = analiseSex(this->pin);
	
	Date dat = Date(year);
	dat.Udpate_offset_and_char_notatnion(1900);
	dat.Wypisz();
}

Pesel::Pesel(long long int number)
{
	this->checksum = number % 10;
	number /= 10;
	this->pin = number % 10000;
	number /= 10000;


	this->day = number % 100;
	number /= 100;
	this->month = number % 100;
	number /= 100;
	this->year = number % 100;

	//brak koniecznosci podawania PESEL w innej zmiennej niz int (np *char) poniewa¿ ka¿dy miesiac musi 
	//skladaæ sie z numerów wiekszych ni¿ jeden a rok nawet 2000 poprawnie zostanie zinterpretowany ;

	this->sex = analiseSex(this->pin);

}

Sex Pesel::analiseSex(int pin)
{
	if ((pin % 10) * 5 % 10)
		return male;
	else
		return female;
}


Pesel::~Pesel()
{
}
