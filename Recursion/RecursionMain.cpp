#include <iostream>

using namespace std;

double factorial(double f) {
	if (f <= 0) {
		return 1;
	}
	return f * factorial(f - 1);
}
int main() {
	cout << factorial(5);
	return 0;
}