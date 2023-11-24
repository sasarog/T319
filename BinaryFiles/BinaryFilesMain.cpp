#include <iostream>
#include "BinaryFile.h"
using namespace std;

struct Chel {
public:
	int age;
	double rost;
	void print() {
		cout << "AGE: " << this->age <<
			"\nRost: " << this->rost
			<< endl;
	}
};
struct avto
{
	
	string nomer;
	bool isEdet;
	avto() {
		nomer = "sdfsdfds";
	}
	avto(string s, bool b) {
		this->nomer = s;
		this->isEdet = b;
	}
	void print() {
		cout <<
			"Nomer: " << nomer <<
			"\nIsEdet: " << boolalpha << isEdet <<
			endl;
	}
};
int main() {
	Chel* eva = new Chel[4]{
		{1,1},
		{2,2},
		{3,3},
		{4,4}
	};

	BinaryFile bf("aboba.bin");
	bf.write(eva[0]);
	for (int i = 1; i < 4; i++) {
		bf.writeApp(eva[i]);
	}
	avto opel = { "OPEL", false };
	bf.writeApp(opel);
	Chel adam;
	for (int i = 0; i < 4; i++) {
		bf.read(adam);
		adam.print();
	}
	avto opel1;
	cout << sizeof(adam);
	bf.read(opel1);
	opel1.print();
}