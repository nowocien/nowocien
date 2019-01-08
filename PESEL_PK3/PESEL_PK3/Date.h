#pragma once

#include <iostream>
class Date
{
public: 
	virtual ~Date();
    Date();
	Date(int date);
	 

	Date& operator+=(int);
	Date& operator-=(int);
	friend std::ostream & operator<<(std::ostream & screen, const Date & d);

	int getExactDate();

	int* int_array;
	char* cDisplay_date;
	int display_string_length;
	 
	void SetOffset(int);

protected:  
	int exact_date;
	int display_date ;

	int int_array_length;

	void Update_char_notation() ;
	void Update_display_string() ;
};

