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
private:
	unsigned int boardingTime;
	char station[LONGEUR_MOT];
	arrivalTime departureTime;
};


void append(Etape** startRef);
void printList(Etape* etapeT);
