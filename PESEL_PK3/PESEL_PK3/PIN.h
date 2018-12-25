#pragma once
#include "Gender.h"
class PIN
{
public:
	PIN();
	PIN(int);
	~PIN(); 


	int* int_array;
	Gender gender;

private:
	int pin; //nie zawiera informacji o plci 

};

