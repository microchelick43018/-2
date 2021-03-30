#pragma once
#include <iostream>
#include <string>
using namespace std;

bool TryParse(string str, int& value);

bool TryParse(string str, double& value);

int ReadInt();

double ReadDouble();

void ReadBankCard();

string ReadDate();

