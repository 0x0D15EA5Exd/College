#pragma once
#include "Date.h"
#include <string>
#include <iostream>
#include <optional>
using namespace std;

class Event
{
public:
    Event();
    int id;
    friend istream& operator>> (istream& i, Event& E);
    friend ostream& operator<< (ostream& o, const Event& E);
    void setTitleEvent(string str);
    void setDescEvent(string str);
    void setLocaEvent(string str);
    string getTitleEvent() const;
    string getDescEvent() const;
    string getLocaEvent() const;
    int getDateEndState() const;
    ~Event();

private:
    string titleEvent;
    string descEvent;
    string locaEvent;
    Date eventStart;
    Date eventEnd;
    optional<bool> dateEndState;
    static int id_event;
 
};
