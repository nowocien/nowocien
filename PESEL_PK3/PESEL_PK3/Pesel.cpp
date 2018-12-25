#include "stdafx.h"
#include "Pesel.h"
#include "Date.h" 

Pesel::Pesel(const char* pesel)
{

}

Pesel::Pesel(int year, int month, int day, int pin, int checksum)
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

std::ostream & operator<<(std::ostream & ekran, const Pesel & p)
{
	int _genderMark = p.pin.gender.get_number();

	ekran << p.year.int_array[0] << p.year.int_array[1] << p.month.int_array[0]
		<< p.month.int_array[1] << p.day.int_array[0] << p.day.int_array[1]
		<< p.pin.int_array[0] << p.pin.int_array[1] << p.pin.int_array[2]
		<< _genderMark << p.checksum <<std::endl;
	return ekran;
}


Day Pesel::getDay()const {
	return day;
}

Month Pesel::getMonth()const {
	return month;
}

Year Pesel::getYear()const {
	return year;
}

PIN Pesel::getPIN()const {
	return pin;
}


Pesel::~Pesel()
{
}
