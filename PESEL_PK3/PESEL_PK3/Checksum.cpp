#include "stdafx.h"
#include "Checksum.h"


Checksum::Checksum() {
}

Checksum::Checksum(const Pesel p)
{
	checksum =
		p.getYear().int_array[0] * 9 + p.getYear().int_array[1] * 7
		+ p.getMonth().int_array[0] * 3 + p.getMonth().int_array[1] * 1
		+ p.getDay().int_array[0] * 9 + p.getDay().int_array[1] * 7
		+ p.getPIN().int_array[0] * 3 + p.getPIN().int_array[1] * 1 + p.getPIN().int_array[2] * 9
		+ p.getPIN().gender.get_number() * 7;

	//9×a + 7×b + 3×c + 1×d + 9×e + 7×f + 3×g + 1×h + 9×i + 7×jc

	checksum %= 10;
}

int Checksum::get() {
	return checksum;
}

Checksum::~Checksum(){
}
