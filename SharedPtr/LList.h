#pragma once
#include <iostream>
using namespace std;
struct LLData {
	LLData() {
	};
	LLData(string name, int age) {
		this->name = name;
		this->age = age;
	}
	int age;
	string name;
	void printData() {
		cout <<
			"Name: " << this->name
			<< " Age: " << this->age
			<< endl;
	}
};
class LList
{
	
	shared_ptr<LLData> data = nullptr;
	shared_ptr<LList> next = nullptr;
	void grab();
public:
	LList();
	LList(string name, int age);
	void add(const string& name, int age);
	void print();
	void deleteTailElem();
	void deleteByIndex(int index);
	void deleteByName(const string&name);
	shared_ptr<LLData> findData(const string& s);

};

