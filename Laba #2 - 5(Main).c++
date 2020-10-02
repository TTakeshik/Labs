#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float a, y, z;
	printf("Y: ");
	scanf_s("%f", &y);
	printf("Z: ");
	scanf_s("%f", &z);
	for (float x = 0; x < 11; x++)
	{
		if (y > 0 && z > 0) a = pow(x, y);
		else if (y < 0 && z < 0) a = pow(x, -y);
		else a = 0;
		printf("%.2f\n", a);
	}
	return 0;
}