#include "User.h"

User::User()
{
	
}

void User::SignUp()
{
	string password;
	cout << "������� ��� ���: ";
	getline(cin, FullName);
	bool isCorrected = false;
	while (isCorrected == false)
	{
		cout << "������� ����� ������: ";
		getline(cin, password);
		system("cls");
		cout << "������� ������ ��� ���: ";
		getline(cin, Password);
		if (Password == password)
		{
			isCorrected = true;
		}
		else
		{
			cout << "������ �� ���������." << endl;
		}
	}
}

void User::LogIn()
{
	/*string password;
	cout << "������� ��� ���: ";
	string fullName;
	getline(cin, fullName);
	bool isCorrected = false;*/

}
