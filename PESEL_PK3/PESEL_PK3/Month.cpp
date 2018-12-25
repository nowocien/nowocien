#include "stdafx.h"
#include "Month.h"


const char* cMonth_names[] = {"stycznia", "lutego", "marca", "kwietnia", "maja", "czerwca", "lipca",
							  "sierpnia", "wrzesnia", "pazdizernika", "listopada", "grudnia" };
 

Month::Month() {
}

Month::Month(int date){
	className = (char*)"miesiac";
	this->exact_date = date;
	this->display_date = date;
	Update_char_notation();
	Update_display_string();
}


void Month::Update_display_string() {
	display_date = exact_date;
	cDisplay_date = (char*)cMonth_names[display_date-1];
	display_string_length = strlen(cDisplay_date);
}
 


 