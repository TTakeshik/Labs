#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define N 100

int main(void)
{
setlocale(LC_ALL, "Russian");
int mas[N];
int n;
int kol = 5;
printf("Введите кол-во элементов в массиве: ", N-1);
scanf_s("%d", &n);
printf("Заполните массив:");
for (int i = 0; i < n; i++)
scanf_s("%d", &mas[i]);
for (int i = 0; i < n; i++)
{
for (int x = 0; x < n; x++) {
if (mas[i] < mas[x]) {
int a;
a = mas[i];
mas[i] = mas[x];
mas[x] = a;
}
}
}
for (int i = 5; i < n; i++)
printf("%d", mas[i]);

}
