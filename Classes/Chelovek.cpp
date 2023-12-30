#include "Chelovek.h"
using namespace std;
Chelovek::Chelovek()
{
	cout << "\nChel Constructor\n";
}

Chelovek::Chelovek(const string& namee, int agee)
{
	this->SetName(namee);
	this->SetAge(agee);
}

void Chelovek::SetName(const string& namee)
{
	if (namee != "") {
		this->_name = namee;
	}
}

string Chelovek::GetName()
{
	return this->_name;
}

void Chelovek::SetAge(int agee)
{
	if (agee >= 0) {
		this->_age = agee;
	}
}

int Chelovek::GetAge()
{
	return this->_age;
}

void Chelovek::print()
{
	cout << "\nName: " << this->_name <<
		"\nAge: " << this->_age << endl;
}
