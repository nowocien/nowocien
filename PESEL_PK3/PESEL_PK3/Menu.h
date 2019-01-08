#pragma once
#include "Lists.h"
class Menu
{
public:
	Menu();
	~Menu();
	void generatePesel();
	void peselAnalise();
	Lists* ReadFile();
	void WriteRedPesels(Lists*);

};

