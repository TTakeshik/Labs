#include <iostream>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, a1, b1, c1;
	const int max1 = 31, max2 = 12;
	printf("Введите первую дату:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > 31 || b > 12)
	{
		printf("Каким календарём ты пользуешься?=/");
		return 0;
	}
	printf("Введите вторую дату:");
	scanf_s("%d%d%d", &a1, &b1, &c1);
	if (a1 > 31 || b1 > 12)
	{
		printf("Каким календарём ты пользуешься?=/");
		return 0;
	}
	else
	{
		printf("1-ая:%d/%d/%d\n2-ая:%d/%d/%d\n", a, b, c, a1, b1, c1);
		float d1, d2;
		d1 = (a - a1) + ((b - b1) * 30) + ((c - c1) * 360);
		if (d1 < 0)
			d1 *= (-1);
		printf("Кол-во в днях:%.0f\n", d1);
		d2 = d1 / 360;
		printf("Кол-во в годах:%.1f", d2);
		return 0;
	}
}