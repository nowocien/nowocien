#include "Liczba_zespolona.h"

int Liczba_zespolona::licznik = 0; 
 
real Liczba_zespolona::IM_get() const
{
	return IM;
}
real Liczba_zespolona::RE_get() const
{
	return RE;
}

void Liczba_zespolona::IM_set(real im)
{
	IM = im;
}
void Liczba_zespolona::RE_set(real re)
{
	RE = re;
}

Liczba_zespolona::Liczba_zespolona()
{
	licznik++;
	std::cout << "konstruktor bezargumentowy zostal wywolany" << std::endl;
}

Liczba_zespolona::Liczba_zespolona(real im)
{
	IM = im;
	RE = 0;
	licznik++;
	std::cout << "konstruktor 1-argumentowy zostal wywolany" << std::endl;
}

Liczba_zespolona::Liczba_zespolona(real re, real im)
{
	RE = re;
	IM = im;
	licznik++;
	std::cout << "konstruktor 2-argumentowy zostal wywolany" << std::endl;
}

Liczba_zespolona::Liczba_zespolona(const Liczba_zespolona & zesp) :RE(zesp.RE), IM(zesp.IM)
{
	licznik++;
	std::cout << "konstruktor kopiuj¹cy zostal wywolany" << std::endl;
}


Liczba_zespolona::~Liczba_zespolona()
{ 
	licznik--;
	std::cout << "dekonstruktor zostal wywolany" << std::endl;
};



//zadanie 1 
Liczba_zespolona & Liczba_zespolona::operator+=(const Liczba_zespolona &lz)
{
	this->IM_set(this->IM_get() + lz.IM_get());
	this->RE_set(this->RE_get() + lz.RE_get());
	return *this;
} 

Liczba_zespolona & Liczba_zespolona::operator+=(real lz)
{
	this->RE += lz;
	return *this;	
} 
 
//Zadanie 2 
Liczba_zespolona & Liczba_zespolona::operator+(const Liczba_zespolona & z2)const
{
	Liczba_zespolona z3 = Liczba_zespolona(this->RE + z2.RE_get(), this->IM + z2.IM_get());
	return z3;
}



//Zadanie 4
Liczba_zespolona & Liczba_zespolona::operator-(const Liczba_zespolona & z2)const
{
	Liczba_zespolona z3 = Liczba_zespolona(this->RE - z2.RE_get(), this->IM - z2.IM_get());
	return z3;
}


//Zadanie 5
real & Liczba_zespolona::operator[](int i) const
{
	real to_return;
	if (i == 0)
		to_return = this->IM; 
	else  
		to_return = this->RE; 
	return to_return;
}


//Zadanie 6
bool & Liczba_zespolona::operator!=(const Liczba_zespolona & z2) const
{
	bool x = true; 
	if (this->IM != z2.IM_get() || this->RE != z2.RE_get())  
		return x;  

	x = false;
	return x;
}
//Zadanie 7
std::ostream & operator<<(std::ostream & ekran, const Liczba_zespolona & liczba)
{
	ekran << liczba.RE << "+" << liczba.IM <<"i ";
	return ekran;
}

std::istream & operator>>(std::istream & ekran, Liczba_zespolona & liczba)
{
	ekran >> liczba.RE >> liczba.IM;
	return ekran;
}

//Zadanie 8
Liczba_zespolona & Liczba_zespolona::operator=(const Liczba_zespolona & liczba)
{
	if (this != &liczba)
	{
		RE = liczba.RE_get();
		IM = liczba.IM_get();
		std::cout << "przypisano nowa wartosc przez operator przypisania" << std::endl;
		return *this;
	}
	std::cout << "wywo³ano operaator przypisania";

	return *this;
}

//Zadanie 9
bool & Liczba_zespolona::operator==(const Liczba_zespolona & z2) const
{
	bool x = true;
	if (this->IM == z2.IM_get() && this->RE == z2.RE_get())
		return x;

	x = false;
	return x;
}//to ³adnie skomentuj prowadzacemu 


//Zadanie 10
Liczba_zespolona & Liczba_zespolona::operator++()
{
	this->RE++;
	return *this;
}


//Zadanie 12
Liczba_zespolona & Liczba_zespolona::operator()(real RE, real IM)
{
	this->RE_set(RE);
	this->IM_set(IM);
	return *this;
}


 