#include "OutPatientCard.h"

OutPatientCard::OutPatientCard()
{
}

void OutPatientCard::Set(string date, string diagnosis, string appointment)
{
	_date = date;
	_diagnosis = diagnosis;
	_appointment = appointment;
}
