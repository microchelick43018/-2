#include "InputChecker.h"

bool TryParse(string str, int& value)
{
	try
	{
		size_t a = 0;
		value = stoi(str, &a);
		if (a != str.size())
		{
			throw false;
		}
		return true;
	}
	catch (...)
	{
		value = 0;
		return false;
	}
}

bool TryParse(string str, double& value)
{
	try
	{
		size_t a = 0;
		setlocale(LC_ALL, "en");
		value = stod(str, &a);
		setlocale(LC_ALL, "");
		if (a != str.size())
		{
			throw false;
		}
		return true;
	}
	catch (...)
	{
		value = 0;
		return false;
	}
}

int ReadInt()
{
	int value;
	string str;
	cin >> str;
	bool isCorrect = TryParse(str, value);
	while (isCorrect == false)
	{
		cout << "Неверный ввод, повторите попытку: ";
		cin >> str;
		isCorrect = TryParse(str, value);
	}
	return value;
}

double ReadDouble()
{
	double value;
	string str;
	cin >> str;
	bool isCorrect = TryParse(str, value);
	while (isCorrect == false)
	{
		cout << "Неверный ввод, повторите попытку: ";
		cin >> str;
		isCorrect = TryParse(str, value);
	}
	return value;
}

string ReadDate()
{
	string date;
	int i;
	bool isCorrected = false;
	while (isCorrected == false)
	{
		if (date.length() != 8 || date[2] != '.' || date[5] != '.')
		{
			cout << "Неверный ввод. Повторите попытку: ";
			continue;
		}
		for (i = 0; date[i] != '\0'; i++)
		{
			if ((date[i] < '0' || date[i] > '9') && i != 2 && i != 5)
			{
				cout << "Неверный ввод. Повторите попытку: ";
				break;
			}
		}
		if (date[i] == '\0')
		{
			isCorrected = true;
		}
	}
	return date;
}

void ReadBankCard()
{
	string number;
	string date;
	string CVC;
	cout << "Введите номер карты (без пробелов): ";
	bool isCorrected = false;
	int i;
	while (isCorrected == false)
	{
		cin >> number;
		if (number.length() != 16)
		{
			cout << "Неверный ввод. Повторите попытку: ";
			continue;
		}
		for (i = 0; number[i] != '\0'; i++)
		{
			if (number[i] < '0' || number[i] > '9')
			{
				cout << "Неверный ввод. Повторите попытку: ";
				break;
			}
		}
		if (number[i] == '\0')
		{
			isCorrected = true;
		}
	}
	cout << "Введите дату (формат вида 01/23): ";
	isCorrected = false;
	while (isCorrected == false)
	{
		cin >> date;
		if (number.length() != 5 || date[2] != '\\')
		{
			cout << "Неверный ввод. Повторите попытку: ";
			continue;
		}
		for (i = 0; date[i] != '\0'; i++)
		{
			if ((date[i] < '0' || date[i] > '9') && i != 2)
			{
				cout << "Неверный ввод. Повторите попытку: ";
				break;
			}
		}
		if (date[i] == '\0')
		{
			isCorrected = true;
		}
	}
	cout << "Введите CVC (3 цифры на обраной стороне карты): ";
	isCorrected = false;
	while (isCorrected == false)
	{
		cin >> CVC;
		if (CVC.length() != 3)
		{
			cout << "Неверный ввод. Повторите попытку:";
			continue;
		}
		for (i = 0; CVC[i] != '\0'; i++)
		{
			if (CVC[i] < '0' || CVC[i] > '9')
			{
				cout << "Неверный ввод. Повторите попытку: ";
				break;
			}
		}
		if (CVC[i] == '\0')
		{
			isCorrected = true;
		}
	}
	cout << "Успешно!" << endl;
}

