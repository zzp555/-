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
				printf("��%d�֣�%d������%d������%d������\n",num,red,white,black);
			}
		 } 
	}
	
	printf("�ܹ���%d�ֲ�ͬ����ɫ����\n",num);
	 
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

	printf("һ����%d������\n", num);
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

	printf("һ����%d������\n", num);
	
	return 0;
}
*/

/*
#include <stdio.h>
void bubble_sort(int arr[],int len);

int main(void)
{
	int arr[10],i;
	
	printf("������10������\n");
	 
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	bubble_sort(arr,10);
	
	printf("����������������ʾ��\n");
	 
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















































