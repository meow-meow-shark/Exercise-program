#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define p system("pause");
#define sj(x) (rand()%x) 
void a1(void); void a2(void); void a3(void);
int main(void)
{
	printf("Microsoft Windows [版本 10.0.18363.1198\n(c)2099 Microsoft Corporation。保留所有权利。\n");
	printf("欢迎使用智商检测程序\n");
	printf("1.自动检测\n");
	printf("2.手动检测\n");
	printf("3.人工检测\n");
	printf("输入数字开始程序:");
	int start;
	scanf_s("%d", &start);
	if (start == 1) { a1(); p }
	if (start == 2) { a2(); p }
	if (start == 3) { a3(); p }
}
void a1(void)
{
	system("cls");
	char a[] = { "自动检测即将开始:" };
	char b[] = { "请稍后" };
	char c[] = { "······" };
	int i;
	for (i = 0; i < strlen(a); i++)
	{
		printf("%c", a[i]);
		Sleep(100);
	}
	system("cls");
	for (i = 0; i < strlen(b); i++)
	{
		printf("%c", b[i]);
		Sleep(100);
	}
	system("cls");
	int a4;
	for (a4 = 0; a4 <= 6; a4++) 
	{
		system("cls");
		for (i = 0; i < strlen(c); i++)
		{
			printf("%c", c[i]);
			Sleep(100);
		}
	}
	system("cls");
	printf("\n您的智商为%d\n", sj(150));
}
void a2(void)
{
	system("cls");
	printf("请按提示操作\n");
	p
		printf("请双手平举，静止10秒\n");
	int second;
	for (second = 10; second >= 1; --second)
	{
		printf("%d\n", second);
		Sleep(1000);
	}
	printf("请转动头部");
	printf("您的智商为0");
}
void a3(void)
{
	system("cls");
	Sleep(500);
	printf("哪有人有空管你，弱智!\n");
	Sleep(500);
	printf("您的智商为:-1000000\n");
}
