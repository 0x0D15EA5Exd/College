#pragma once
#include <iostream>	
using namespace std;

const int LONGEUR_MOT = 16;

struct Date
{
	int jour;
	int mois;
	int annee;
};

struct arrivalTime
{
	int hour;
	int minutes;
};

struct EtapeStr
{
	Date dateEtape;
	char ville[LONGEUR_MOT];
	EtapeStr* previous = nullptr;
	EtapeStr* next = nullptr;
};

std::ostream& operator << (std::ostream& os, const Date& dateT);
std::ostream& operator << (std::ostream& os, const arrivalTime& arrivalT);

class Etape : public EtapeStr
{
public:
	Etape();
	void setStation(const char*);
	void setArrivalTime(arrivalTime);
	void setBoardingTime(unsigned int);
	void copy(char*,const char* ,int );
	friend istream& operator >> (istream& i, Etape& tmp);
	friend ostream& operator << (ostream& o, const Etape& );
	~Etape();
protected:
	unsigned int boardingTime;
	char station[LONGEUR_MOT];
	arrivalTime departureTime;
};

//void append(Etape** startRef);
//void printList(Etape* etapeT);

class EtapeExtended : public Etape
{
public:
	void add(EtapeExtended** startRef);
private:
	EtapeExtended* next();
};

/*
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

	//	last->next = new_node;
	new_node->previous = last;
	return(void)"k";
}
*/
