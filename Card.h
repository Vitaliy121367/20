#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Card
{
	unsigned long cardNumber;
	char name[50];
	char expiredDate[6];
	int PIN;
	double cash;

public:
	Card();
	Card(const char* name, double cash);
	~Card();

	void showInfo();
};

