#pragma once
#include "sex.h"
class Gender
{
public:
	Gender();
	Gender(int);
	~Gender(); 

	static Sex analiseSex(int pin);
	int get_number();
	Sex get_mark();

private:
	Sex sex_mark;
	int sex_number;
};

