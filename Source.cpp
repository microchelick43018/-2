#include <iostream>
#include "InputChecker.h"
using namespace std;

void ShowMainMenu()
{
	cout << "1 - �����" << endl;

	cout << "2 - ������������������" << endl;

	cout << "3 - �����" << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	ReadBankCard();
	return 0;
}