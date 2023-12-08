#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	string eva = "123a456a78a9";
	//getline(cin,eva);
	//eva.resize(4);
	//eva.clear();
	//eva.insert(4, "qwe");
	//eva.replace(2, 2, "ddss");
	cout << eva.find_last_of("a",9);
				// abc abd
	// 1 4 5 7 9

}