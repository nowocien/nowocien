#pragma once 
#include <iostream>
 

typedef float real;

class Liczba_zespolona
{

public:
	Liczba_zespolona();
	Liczba_zespolona(real im);
	Liczba_zespolona(real re, real im);
	~Liczba_zespolona();
	Liczba_zespolona(const Liczba_zespolona& zesp);

	void IM_set(real im);
	real IM_get() const ;
	void RE_set(real re);
	real RE_get() const ;

	static int licznik; 
	  
	Liczba_zespolona & operator+=(const Liczba_zespolona & lz);
	Liczba_zespolona & operator+=(real liczba);
	 
	Liczba_zespolona & operator+(const Liczba_zespolona & z2)const;
	Liczba_zespolona & operator-(const Liczba_zespolona &z2)const;
	real & operator[](int i)const;

	bool & operator!=(const Liczba_zespolona &z2)const;
	bool & operator==(const Liczba_zespolona &z2)const;

	friend std::ostream & operator<<(std::ostream & screen, const Liczba_zespolona & liczba);
	friend std::istream & operator>>(std::istream & screen, Liczba_zespolona & liczba);

	Liczba_zespolona & operator=(const Liczba_zespolona &liczba);

	Liczba_zespolona & operator++();

	Liczba_zespolona & operator()(real RE, real IM); 
	 
private:

	real RE;
	real IM;
};