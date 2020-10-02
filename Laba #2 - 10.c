#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    float x, Y;
    printf("X: ");
    scanf_s("%f", &x);
    if (x > 0.2)
        Y = pow(x, 2) + (0.5 * x) + 0.2;
    else if (x < 0.2)
        Y = 1;
    printf("%.2f", Y);
    return 0;
}
