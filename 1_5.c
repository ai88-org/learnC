/*修改温度转换程序，要求以逆序（从300到0）打印温度转换表*/
#include <stdio.h>

main()
{
	int fahr;
	for(fahr = 300;fahr >=0;fahr = fahr - 20)	
		printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr - 32));
}
