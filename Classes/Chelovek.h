#pragma once
#include <iostream>
using namespace std;
class Chelovek
{
	int _age;
	string _name;
public:
	Chelovek();
	Chelovek(const string& namee, int agee);
	void SetName(const string& namee);
	string GetName();
	void SetAge(int agee);
	int GetAge();
	void print();
};

