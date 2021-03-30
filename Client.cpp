#include "Client.h"

void Client::SignUp()
{
	User::SignUp();
	PutInfoIntoFile();
}

void Client::LogIn()
{
	string tempFullName;
	string tempPassword;
	string truePassword;
	fstream fs;
	cout << "������� ��� ���: ";
	cin >> tempFullName;
	cout << "������� ������: ";
	cin >> tempPassword;
	fs.open("Clients\\" + tempFullName + ".txt", ios::in);
	if (fs.is_open() == false)
	{
		cout << "�������� ��� ��� ������." << endl;
		return;
	}
	fs.read((char*)&truePassword, sizeof(string));
	if (truePassword != tempPassword)
	{
		cout << "�������� ��� ��� ������." << endl;
		return;
	}
	cout << "�������!" << endl;
	FullName = tempFullName;
	Password = truePassword;
	fs.read((char*)& _outPatientCard, sizeof(OutPatientCard));
	Talon newTalon;
	while (fs.read((char*)&newTalon, sizeof(Talon)))
	{
		_talons.push_back(newTalon);
	}
	fs.close();
}

void Client::Exit()
{
	PutInfoIntoFile();
}

void Client::PutInfoIntoFile()
{
	fstream fs;
	fs.open("Clinets\\" + FullName + ".txt", ios::trunc | ios::out);
	fs.write((char*)&Password, sizeof(string));
	fs.write((char*)&_outPatientCard, sizeof(OutPatientCard));
	for (auto it = _talons.begin(); it != _talons.end(); it++)
	{
		fs.write((char*)&_talons, sizeof(Talon));
	}
	fs.close();
}
