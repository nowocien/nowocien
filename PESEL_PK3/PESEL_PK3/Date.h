#pragma once

#include <iostream>
class Date
{
public: 
	virtual ~Date();
    Date();
	Date(int date);
	 
	void Wypisz(); 
	void Udpate_offset_and_char_notatnion(int offset); 
	void Update_char_notation();

	int &operator+=(int &);
	int &operator-=(int &);

	int* int_array;

protected:
	int exact_date;
	int display_date ;
	char* cDisplay_date;
	char* className;
	int display_length;
};

