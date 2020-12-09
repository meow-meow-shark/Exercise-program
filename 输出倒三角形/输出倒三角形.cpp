#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (j = 4 - j; j > 0; j--)
			printf("* ");
		printf("\n");
	}
	system("pause");
	return 0;
}
