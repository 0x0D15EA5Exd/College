#pragma once
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class Date
{
public:
	Date();
	friend istream& operator>> (istream& i, Date& D);
	friend ostream& operator<< (ostream& o, const Date& D);
	int getDay() const;
	int getMonth() const;
	int getYears() const;
	~Date();

private:

	int jour, mois, annee;
	
};

