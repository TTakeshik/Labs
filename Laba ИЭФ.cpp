#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define N 100
#define M 100

int main(void)
{
    setlocale(LC_ALL, "Russian");
    int kol = 5;
    int n, m, i, j;
    int ms1[N];
    int ms2[M];
    int ms[N + M];
    printf("Введите кол-во элементво в первом массиве: ");
    scanf_s("%d", &n);
    printf("Введите кол-во элементов во втором массиве: ");
    scanf_s("%d", &m);
    printf("Заполните первый массив: ");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &ms1[i]);
    }
    printf("Заполните второй массив: ");
    for (j = 0; j < m; j++) {
        scanf_s("%d", &ms2[j]);
    }
    for (i = 0, j = 0; j + i < n + m;)
    {
        if (ms1[i] == ms2[j])
        {
            ms[i + j] = ms1[i];
            i++;
            ms[i + j] = ms2[j];
            j++;
        }
        else
            if (ms1[i] < ms2[j])
            {
                ms[i + j] = ms1[i];
                i++;
            }
            else
                if (ms1[i] > ms2[j])
                {
                    ms[i + j] = ms2[j];
                    j++;
                }
    }

    for (i = 0; i < n + m; i++) {
        printf("%d ", ms[i]);
    }


    return 0;
}