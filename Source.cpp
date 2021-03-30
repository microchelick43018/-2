#include <iostream>
#include "InputChecker.h"
using namespace std;

int ShowMainMenu()
{
	int choice;
	do
	{
		cout << "1 - Войти" << endl;

		cout << "2 - Зарегистрироваться" << endl;

		cout << "3 - Выйти" << endl;
		
		choice = ReadInt();
	} while (choice < 1 || choice > 3);
}

int main()
{
	setlocale(LC_ALL, "");
	ReadBankCard();
	while (true)
	{
		switch (ShowMainMenu())
		{
		case 1:
			break;
		case 2:
			break;
		default:
			break;
		}
	}
	return 0;
}