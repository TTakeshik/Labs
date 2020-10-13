#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    printf("Введите A: ");
    scanf_s("%d", &a);
    printf("Введите B: ");
    scanf_s("%d", &b);
    printf("Введите С: ");
    scanf_s("%d", &c);
    if (a < 0 || b < 0 || c < 0)
        printf("Функция не может быть выполнена");
    else if (pow(a, 2) + pow(b, 2) == pow(c, 2))
        printf("Треугольник является прямоугольным.");
    else if (pow(b, 2) + pow(c, 2) == pow(a, 2))
        printf("Треугольник является прямоугольным.");
    else if (pow(c, 2) + pow(a, 2) == pow(b, 2))
        printf("Треугольник является прямоугольным.");
    else if (a == b && b == c && c == a)
        printf("Треугольник является равносторонним.");
    else
        printf("Треугольник простой.");

    return 0;
}