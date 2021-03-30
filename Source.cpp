#include <iostream>
#include "InputChecker.h"
using namespace std;

void ShowMainMenu()
{
	cout << "1 - Войти" << endl;

	cout << "2 - Зарегистрироваться" << endl;

	cout << "3 - Выйти" << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	ReadBankCard();
	return 0;
}