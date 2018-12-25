#include "stdafx.h"
#include "Date.h"

Date::Date() {}
 

Date::Date(int date) 
{
	className = (char*)"data";
	this->exact_date = date; 
	this->cDisplay_date = new char[display_length];
}

void Date::Update_char_notation(){ 
	int temp = exact_date;
	int int_array_length = 2;
	int_array = new int[int_array_length];

	for (int i = int_array_length; i > 0; i--)	{
		int_array[i - 1] = (temp % 10);
		temp /= 10;
	}
}

void Date::Udpate_offset_and_char_notatnion(int offset)
{	
	display_date = offset + exact_date; 

	int temp = display_date;
	for (int i = display_length; i > 0; i--)
	{
		//zapewnia nam konwersjê liczby typu int na char; u³atwienie wypisywania 
		cDisplay_date[i - 1] = (temp % 10) + '0';
		temp /= 10;
	} 
}

int& Date::operator+=(int &prawy){
	int temp = this->exact_date + prawy;
	return temp;
}
int& Date::operator-=(int &prawy) {
	int temp = this->exact_date - prawy;
	return temp;
}
 
void Date::Wypisz()
{
	std::cout << className << " to:";
	std::cout << cDisplay_date << std::endl;
}

Date::~Date()
{ 
}
