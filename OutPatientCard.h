#pragma once
#include <iostream>
#include <string>
using namespace std;
class OutPatientCard
{
private:
	string _date;
	string _diagnosis;
	string _appointment;
public:
	OutPatientCard();

	void Set(string date, string diagnosis, string appointment);
};

