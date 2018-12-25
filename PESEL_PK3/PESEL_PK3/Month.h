#pragma once
#include "Date.h"
class Month : public Date
{
public:
	Month();
	~Month();
	void Udpate_offset_and_char_notatnion(int offset);


private:
	static const char* cMonth_names[];
};

