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
	cout << "Дата: " << _date << endl;
	cout << "Специалист: " << _specialist << endl;
	cout << "Цена: " << _cost << endl;
	if (_isPayed)
	{
		cout << "Талон оплачен" << endl;
	}
	else
	{
		cout << "Талон не оплачен" << endl;
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
