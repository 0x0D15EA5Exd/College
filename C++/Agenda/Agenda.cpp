#include "Agenda.h"
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

Agenda::Agenda()
{
    //cout << " Ctor agenda"; debug
}

Agenda& Agenda::operator+=(Agenda& A)
{
    Event tmp;
    cin >> tmp;
    A.m_VectorOfEvent.push_back(tmp);
    A.m_VectorOfEvent.shrink_to_fit();
    tmp.~Event();
    return *this;
}

Agenda& Agenda::operator-=(Agenda& A)
{
    int i;
    cout << " Evennement à supprimer : "; 
    cin >> i;
    A.m_VectorOfEvent.erase(A.m_VectorOfEvent.begin() + i);
    A.m_VectorOfEvent.shrink_to_fit();
    return *this;
}

string Agenda::getAgendaName() const
{
    return agendaName;
}

string Agenda::getAgendaDesc() const
{
    return agendaDesc;
}

void Agenda::setAgendaName(string strIn)
{
    this->agendaName = strIn;
}

void Agenda::setAgendaDesc(string strIn)
{
    this->agendaDesc = strIn;
}
/* debug
void Agenda::DisplayVectorContents()
{
    for (unsigned int i = 0; i < m_VectorOfEvent.size(); i++)
    {
        std::cout << "Element[" << i << "] = " << m_VectorOfEvent[i] << std::endl;
    }
}
*/
ostream& operator<<(ostream& o, const Agenda& A)
{
    std::copy(A.m_VectorOfEvent.begin(), A.m_VectorOfEvent.end(), std::ostream_iterator<Event>(std::cout, " "));
    return o;
}

Agenda::~Agenda()
{
}


