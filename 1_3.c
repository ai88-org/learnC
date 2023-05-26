#include <stdio.h>

main()
{
	float fahr,celious;
	int lower,upper,step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("this is a title!\n");
	while(fahr < upper){
		celious = (5.0/9.0)*(fahr - 32);	
		printf("%3.0f %6.1f\n",fahr,celious);
		fahr = fahr + step;
	}
}
