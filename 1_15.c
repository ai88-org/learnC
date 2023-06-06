#include <stdio.h>

float fahr(float temp);

int main()
{
	printf("%.2f\n",fahr(17.0));
}

float fahr(float temp)
{
	return (5.0/9.0)*(temp - 32.0);
}
