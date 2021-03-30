#pragma once
#include <iostream>
#include "User.h"
#include "Talon.h"
#include "OutPatientCard.h"
#include <string>
#include <list>
using namespace std;
class Client : public User
{
private:
	list<Talon> _talons;
	OutPatientCard _outPatientCard;
public:
	void SignUp() override;

	void LogIn() override;

	void Exit() override;

	void PutInfoIntoFile() override;
};

