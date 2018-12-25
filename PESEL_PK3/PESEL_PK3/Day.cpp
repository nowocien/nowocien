#include "stdafx.h"
#include "Day.h"


Day::Day(){
}

Day::Day(int date){
	className = (char*)"dzien";
	this->exact_date = date;
	this->display_date = date;
	Update_char_notation();
	Update_display_string();
}
 