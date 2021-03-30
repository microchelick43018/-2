#pragma once
#include <iostream>
#include <string>
using namespace std;
class Talon
{
private:
	string _date;
	string _specialist;
	int _cost;
	string _problemDescription;
	bool _isPayed = false;
public:
	Talon();

	Talon(string date, string specialist, int cost, string problemDescription);

	void ShowInfo();

	void Set(string date, string specialist, int cost, string problemDescription);
};

