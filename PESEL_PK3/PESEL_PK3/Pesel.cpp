#include "stdafx.h"
#include "Pesel.h"
#include "Date.h"
#include "Day.h"
#include "Month.h"
#include "Year.h"


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

	Month dat2 = Month(12);
	dat2.Udpate_offset_and_char_notatnion(0);
	dat2.Wypisz(); 

	Day dat3 = Day(22);
	dat3.Udpate_offset_and_char_notatnion(0);
	dat3.Wypisz(); 

	Year dat4 = Year(95);
	dat4.Udpate_offset_and_char_notatnion(1900);
	dat4.Wypisz();
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
