#include "Student.h"
using namespace std;
void f(Chelovek* c) {
	c->print();
}



int main() {
	 Chelovek eva("EVA",20);
	 Chelovek adam("adam", 30);
	 eva.surname = 5;
	 cout << adam.surname;
	//f(&eva);
}