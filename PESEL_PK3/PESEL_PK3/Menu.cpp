#include "stdafx.h"
#include "Menu.h"
#include "Pesel.h"
#include "Checksum.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


Menu::Menu()
{
	srand(time(NULL));
	char action;

	while (std::cin>> action)
	{
		system("cls");
		std::cout << std::endl << "1 - analiza numeru pesel";
		std::cout << std::endl << "2 - generowanie numeru pesel";

		switch (action)
		{
		case '1': //analiza numeru pesel
			peselAnalise();
			break;
		case '2': //generowanie nowego numeru
			generatePesel();

			break;
		default:
			break;
		}

	}



}



void Menu::peselAnalise() {

	char* input = new char[11];
	std::cout << std::endl << "Podaj PESEL: ";
	std::cin >> input;

	Pesel p = Pesel(atoll(input));

	if (Checksum(p).get() == p.checksum)
		std::cout << std::endl << "PESEL prawidlowy";
	else
		std::cout << std::endl << "PESEL bledny ;(";

}


void Menu::generatePesel(){

	int pin = (std::rand() % 998) + 1;

	int day, month, year, gender;
	std::cout << std::endl << "Podaj dzien urodzin: ";
	std::cin >> day;
	std::cout << std::endl << "Podaj miesiac urodzin: ";
	std::cin >> month;
	std::cout << std::endl << "Podaj year urodzin: ";
	std::cin >> year;
	std::cout << std::endl << "Podaj swoja plec";
	std::cout << std::endl << "0-mezczyzna 1- kobieta ";
	std::cin >> gender;

	gender = (std::rand() % 8) + gender;

	pin *= 10;
	pin += gender;
	
	Pesel p = Pesel(year, month, day, pin, NULL);
	p.checksum = Checksum(p).get();
	std::cout << p;

}


Menu::~Menu()
{
}
