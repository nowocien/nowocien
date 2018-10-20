#include "Liczba_zespolona.h"

class Liczba_zespolona
{
public:
	Liczba_zespolona();
	~Liczba_zespolona();

	void IM_set(float im);
	float IM_get();
	void RE_set(float re);
	float RE_get();

private:

	float RE;
	float IM;


};


float Liczba_zespolona::IM_get()
{
	return Liczba_zespolona::IM;
}
float Liczba_zespolona::RE_get()
{
	return Liczba_zespolona::RE;
}

void Liczba_zespolona::IM_set(float im)
{
	Liczba_zespolona::IM = im;
}
void Liczba_zespolona::RE_set(float re)
{
	Liczba_zespolona::RE = re;
}

Liczba_zespolona::Liczba_zespolona()
{
}

Liczba_zespolona::~Liczba_zespolona()
{
}


Liczba_zespolona::Liczba_zespolona()
{
}


Liczba_zespolona::~Liczba_zespolona()
{
}
