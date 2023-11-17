#include <iostream>

using namespace std;

namespace shelovechestvo {
	enum napravlenie {
		sever = 0,
		vostok = 1,
		ug = 2,
		zapad = 3
	};
	struct Chel {
		int age;
		string name;
		napravlenie napr;
		void print() {
			cout << "\nName: " << this->name
				<< "\nAge: " << this->age
				<< endl;
		}
	};
	bool operator<(const Chel& levo, const Chel& pravo) {
		return levo.age < pravo.age;
	}
}

int main() {
	shelovechestvo::Chel eva{ 20,"eva"};
	eva.napr = shelovechestvo::napravlenie::sever;
	shelovechestvo::napravlenie::sever

}