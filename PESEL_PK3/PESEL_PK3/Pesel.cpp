#include "stdafx.h"
#include "Pesel.h"
#include "Date.h" 

Pesel::Pesel(const char* pesel)
{

}

Pesel::Pesel(int day, int month, int year, int pin, int checksum)
{
	this->day = Day(day);
	this->month = Month(month);
	this->year = Year(year);
	 
	this->checksum = checksum;
	this->pin = PIN(pin); 
	

	this->day.Udpate_offset_and_char_notatnion(0);
	this->day.Wypisz();
	this->day.Update_char_notation();

	this->month.Udpate_offset_and_char_notatnion(0);
	this->month.Wypisz();
	this->month.Update_char_notation();

	this->year.Udpate_offset_and_char_notatnion(1900);
	this->year.Wypisz();
	this->year.Update_char_notation();
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

	//this->sex = Gender::analiseSex(this->pin);

}




Pesel::~Pesel()
{
}
