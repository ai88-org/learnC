/*统计空格、制表符、换行符个数的程序*/
#include <stdio.h>

int main()
{
	int nb,nt,nl;
	int c;	

	nb = 0;
	nt = 0;
	nl = 0;

	while((c = getchar()) != EOF)
	{
		if(c == '\n')
			++nl;
		if(c == '\t')
			++nt;
		if(c == ' ')
			++nb;
	}
	printf("blank is %d, table is %d, new line is %d.\n",nb,nt,nl);
}
