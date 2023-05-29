#include <stdio.h>

#define IN 1
#define OUT 0 

int main()
{
	int c,state;
	state = OUT;	
	while((c = getchar()) != EOF)
	{
		if(c == '\n' || c == '\t' || c == ' ')	
		{
			if(state == IN)	
			{
				state = OUT;
				putchar('\n');// 表示单词的结束	
			}
		}
		else if(state == OUT)
		{
			putchar(c);
			state = IN;
		}
		else
			putchar(c);
	}
}
