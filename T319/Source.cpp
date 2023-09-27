#include <iostream>

using namespace std;

void selectSort(int mas[], int rasmer) {
	//Сортировка выбором
	for (int i = 0; i < rasmer; i++) {
		//индекс минимального 
		int indexMin = i;
		//Находим минимальный элемент при помощи цикла
		for (int k = i; k < rasmer; k++) {
			//Определяем, является ли элемент меньше, чем iтый
			if (mas[k] < mas[indexMin]) {
				indexMin = k;
			}
		}
		//Меняем итый и минимальный
		swap(mas[i], mas[indexMin]);

	}
}

void insertionSort(int mas[], int rasmer) {
	//Сортировка вставками
	//Проходим по массиву слева направо
	for (int i = 1; i < rasmer; i++) {
		//Берём элемент, и, сравниваем со всеми левыми элементами
		for (int k = i; k > 0; k--) {
			//Если элемент меньше левого
			if (mas[k] < mas[k - 1]) {
				//Они меняются местами
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


























