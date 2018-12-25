#pragma once
#include "Gender.h"
class PIN
{
public:
	PIN();
	PIN(int);
	~PIN(); 

private:
	int pin; //nie zawiera informacji o plci 
	int* int_array;
	Gender gender;

};

