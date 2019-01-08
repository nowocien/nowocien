#include "stdafx.h"
#include "Pesel.h"
#include "Date.h" 
#include <fstream>

Pesel::Pesel() {
}

Pesel::Pesel(const char* pesel) {
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
	if (number < 1010100100)
		number = 11111188888;
	this->checksum = number % 10;
	number /= 10;
	this->pin = PIN(number % 10000);
	number /= 10000;
	 
	this->day = Day(number % 100);
	number /= 100;
	this->month = Month(number % 100);
	number /= 100;
	this->year = Year(number % 100);
	 
}

std::ostream & operator<<(std::ostream & screen, const Pesel & p)
{ 
	screen << p.getYear().int_array[0] << p.getYear().int_array[1] << p.getMonth().int_array[0]
		<< p.getMonth().int_array[1] << p.getDay().int_array[0] << p.getDay().int_array[1]
		<< p.pin.int_array[0] << p.pin.int_array[1] << p.pin.int_array[2]
		<< p.pin.gender.get_number() << p.checksum <<std::endl;
	return screen;
}


std::istream & operator >> (std::fstream & file, Pesel &p)
{ 
	char dane[255];
	bool a = file.is_open();
	bool b = file.good(); 
	if (a && b)
	{
		file.getline(dane, 255);
		p = Pesel(atoll(dane));
	}
	else
	{
		int a = 0;
		a++;
	}

	return file;
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
