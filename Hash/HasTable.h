#pragma once
#include <iostream>
#include "../SharedPtr/LList.h"
class HasTable
{
private:
	shared_ptr< LList[]> mas = nullptr;
	int size;
	int hashFuction(const string& name);
public:
	HasTable();
	HasTable(int size);
	void add(const string& name, int age);
	void remove(const string& name, int age);
	void print();
	shared_ptr< LLData> find(const string& name);

};

