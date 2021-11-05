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

struct Etape
{
	Date date;
	char ville[LONGEUR_MOT];
	Etape* precednte = nullptr;
	Etape* suivante = nullptr;
};

class EtapeTrain : Etape
{
public:
	EtapeTrain();
	EtapeTrain*	add(Date tmp, const char ville[LONGEUR_MOT]);
	void setBoardingTime(unsigned int j);
	void setStation(char* Station) const;
	void setArrivalTime(arrivalTime Tmp) const;

	//friend istream& operator>> (istream& i, EtapeTrain etapeT);
	~EtapeTrain();
private:
	unsigned int boardingTime;
	char station[LONGEUR_MOT];
	arrivalTime departureTime;
};

