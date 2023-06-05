#include <stdio.h>
#include <ctype.h>

#define maxchar 128

int main()
{
	int c,result[maxchar],i,maxvalue;

	maxvalue = 0;
	for(int i=0;i<maxchar;i++)
	{
		result[i] = 0;	
	}

	while((c = getchar()) != EOF)
	{
		++result[c];	
	}

	for(i=0;i<maxchar;i++)
	{
		// 找到最大的有统计的字符
		if(result[i] > 0)
		{
			maxvalue = i;	
		}
	}

	// 从最大的字符开始输出
	for(i = maxvalue;i>0;--i)
	{
		// 可见的字符打印本身，不可见的打印十进制ascii码
		if(isprint(i))
		{
			printf("%c|",i);	
		}else{
			printf("%03d|",i);	
		}
		for(int j=0;j<result[i];++j)
		{
			printf("*");	
		}
		printf("\n");
	}
	
}
