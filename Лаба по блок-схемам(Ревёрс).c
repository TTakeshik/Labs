#include <iostream>
#include <stdio.h>

int main()
{
    int ms[] = { 0,1,2,3,4,5,6,7,8,9 };
    for (int i = 0; i < 5; i++)
    {
        int a;
        a = ms[9 - i];
        ms[9 - i] = ms[i];
        ms[i] = a;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", ms[i]);
    }
    return 0;
}