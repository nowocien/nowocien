#include "stdafx.h"
#include "PIN.h"

PIN::PIN() {}

PIN::PIN(int _pin)
{
	int pin_length = 4;
	this->pin = _pin/10;
	int_array = new int[pin_length];

	for (int i = pin_length; i > 0; i--) {
		int_array[i - 1] = (_pin % 10);
		_pin /= 10;
	}
	gender = Gender(_pin);
}
  

PIN::~PIN()
{
	delete int_array;
}
