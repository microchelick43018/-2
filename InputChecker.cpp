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
		cout << "�������� ����, ��������� �������: ";
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
		cout << "�������� ����, ��������� �������: ";
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
			cout << "�������� ����. ��������� �������: ";
			continue;
		}
		for (i = 0; date[i] != '\0'; i++)
		{
			if ((date[i] < '0' || date[i] > '9') && i != 2 && i != 5)
			{
				cout << "�������� ����. ��������� �������: ";
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
	cout << "������� ����� ����� (��� ��������): ";
	bool isCorrected = false;
	int i;
	while (isCorrected == false)
	{
		cin >> number;
		if (number.length() != 16)
		{
			cout << "�������� ����. ��������� �������: ";
			continue;
		}
		for (i = 0; number[i] != '\0'; i++)
		{
			if (number[i] < '0' || number[i] > '9')
			{
				cout << "�������� ����. ��������� �������: ";
				break;
			}
		}
		if (number[i] == '\0')
		{
			isCorrected = true;
		}
	}
	cout << "������� ���� (������ ���� 01/23): ";
	isCorrected = false;
	while (isCorrected == false)
	{
		cin >> date;
		if (number.length() != 5 || date[2] != '\\')
		{
			cout << "�������� ����. ��������� �������: ";
			continue;
		}
		for (i = 0; date[i] != '\0'; i++)
		{
			if ((date[i] < '0' || date[i] > '9') && i != 2)
			{
				cout << "�������� ����. ��������� �������: ";
				break;
			}
		}
		if (date[i] == '\0')
		{
			isCorrected = true;
		}
	}
	cout << "������� CVC (3 ����� �� ������� ������� �����): ";
	isCorrected = false;
	while (isCorrected == false)
	{
		cin >> CVC;
		if (CVC.length() != 3)
		{
			cout << "�������� ����. ��������� �������:";
			continue;
		}
		for (i = 0; CVC[i] != '\0'; i++)
		{
			if (CVC[i] < '0' || CVC[i] > '9')
			{
				cout << "�������� ����. ��������� �������: ";
				break;
			}
		}
		if (CVC[i] == '\0')
		{
			isCorrected = true;
		}
	}
	cout << "�������!" << endl;
}

