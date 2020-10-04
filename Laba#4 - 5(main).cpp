#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define N 100

void main(void)
{
	setlocale(LC_ALL, "Russian");
	int mas[N];
	int n, i;
	const int kol = 5;
	printf("Введите кол-во элементов в массиве: ", N - 1);
	scanf_s("%d", &n);
	printf("Заполните массив:");
	for (i = 0; i < n; i++)
		scanf_s("%d", &mas[i]);
	int min = mas[0];
	for (int i = 0; i < n; i++)
	{
		for (int x = 0; x < n; x++)
		{
			if (mas[x] < mas[min])
				min = x;
			for (int z = min; z < n; z++)
				mas[z] = mas[z + 1];
		}
	}
	for (int i = 0; i < n - kol; i++)
		printf("%d", mas[i]);

}
