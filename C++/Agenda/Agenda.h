#pragma once
#include "Event.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Agenda
{
private:

	string agendaName;
	string agendaDesc;
	//Event arrayOfEvent[50];

public:
	Agenda();
	~Agenda();
	std::vector<Event> m_VectorOfEvent;
	Agenda& operator+=(Agenda& A);
	Agenda& operator-=(Agenda& A);
	friend ostream& operator<< (ostream& o, const Agenda& A);
	string getAgendaName() const;
	string getAgendaDesc() const;
	void setAgendaName(string strIn);
	void setAgendaDesc(string strIn);

};

