// PESEL_PK3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Pesel.h"

#include <iostream>

int main()
{

	int* number = new int[7];
	number[4] = 4; 
	std::cout << number[4];

	Pesel dominik = Pesel(22, 12, 95, 0517, 6);
	Pesel dominik2 = Pesel(95122205176);
    return 0;
}

