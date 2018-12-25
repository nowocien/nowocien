#include "stdafx.h"
#include "Pesel.h"
#include "Date.h" 

Pesel::Pesel(const char* pesel){
}

Pesel::Pesel(int year, int month, int day, int pin, int checksum)
{
	this->day = Day(day);
	this->month = Month(month);
	this->year = Year(year);
	 
	this->checksum = checksum;
	this->pin = PIN(pin); 
	
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


}

std::ostream & operator<<(std::ostream & screen, const Pesel & p)
{ 
	screen << p.getYear().int_array[0] << p.getYear().int_array[1] << p.getMonth().int_array[0]
		<< p.getMonth().int_array[1] << p.getDay().int_array[0] << p.getDay().int_array[1]
		<< p.pin.int_array[0] << p.pin.int_array[1] << p.pin.int_array[2]
		<< p.pin.gender.get_number() << p.checksum <<std::endl;
	return screen;
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
