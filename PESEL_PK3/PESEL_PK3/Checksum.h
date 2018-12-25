#pragma once

#include "Pesel.h"
class Checksum
{
public:
	Checksum();
	Checksum(const Pesel);
	~Checksum();

	int get();



private:
	int checksum;
};

