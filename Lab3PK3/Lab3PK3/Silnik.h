#pragma once
class Silnik
{
public:
	Silnik();
	~Silnik();

	bool stan;
	int szybkosc;
	int identyfikator;

private:
	Silnik& operator=(const Silnik &);
};

