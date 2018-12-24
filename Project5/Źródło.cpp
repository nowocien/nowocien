#include "Liczba_zespolona.h"


//Zadanie11
real& operator+=(real& a, Liczba_zespolona & liczba)
{
	a = a + liczba.RE_get();
	return a;
}

//zadanei 3 i 4
Liczba_zespolona & operator+(const Liczba_zespolona &z1, const Liczba_zespolona &z2)
{
	Liczba_zespolona z3 = Liczba_zespolona(z1.RE_get() + z2.RE_get(), z1.IM_get() + z2.IM_get());
	return z3;
}

Liczba_zespolona & operator-(const Liczba_zespolona &z1, const Liczba_zespolona &z2)
{
	Liczba_zespolona z3 = Liczba_zespolona(z1.RE_get() - z2.RE_get(), z1.IM_get() - z2.IM_get());
	return z3;
}

void main()
{
	Liczba_zespolona z,k;
	real f = 1; 

	z = Liczba_zespolona(2, 2); 
	k = Liczba_zespolona(3, 3);

	z += z;
	z += f;
	f += z;

	if (z == k)
		std::cout << "rowne" << std::endl;

	if (z != k)
		std::cout << "false" << std::endl;


	k = z;

	if (z == k)
		std::cout << "rowne" << std::endl;

	if (z != k)
		std::cout << "false" << std::endl;

	std::cout << z;
	std::cout << k;
	return;

}


