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
	Etape* precedent = nullptr;
	Etape* suivant = nullptr;
};

class EtapeTrain : Etape
{
public:
	EtapeTrain();
	void add(Date tmp, const char	station[LONGEUR_MOT], const char ville[LONGEUR_MOT], unsigned int k, arrivalTime arrival);
	void setStation(const char* Station);
	void setArrivalTime(arrivalTime Tmp) const;
	void copy(char * dst, const char * src, int max);
	void addToEnd(EtapeTrain* Etape, EtapeTrain** head);
	//friend istream& operator>> (istream& i, EtapeTrain etapeT);
	~EtapeTrain();
private:
	unsigned int boardingTime;
	char station[LONGEUR_MOT];
	arrivalTime departureTime;
};
