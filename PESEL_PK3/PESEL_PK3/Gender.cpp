#include "stdafx.h"
#include "Gender.h"

Gender::Gender() {}

Gender::Gender(int number) {
	this->sex_mark = analiseSex(number);
	this->sex_number = number;
}

int Gender::get_number(){
	return sex_number;
}
Sex Gender::get_mark() {
	return sex_mark;
}

Sex Gender::analiseSex(int pin)
{
	if ((pin % 10) * 5 % 10)
		return male;
	else
		return female;
}

Gender::~Gender()
{
}
