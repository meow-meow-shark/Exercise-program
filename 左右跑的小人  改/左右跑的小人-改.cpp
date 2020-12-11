#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	int i,j,time,jl,pd;
	printf("输入小人运动速度(毫秒/帧):");
	scanf_s("%d", &time);
	system("cls");
	printf("输入小人运动距离:");
	scanf_s("%d", &jl);
	system("cls");
start:
	printf("输入小人运动方向\n1.从右向左\n2.从左向右\n3.一个来回\n");
	scanf_s("%d", &pd);
	if (pd == 1)
	{
		i = 0;
		while (i <= jl)
		{
			system("cls");
			j = 0;
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf(" 0+0");
			j = 0;
			printf("\n");
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf("；++；");
			printf("\n");
			j = 0;
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf(" ] [");
			Sleep(time);
			i++;
		}
	}
	if (pd == 2)
	{
		i = jl;
		while (i >= 0)
		{
			system("cls");
			j = 0;
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf(" 0+0");
			j = 0;
			printf("\n");
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf("；++；");
			printf("\n");
			j = 0;
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf(" ] [");
			Sleep(time);
			i--;
		}
	}
	if (pd == 3)
	{
		i = 0;
		while (i <= jl)
		{
			system("cls");
			j = 0;
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf(" 0+0");
			j = 0;
			printf("\n");
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf("；++；");
			printf("\n");
			j = 0;
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf(" ] [");
			Sleep(time);
			i++;
		}
		i = jl;
		while (i >= 0)
		{
			system("cls");
			j = 0;
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf(" 0+0");
			j = 0;
			printf("\n");
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf("；++；");
			printf("\n");
			j = 0;
			while (j <= i)
			{
				printf(" ");
				j++;
			}
			printf(" ] [");
			Sleep(time);
			i--;
		}
	}
	else if(pd != 1 && pd != 2 && pd != 3)
	{
		printf("请不要乱输！\n");
		printf("5秒后返回");
		Sleep(5000);
		system("cls");
		goto start;
	}
	printf("\n");
	system("pause");
	return 0;
}
