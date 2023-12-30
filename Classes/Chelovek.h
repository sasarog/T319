#pragma once
#include <iostream>
using namespace std;
class Chelovek
{
	mutable int _age;
	mutable string _name;
public:
	//����������� �� ���������
	Chelovek();
	//����������� � ����������
	Chelovek(const string& namee, int agee);
	//����������� �����������
	Chelovek(const Chelovek& tmp);
	void SetName(const string& namee);
	string GetName();
	void SetAge(int agee);
	int GetAge();
	//���� � �������� ������� ���� ��������������� ���� 
	//����������� �������, �� � ������ ������� ����� ����������
	//������ �� ���� �������� �������
	//�� � ��� ������, ���� � ������� ������������ ������
	//���������� ���� �������� �������
	virtual void print() const;
};

