#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class User
{
protected:
	string FullName;
	string Password;
public:
	User();

	virtual void SignUp();

	virtual void LogIn();

	virtual void Exit();

	virtual void PutInfoIntoFile() = 0;
};

