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
	//Если в дочерних классах есть переопределение этой 
	//виртуальной функции, то в первую очередь будут вызываться
	//методы из этих дочерних классов
	//Но в том случае, если в функции отправлялись именно
	//экземпляры этих дочерних классов
	virtual void print();
};

