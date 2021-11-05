#pragma warning (disable : 4996)
#include "etape.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
EtapeTrain* head = nullptr;

EtapeTrain::EtapeTrain()
{
	std::cout << "Ctor EtapeTrain" << std::endl;
	printf("0x%p \n", (void*)&precedent);
	printf("0x%p \n", (void*)&suivant);
}

void EtapeTrain::add(Date tmp, const char station[LONGEUR_MOT], const char ville[LONGEUR_MOT], unsigned int k, arrivalTime arrival)
{
	EtapeTrain* Etape = new EtapeTrain;
	Etape->date.mois = tmp.mois;
	Etape->date.jour = tmp.jour;
	Etape->date.annee = tmp.annee;
	Etape->boardingTime = k;
	Etape->departureTime.hour = arrival.hour;
	Etape->departureTime.minutes = arrival.minutes;
	copy(Etape->ville, ville, LONGEUR_MOT);
	Etape->setStation(station);
	addToEnd(Etape, &head);

}

void EtapeTrain::setStation(const char* Station)
{
	copy(this->station, Station, LONGEUR_MOT);
}

void EtapeTrain::setArrivalTime(arrivalTime Tmp) const
{
	//
}

void EtapeTrain::copy(char* dst, const char* src, int max)
{
	int end = strlen(src);
	if (end > max) end = max;
	strncpy(dst, src, max);
	dst[end] = '\0';
}

void EtapeTrain::addToEnd(EtapeTrain* Etape, EtapeTrain** head)
{
	EtapeTrain* last = *head;
	if (*head)
	{
		Etape->precedent = nullptr;
		*head = Etape;
		return;
	}

	while (last->suivant != nullptr)
		last->suivant = last->suivant;
	last->suivant = Etape;
	Etape->precedent = last;
}

EtapeTrain::~EtapeTrain()
{
	std::cout << "Dtor EtapeTrain Called" << std::endl;
}


/******
istream& operator>>(istream& i, EtapeTrain etapeT)
{

	return i;
}*/
