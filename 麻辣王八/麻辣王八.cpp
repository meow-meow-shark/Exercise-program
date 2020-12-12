#include<stdio.h>
#include<stdio.h>
#include<windows.h>
int main()
{
	int a,b,c,d;
	printf("是否开始制作麻辣王八？\n1.是\n2.否\n");
	scanf_s("%d", &a);
	system("cls");
	if (a == 1) {
		printf("选择一种方式开始\n1.菜刀\n2.棍子\n");
		scanf_s("%d", &b);
		system("cls");
		if (b == 1) {
		printf("你拿起了菜刀\n");
			Sleep(1000);
			printf("王八这么可爱，你真的忍心杀吗？\n1.忍心！\n2.不忍心\n");
			scanf_s("%d",&c);
			system("cls");
			if (c == 1) {
				printf("你这个狠心的人，你杀死了王八\n起锅烧油\n");
				Sleep(1000);
				printf("麻辣王八做好了，要吃吗？\n1.吃！\n2.先不吃\n");
				scanf_s("%d",&d);
				system("cls");
				if (d == 1) {
					printf("你被王八烫嘴了，你不能吃了\n按任意键结束");
					getchar();
					getchar();
				}
				else if (d == 2) {
					printf("王八凉了，你吃了王八，你变得高兴\n按任意键继续");
					getchar();
					getchar();
					Sleep(1000);
					printf("但是你的良心真的过得去吗");
						Sleep(8000);
				}
			}
			else if (c == 2) {
				printf("你真是个好人，你放走了王八\n按任意键结束");
				getchar();
				getchar();
			}

		}
		else if (b == 2) {
			printf("你拿起了棍子\n");
			Sleep(1000);
			printf("王八咬了你一口，你需要去医务室！\n按任意键结束 ");
				getchar();
				getchar();
		}
	}
	else if (a == 2) {
		printf("王八跑了\n");
		printf("按任意键结束");
		getchar();
		getchar();
	}
}
