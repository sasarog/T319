//#include <iostream>
#include "HasTable.h"
using namespace std;

int main() {
	HasTable eva(15);
	eva.add("Eva", 20);
	eva.add("Adam", 32);
	eva.add("Kain", 15);
	eva.add("Avel", 12);
	eva.add("SIF", 5);
	eva.print();

}