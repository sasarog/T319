#include <iostream>
#include <string>
#include <algorithm>
#include <Windows.h>
using namespace std;
void bubble_sort(int* p, int n)
{
	int temp, i, j, k;
	for (i = 0; i < n - 1; i++) // Выберите наибольшее число и поместите его позади
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}
void mergearray(int a[], int first, int mid, int last, int temp[])
{
	int i = first, m = mid;
	int j = mid + 1, n = last;
	int k = 0;
	while (i <= m && j <= n) // Сравните первую половину со второй половиной и введите меньшую во вспомогательный массив temp []
	{
		if (a[i] <= a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}

	while (i <= m) // Продолжаем вставлять остальные без сравнения
		temp[k++] = a[i++];

	while (j <= n)
		temp[k++] = a[j++];

	for (i = 0; i < k; i++)
		a[first + i] = temp[i];
}
void mergesort(int p[], int first, int last, int temp[])
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		mergesort(p, first, mid, temp); // по порядку слева
		mergesort(p, mid + 1, last, temp); // упорядочено справа
		mergearray(p, first, mid, last, temp); // Снова объединить два порядковых столбца
	}
}
void quick_sort(int* p, int left, int right)
{
	int i, j, temp; // temp сохраняет базовое число
	if (left < right)
	{
		i = left; j = right;
		temp = p[left];
		while (i < j)
		{
			while (p[j] >= temp && i < j) // Сначала находим правую сторону
				j--;
			if (i < j)
				p[i++] = p[j];
			while (p[i] <= temp && i < j) // Найдите левый
				i++;
			if (i < j)
				p[j--] = p[i];
			p[i] = temp; // Возвращаем ссылочный номер

		}
		quick_sort(p, left, i - 1);
		quick_sort(p, i + 1, right);
	}
}
void shell_sort(int* p, int n) // приращение Кнута
{
	int temp, h = 1, i, j;
	while (h < n / 3)
		h = 3 * h + 1;//1，4，13，40……
	while (h >= 1)
	{
		for (i = h; i < n; i++) // Вставляем [i] в [i-j], a [i-2 * j] ……
		{
			for (j = i; j >= h && p[j] < p[j - h]; j -= h)
			{
				temp = p[j];
				p[j] = p[j - h];
				p[j - h] = temp;
			}
		}
		h = h / 3;
	}
}
void selection_sort(int* p, int n)
{
	int i, j, k, temp;
	for (i = 0; i < n - 1; i++) // выбираем наименьшее число
	{
		k = i; // k-й наименьший элемент
		for (j = i + 1; j < n; j++)
		{
			if (p[k] > p[j])
				k = j;
		}
		if (i != k)
		{
			temp = p[k];
			p[k] = p[i];
			p[i] = temp;
		}
	}
}
void insertion_sort(int* p, int n)
{
	int i, j, temp;
	for (i = 1; i < n; i++) // i в порядке
		for (j = i; j > 0; j--)
		{
			if (p[j - 1] > p[j]) // Сравниваем и обмениваемся с предыдущим элементом, и, наконец, достигаем позиции в последовательности, которая эквивалентна вставке в эту позицию
			{
				temp = p[j];
				p[j] = p[j - 1];
				p[j - 1] = temp;
			}
		}
}
void zapolnit(int* mas, int size) {
	for (int i = 0; i < size; i++) {
		mas[i] = rand();
	}
}
enum vibor {
	buble,
	insertion,
	selection,
	shell,
	quick,
	merges
};
void otsort(int* mas, int size, vibor vib) {
	switch (vib)
	{
	case buble:
		bubble_sort(mas, size);
		break;
	case insertion:
		insertion_sort(mas, size);
		break;
	case selection:
		selection_sort(mas, size);
		break;
	case shell:
		shell_sort(mas, size);
		break;
	case quick:
		quick_sort(mas, 0, size - 1);
		break;
	case merges:
		int* a = new int[size];
		mergesort(mas, 0, size - 1, a);
		break;

	}
}
int main()
{
	//Создание массива
	int size = 5000;
	int* mas = new int[size];
	//начало отсчёта
	clock_t start = clock();
	//сортировка 1000 раз
	for (int i = 0; i < 1000; i++) {
		zapolnit(mas, size);
		//cout << i << endl;
		otsort(mas, size, vibor::merges);
	}
	clock_t konec = clock();
	cout << " " << double(konec - start) / 1000 << " s" << endl;

	system("pause");
	return 0;
}
