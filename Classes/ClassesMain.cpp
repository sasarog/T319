#include "Student.h"
using namespace std;
void f(Chelovek* c) {
	c->print();
}
void f(Student* c) {
	c->print();
}


int main() {
	const Student eva("EVA", 20, 8);
	eva.print();
	Chelovek adam("ADAM", 30);
	//f(&eva);
}