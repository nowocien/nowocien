#pragma once

#include <iostream>
class Date
{
public: 
	~Date();
	Date();
	Date(int date);
	 
	void Wypisz(); 
	void Udpate_offset_and_char_notatnion(int offset);

	int &operator+=(int &);
	int &operator-=(int &);

protected:
	int exact_date;
	int display_date ;
	const int display_length = 2;
	char* cDisplay_date;
};

