#include "stdafx.h"
#include "PIN.h"

PIN::PIN() {}

PIN::PIN(int _pin)
{

	gender = Gender(_pin%10);
	_pin /= 10;
	 
	int pin_length = 3;
	this->pin = _pin;
	int_array = new int[pin_length];

	for (int i = pin_length; i > 0; i--) {
		int_array[i - 1] = (_pin % 10);
		_pin /= 10;
	}
}
  

PIN::~PIN()
{
	//delete int_array;
}
