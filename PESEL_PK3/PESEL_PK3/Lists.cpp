#include "stdafx.h"
#include "Lists.h"

int Lists::counter = 0;

Lists::Lists(Pesel p)
{
	next = this;
	pesel = p;
	counter++;
}
 
void Lists::add(Pesel toAdd) {
	Lists *newElement = new Lists(toAdd);
	newElement->next = this->next;

	this->next = newElement;
	counter++;

}

Lists* Lists::nextElement() {
	return this->next;
}

void Lists::remove() {
	//usuwa nastepny

	counter--;
	Lists *toDelete = this->next;
	this->next = this->next->next;
	 
	delete toDelete;
}
 
Lists::~Lists()
{/*
	while (counter > 0)
		remove();*/
	delete next;
}
