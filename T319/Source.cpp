#include <iostream>

using namespace std;

void selectSort(int mas[], int rasmer) {
	//���������� �������
	for (int i = 0; i < rasmer; i++) {
		//������ ������������ 
		int indexMin = i;
		//������� ����������� ������� ��� ������ �����
		for (int k = i; k < rasmer; k++) {
			//����������, �������� �� ������� ������, ��� i���
			if (mas[k] < mas[indexMin]) {
				indexMin = k;
			}
		}
		//������ ���� � �����������
		swap(mas[i], mas[indexMin]);

	}
}

void insertionSort(int mas[], int rasmer) {
	//���������� ���������
	//�������� �� ������� ����� �������
	for (int i = 1; i < rasmer; i++) {
		//���� �������, �, ���������� �� ����� ������ ����������
		for (int k = i; k > 0; k--) {
			//���� ������� ������ ������
			if (mas[k] < mas[k - 1]) {
				//��� �������� �������
				swap(mas[k], mas[k - 1]);
			}
		}
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	const int RAMZES = 5;
	int mass[RAMZES];

	for (int i = 0; i < RAMZES; i++)
	{
		mass[i] = rand() % 100;
		cout << "mass[" << i << "] = " << mass[i] << endl;
	}
	
	

	
}


























