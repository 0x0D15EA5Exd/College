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
	//Ctor 
	// penser à rajouter des valeurs par défaut.
	printf("Adress previous : 0x%p", previous);
	printf("\nAdress next : 0x%p\n\n",	next);
}

void Etape::setStation(const char*)
{
}

void Etape::setArrivalTime(arrivalTime)
{
	//
}

void Etape::setBoardingTime(unsigned int)
{
	//
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

ostream& operator<<(ostream& o, const Etape& etapeT)
{
	
	o << std::endl << "A " << etapeT.ville << " le ";
	o << etapeT.dateEtape << " a " << etapeT.departureTime;
	o << "Est en gare de " << etapeT.station << " pour " << etapeT.boardingTime;
	// o << "DEBUG : " << &etapeT->previous << "\n << &etapeT->next;
	return o;
}

Etape::~Etape()
{
}

void printList(Etape* etapeT)
{
	EtapeStr* last = reinterpret_cast<Etape*>(etapeT);

	while (etapeT != nullptr)
	{
		std::cout << etapeT << std::endl << std::endl;
		last = etapeT;
		etapeT = etapeT->next; // ERROR E0513 can't cast EtapeSTR in Etape 

	}
}

std::ostream& operator<<(std::ostream& os, const Date& dateT)
{
	
	os << "[" << dateT.jour << "/" << dateT.mois << "/" << dateT.annee << "]";
	return os;
}

void append(Etape** startRef)
{
	Etape* new_node = new Etape();
	EtapeStr* last = reinterpret_cast<EtapeStr*>(*startRef);
	std::cin >> *new_node;
	new_node->next = nullptr;

	if (*startRef == nullptr)
	{
		new_node->next = nullptr;
		*startRef = new_node;
		return (void)"Very SUS ";
	}

	while (last->next != nullptr)
	{
		last = last->next;
	}

	//return;
//	last->next = new_node;
	new_node->previous = last;
	return(void)"so i hope you know about cast !";
}

