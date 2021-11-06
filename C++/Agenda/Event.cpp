#include "Event.h"
#include <iostream>
#include <string>

using namespace std;
size_t sizeBuff = 1;

int Event::id_event = 0;


struct timePrecision
{   
    int heure, minute;
};

timePrecision __startShortEvent__, __endShortEvent__;
timePrecision __startLongEvent__, __endLongEvent__;

Event::Event()
{
    //debug cout << " Ctor Event";
    id = ++id_event;
    //debug cout << "ID = " << id;

}

//modulator;
void Event::setTitleEvent(string strIn)
{
    titleEvent = strIn;
}

void Event::setDescEvent(string strIn)
{
    descEvent = strIn;
}

void Event::setLocaEvent(string strIn)
{
    descEvent = strIn;
}


istream& operator>>(istream& i, Event& E)
{
    string buff(sizeBuff, '\0');
    char t;
    i.clear();

    cout << "\nEntrer un titre pour l'evennement :" << endl;
    getline(i, E.titleEvent,'\n');

    cout << "\nEntrer une description pour l'evennemet :" << endl;
    getline(i, E.descEvent,'\n');

    cout << "\nEntrer une location :" << endl;
    getline(i, E.locaEvent,'\n');

    cout << endl;

    //debug cout << "debug 1";
    //debug cout cout << buff;
    cout << "\nSi evennement dure plus d'une journee, entrer '+' " << endl;
    buff.clear();
    i >> buff;  
    if (buff == "+")
    {
        i >> E.eventStart;
        cout << "\nEntrer une heure de debut(format hh:mm) : " << endl;
        i >> __startLongEvent__.heure >> t >> __startLongEvent__.minute;
        i >> E.eventEnd;
        cout << "\nEntrer une heure de fin(format hh:mm) : " << endl;
        i >> __endLongEvent__.heure >> t >> __endLongEvent__.minute;
        E.dateEndState = true;
    }
    else {
        i >> E.eventStart;
        cout << "\nEntrer une heure de debut(format hh:mm) :" << endl;
        i >> __startShortEvent__.heure >> t >> __startShortEvent__.minute;
        i.clear();
        cout << "\nEntrer une heure de fin(format hh:mm) :" << endl;
        i >> __endShortEvent__.heure >> t >> __startShortEvent__.minute;

    }
    return i;

}

ostream& operator<< (ostream& o, const Event& E)
{
    
    if(E.getDateEndState() == 0x0D15EA5E)
    {
        o << "Le " << E.eventStart << " de " << __startShortEvent__.heure << "h";
        o << __startShortEvent__.minute << " a " << __endShortEvent__.heure << "h" << __endShortEvent__.minute << endl;
        o << "Il y a " << E.titleEvent << endl;
        o << "Lieu :" << E.locaEvent << endl;
        o << "-------------------------------------" << endl;
        o << "Description evennement : " << E.descEvent << endl;
        o << "-------------------------------------" << endl;
        return o;
    }
    else
    {
        o << "Du " << E.eventStart << " a " << __startLongEvent__.heure << "h" << __startLongEvent__.minute << endl;
        o << "Au " << E.eventEnd << " a " << __endLongEvent__.heure << "h" << __endLongEvent__.minute << endl;  
        o << "A " << E.locaEvent << endl;
        o << "Il y a " << E.titleEvent << endl;
        o << "------------------------------------" << endl;
        o << "Description evennement : " << E.descEvent << endl;
        o << "------------------------------------" << endl;
        return o;

    }
    
}

int Event::getDateEndState() const
{
    return (!dateEndState) ? 0x0D15EA5E : 0xDEADC0DE;
    // Si optional<bool> n'est pas initiliasé alors on renvoie le magic word sinon l'autre
}

//accessor;
string Event::getTitleEvent() const
{
    return titleEvent;
}
string Event::getDescEvent() const
{
    return descEvent;
}
string Event::getLocaEvent() const
{
    return locaEvent;
}

Event::~Event()
{
    //cout << "Dtor Event";
}
