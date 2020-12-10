#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#define e 0
#define f 50
void human(void);
int main(void)
{
	human();
	int a, b, i;
	for (i = 0; i <= 99; i++)
	{
		a = 0;
		while (a <= f)
		{
			system("cls");
			b = 1;
			while (b <= a)
			{
				printf(" ");
				b++;
			}
			printf("  o\n");

			b = 1;
			while (b <= a)
			{
				printf(" ");
				b++;
			}
			printf("-=H=-\n");

			b = 1;
			while (b <= a)
			{
				printf(" ");
				b++;
			}
			printf(" I I\n");

			Sleep(e);
			a++;
		}
		a = f;
		while (a >= 0)
		{
			system("cls");
			b = 1;
			while (b <= a)
			{
				printf(" ");
				b++;
			}
			printf("  o\n");

			b = 1;
			while (b <= a)
			{
				printf(" ");
				b++;
			}
			printf("-=H=-\n");

			b = 1;
			while (b <= a)
			{
				printf(" ");
				b++;
			}
			printf(" I I\n");

			Sleep(e);
			a--;
		}
	}
}
void human(void)
{
    printf("  o\n");
	printf("-=H=-\n");
	printf(" I I\n");
}
