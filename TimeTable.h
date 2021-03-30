#pragma once
#include <iostream>
#include <string>
using namespace std;
class TimeTable
{
private:
	string _date;
	string _time;
	bool _isFree;
public:
	TimeTable();

	void Set(string date, string time, bool isFree);

};

