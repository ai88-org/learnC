#include<stdio.h>

#define OUT 0
#define IN 1
#define MAX 100 /*设定最长的单词长度为100*/

int main()
{
	// 直方图的X轴
	int word_len_arr[MAX],c,state,i,word_count,max_word_num;

	state = OUT;
	word_count = 0;
	max_word_num = 0;
	for(i = 1;i<=MAX;++i)
	{
		word_len_arr[i] = 0;	
	}

	// 统计
	while((c = getchar()) != EOF)	
	{
		if(c == ' ' || c == '\n' || c == '\t')	
		{
			// 说明上一个单词结束了，将其对应的数组计数+1
			if(state == IN && word_count > 0 && word_count <= MAX)
			{
				word_len_arr[word_count]++;	
			}
			state = OUT;
			word_count = 0;	
		}
		else
		{
			state = IN;
			++word_count;	
		}
	}

	// 输出
	// 我们设置了100行，但是有可能最长的单词就50多，我们也就没必要输出50多行之后的了
	for(i = 1;i <= MAX;++i)
	{
		if(word_len_arr[i] > 0)	
		{
			max_word_num = i;
		}
	}

	// 最多的一行开始打印
	for(i = max_word_num;i>0;i--)
	{
		printf("%03d|",i);	
		for(int j=0;j<word_len_arr[i];j++)
		{
			printf("*");	
		}
		printf("\n");
	}
			
}
