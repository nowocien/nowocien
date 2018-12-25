#include "stdafx.h"
#include "Checksum.h"


Checksum::Checksum(Pesel p)
{
	checksum =
		p.year.int_array[0] * 9 + p.year.int_array[1] * 7
		+ p.month.int_array[0] * 3 + p.month.int_array[1] * 1
		+ p.day.int_array[0] * 9 + p.day.int_array[1] * 7

		+ 1 + 2 + 3


		+ p.iSex * 7;
	checksum = checksum % 10;

	//9×a + 7×b + 3×c + 1×d + 9×e + 7×f + 3×g + 1×h + 9×i + 7×j
	 
}

int Checksum::get() {
	return checksum;
}


Checksum::~Checksum()
{
}
