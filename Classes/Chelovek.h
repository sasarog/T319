#pragma once
#include <iostream>
using namespace std;
class Chelovek
{
	mutable int _age;
	mutable string _name;
public:
	//Конструктор по умолчанию
	Chelovek();
	//Конструктор с параметром
	Chelovek(const string& namee, int agee);
	//Конструктор копирования
	Chelovek(const Chelovek& tmp);
	void SetName(const string& namee);
	string GetName();
	void SetAge(int agee);
	int GetAge();
	//Если в дочерних классах есть переопределение этой 
	//виртуальной функции, то в первую очередь будут вызываться
	//методы из этих дочерних классов
	//Но в том случае, если в функции отправлялись именно
	//экземпляры этих дочерних классов
	virtual void print() const;
};

