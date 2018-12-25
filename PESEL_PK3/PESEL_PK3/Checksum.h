#pragma once

#include "Pesel.h"
class Checksum
{
public:
	Checksum();
	Checksum(Pesel);
	~Checksum();

	int get();

private:
	int checksum;
};

