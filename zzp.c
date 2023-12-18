/*
#include <stdio.h>

int main(void)
{
	int num = 0,red,white,black;
	
	for(red = 0;red <= 3;red++)
	{
		for(white = 0;white <= 3;white++)
		{
			black = 8 - red - white;
			if(black<=6 && black>=2)
			{
				num++;
				printf("第%d种：%d个红球；%d个白球；%d个黑球。\n",num,red,white,black);
			}
		 } 
	}
	
	printf("总共有%d种不同的颜色搭配\n",num);
	 
	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	char c_front = ' ', c_now;
	int i = 0,num = 0;
	char s[100];

	gets(s);

	while (s[i] != '\0')
	{
		c_now = s[i];
		if (c_now != ' ' && c_front == ' ')
		{
			num++;
		}
		c_front = c_now;
		i++;
	}

	printf("一共有%d个单词\n", num);
	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	char c_now;
	int i = 0,num = 0,sign = 0;
	char s[100];

	gets(s);

	while (s[i] != '\0')
	{
		c_now = s[i];
		if (c_now != ' ' && sign == 0)
		{
			num++;
			sign = 1;
		}
		else if(c_now == ' ')
		{
			sign = 0;
		}
		i++;
	}

	printf("一共有%d个单词\n", num);
	
	return 0;
}
*/

/*
#include <stdio.h>
void bubble_sort(int arr[],int len);

int main(void)
{
	int arr[10],i;
	
	printf("请输入10个数：\n");
	 
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	bubble_sort(arr,10);
	
	printf("升序后的数组如下所示：\n");
	 
	for(i = 0;i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}

void bubble_sort(int arr[],int len)
{
	int temp,i,j,sign = 0;
	
	for(i = 0;i < len - 1;i++)
	{
		for(j = 0;j < len - 1 - i;j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				sign = 1;
			 } 	
		}
		if(sign == 0)
		{
			break;
			}	
	 } 
	 
}
*/















































