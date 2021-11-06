#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

Date::Date()
{
    this->jour = 0;
    this->mois = 0;
    this->annee = 0;

}

istream& operator >> (istream& i, Date& D)
{
    char c;
    std::cout << "\nEntrer une date au format jj/mm/aaaa :";
     
    i >> D.jour >> c >> D.mois >> c >> D.annee;
    return i;
}

ostream& operator << (ostream& o, const Date& D)
{
    o << "[" << D.jour << "/" << D.mois << "/" << D.annee << "]";
    return o;
}

int Date::getDay() const
{
    return jour;
}

int Date::getMonth() const
{
    return mois;
}

int Date::getYears() const
{
    return annee;
}

Date::~Date()
{
    //std::cout << " Dtor Date";
}
