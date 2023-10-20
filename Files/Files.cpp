#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	ifstream eva("file.txt");
	int tmp;
	int count = 0;
	while (eva >> tmp) {
		count++;
	}
	int* mas = new int[count];
	eva.clear();
	eva.seekg(0,ios::beg);
	//eva.close();
	//eva.open("file.txt");
	for (int i = 0; i < count; i++) {
		eva >> mas[i];
		cout << mas[i] << " ";
	}



	delete[] mas;
	eva.close();
	
}