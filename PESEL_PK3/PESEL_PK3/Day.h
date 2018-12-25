#pragma once

#include "Date.h"

class Day : public Date
{
public:
	Day();
	~Day();

private: 
	const int display_length = 2;
};

