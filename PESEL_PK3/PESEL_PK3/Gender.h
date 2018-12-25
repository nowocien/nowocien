#pragma once
#include "sex.h"
class Gender
{
public:
	Gender();
	Gender(int);
	~Gender(); 

	static Sex analiseSex(int pin);
	int get_number() const;
	Sex get_mark() const;

private:
	Sex sex_mark;
	int sex_number;
};

