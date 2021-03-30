#include "Talon.h"
Talon::Talon()
{

}

Talon::Talon(string date, string specialist, int cost, string problemDescription)
{
	Set(date, specialist, cost, problemDescription);
}



void Talon::ShowInfo()
{
	cout << "����: " << _date << endl;
	cout << "����������: " << _specialist << endl;
	cout << "����: " << _cost << endl;
	if (_isPayed)
	{
		cout << "����� �������" << endl;
	}
	else
	{
		cout << "����� �� �������" << endl;
	}
}

void Talon::Set(string date, string specialist, int cost, string problemDescription)
{
	_date = date;
	_specialist = specialist;
	_cost = cost;
	_problemDescription = problemDescription;
	_isPayed = false;
}
