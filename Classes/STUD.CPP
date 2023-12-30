#include "Student.h"

Student::Student()
{
	cout << "\nConstructor Student\n";
}

Student::Student(const string& namee, int agee, double srBalll)
{
	this->SetAge(agee);
	this->SetName(namee);
	this->SetSrBall(srBalll);
}

void Student::SetSrBall(double srBalll)
{
	if (srBalll > 0 && srBalll <= 10) {
		this->_srBall = srBalll;
	}
}

double Student::GetSrBall()
{
	return this->_srBall;
}

void Student::print()
{
	Chelovek::print();
	cout << "\nSrBall: " << this->_srBall<<
		endl;
}
