#include "stdafx.h"
#include "Year.h"


Year::Year(){
}

Year::Year(int date){ 
	this->exact_date = date;
	this->display_date = date;
	Update_char_notation();
	Update_display_string();
}


