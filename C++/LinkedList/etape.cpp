#include "etape.h"
#include <iostream>
#include <stdio.h>


EtapeTrain::EtapeTrain()
{
	std::cout << "Ctor EtapeTrain" << std::endl;
	printf("0x%p \n", (void*)&precednte);
	printf("0x%p \n", (void*)&suivante);
}

EtapeTrain* EtapeTrain::add(Date tmp, const char ville[LONGEUR_MOT])
{
	EtapeTrain* Etape = new EtapeTrain;
	Etape->date.jour = tmp.mois;

	return Etape;
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
