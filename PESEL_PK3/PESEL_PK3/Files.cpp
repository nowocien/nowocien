#include "stdafx.h"
#include "Files.h"


Files::Files()
{ 
	f.open("pesel.txt", std::ios::in);
}


Files::~Files()
{

	f.close();
}
