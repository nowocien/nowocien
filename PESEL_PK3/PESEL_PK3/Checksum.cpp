#include "stdafx.h"
#include "Checksum.h"


Checksum::Checksum(Pesel p)
{
	checksum =
		p.year.int_array[0] * 9 + p.year.int_array[1] * 7
		+ p.month.int_array[0] * 3 + p.month.int_array[1] * 1
		+ p.day.int_array[0] * 9 + p.day.int_array[1] * 7 
		+ p.pin.int_array[0] * 3 + p.pin.int_array[1] * 1 + p.pin.int_array[2] * 9
		+ p.pin.gender.get_number() * 7;

	int a = p.pin.int_array[0] * 3 + p.pin.int_array[1] * 1 + p.pin.int_array[2] * 9;
	int b = p.pin.int_array[0];
	int c = p.pin.int_array[1];
	int d = p.pin.int_array[2];
	int e = p.pin.gender.get_number();
	checksum = checksum % 10;

	//9×a + 7×b + 3×c + 1×d + 9×e + 7×f + 3×g + 1×h + 9×i + 7×j
	 
}

int Checksum::get() {
	return checksum;
}


Checksum::~Checksum()
{
}
