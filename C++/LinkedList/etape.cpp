#pragma warning(disable: 4996)
#include "Etape.h"	
#include <iostream>

using namespace std;

void clearBuffer(char *tmpchar)
{
	memset(&tmpchar[0], 0, sizeof(0));
	return (void)"NotGood i guess !";
}

Etape::Etape()
{
	boardingTime = 5;
	departureTime = { 0,0 };
	char t[LONGEUR_MOT] = "test";
	copy(station, t, LONGEUR_MOT);
	copy(ville, t, LONGEUR_MOT);
	//Ctor 
	// penser à rajouter des valeurs par défaut.
	printf("Adress previous : 0x%p", previous);
	printf("\nAdress next : 0x%p\n\n",	next);
}

void Etape::setStation(const char*)
{
	// useless; -> We acces to private class member with a pointer;
}

void Etape::setArrivalTime(arrivalTime)
{
	//useless;
}

void Etape::setBoardingTime(unsigned int)
{
	//useless;
}

void Etape::copy(char* dst, const char* src, int max)
{
	int end = strlen(src);
	if (end > max) end = max;
	strncpy(dst, src, max);
	dst[end] = '\0';	
}

istream& operator >> (istream& i, Etape& tmp)
{
//	char tmpchar[LONGEUR_MOT];
	char c;
	std::cout << "Nom de la Ville : ";
//	i >> tmpchar;
	i >> tmp.ville;
//	copy(tmp.ville, tmpchar, LONGEUR_MOT); ERROR C2100
//	clearBuffer(tmpchar);
	std::cout << std::endl << " Nom de la Gare : ";
//	i >> tmpchar;
	i >> tmp.station;	 
//	copy(tmp.station, tmpchar, LONGEUR_MOT); ERROR C2100
//	clearBuffer(tmpchar);
	std::cout << "(fomart int(j)/int(m)/int(a)) Date : ";
	i >> tmp.dateEtape.jour >> c >> tmp.dateEtape.mois >> c >> tmp.dateEtape.annee;
	i.clear();
	std::cout << std::endl << "(format int(m):int(h)) Horaire :  ";
	i >> tmp.departureTime.minutes >> c >> tmp.departureTime.minutes;
	std::cout << std::endl << "(unsinged int can't be negative value) Durée de l'arrêt en gare : ";
	i >> tmp.boardingTime;

	return i;
}

Etape::~Etape()
{
}

void printList(Etape* etapeT)
{
	Etape* last; //= reinterpret_cast<EtapeStr*>(*etapeT);

	while (etapeT != nullptr)
	{
		std::cout << etapeT << std::endl << std::endl;
		//SetapeT = etapeT->next(); 
	}
	return (void)"test";
}
// Operator Overflow for Date Struct 
std::ostream& operator<<(std::ostream& os, const Date& dateT)
{	
	os << "[" << dateT.jour << "/" << dateT.mois << "/" << dateT.annee << "]";
	return os;
}

std::ostream& operator<<(std::ostream& os, const arrivalTime& arrivalT)
{
	os << arrivalT.hour << "h" << arrivalT.minutes;
	return os;

}

// Operator overflow for Etape class
std::ostream& operator<<(std::ostream& o, const Etape& etapeT)
{
	o << std::endl << "A " << etapeT.ville << " le ";
	o << etapeT.dateEtape << " a " << etapeT.departureTime;
	o << "Est en gare de " << etapeT.station << " pour " << etapeT.boardingTime;
	// o << "DEBUG : " << &etapeT->previous << "\n << &etapeT->next;
	return o;
}


void EtapeExtended::add(EtapeExtended** startRef)
{
	EtapeExtended* new_node = new EtapeExtended();

	std::cin >> *new_node;

	if (*startRef == nullptr)
	{
		new_node->next = nullptr;
	}
	EtapeExtended* last = this;
	while (last->next() != nullptr)
	{
		last = last->next();
	}
	last->next() = new_node;

	return (void)"t";
}

EtapeExtended* EtapeExtended::next()
{
	return reinterpret_cast<EtapeExtended*>(reinterpret_cast<EtapeStr*>(this)->next);
}
