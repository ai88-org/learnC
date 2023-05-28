#include <stdio.h>
/*mac里面输入control+d就是EOF*/
int main()
{
	int c;
	/*这里为什么c = 0的话，循环就终止了呢?*/
	printf("%d\n",c);
	while(c = 1) 
		printf("%d\n",c);
	printf("%d - at EOF\n",c);
}
