#include "User.h"

User::User()
{
	
}

void User::SignUp()
{
	string password;
	cout << "Введите своё ФИО: ";
	getline(cin, FullName);
	bool isCorrected = false;
	while (isCorrected == false)
	{
		cout << "Введите новый пароль: ";
		getline(cin, password);
		system("cls");
		cout << "Введите пароль ещё раз: ";
		getline(cin, Password);
		if (Password == password)
		{
			isCorrected = true;
		}
		else
		{
			cout << "Пароли не совпадают." << endl;
		}
	}
}

void User::LogIn()
{
	/*string password;
	cout << "Введите своё ФИО: ";
	string fullName;
	getline(cin, fullName);
	bool isCorrected = false;*/

}
