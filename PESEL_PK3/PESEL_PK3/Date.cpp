#include "stdafx.h"
#include "Date.h"

Date::Date() {

	int_array_length = 2;
	int_array = new int[int_array_length]; 
}
 

Date::Date(int date) {
	this->exact_date = date;
	this->display_date = date;
	Update_char_notation();
	Update_display_string();
	
}

void Date::Update_char_notation() { 
	int temp = exact_date; 

	for (int i = int_array_length; i > 0; i--)	{
		int_array[i - 1] = (temp % 10);
		temp /= 10;
	}
}
 

void Date::Update_display_string()   {
	int temp = display_date;

	display_string_length = 1; 
	while (pow(10, display_string_length) < display_date) { 
		display_string_length++;
	}
	  
	cDisplay_date = new char[display_string_length]; 

	for (int i = display_string_length; i > 0; i--) {
		cDisplay_date[i - 1] = '0' + (temp % 10);
		temp /= 10;
	}
}
 

void Date::SetOffset(int _offset) {
	display_date += _offset;
	this->Update_display_string();
}

Date & Date::operator+=(int prawy){
	this->exact_date += prawy;
	this->display_date += prawy;
	Update_char_notation();
	Update_display_string();
	return *this;
}
Date & Date::operator-=(int prawy) {
	this->exact_date -= prawy;
	this->display_date -= prawy;
	Update_char_notation();
	Update_display_string();
	return *this;
}

int Date::getExactDate()
{
	return exact_date;
}

std::ostream & operator<<(std::ostream & screen, const Date & d)
{
	for (int i = 0; i < d.display_string_length; i++)
	{
		screen << d.cDisplay_date[i];
	}
	screen << ' ';
	return screen;
}

  

Date::~Date(){  
	//delete cDisplay_date; 
}
