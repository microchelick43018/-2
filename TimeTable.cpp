#include "TimeTable.h"

TimeTable::TimeTable()
{
}

void TimeTable::Set(string date, string time, bool isFree)
{
	_date = date;
	_time = time;
	_isFree = isFree;
}
