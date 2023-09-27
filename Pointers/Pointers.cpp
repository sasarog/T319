
#include <iostream>

using namespace std;

int main() {

	int rasmer = 10;

	int* mas = new int[rasmer];
	for (int i = 0; i < rasmer; i++) {
		mas[i] = rand();
		cout << mas[i] << endl;

	}


}