#include <stdio.h>
int main()
{
    int a, b, c;
    printf("����������ĳ���ߣ�������:\n");
    printf("��:"); 
    scanf_s("%d",&a);
    printf("��:");
    scanf_s("%d", &b);
    printf("��:");
    scanf_s("%d", &c);
    printf("����������Ϊ:%d\n���뵥λ��Ϊ�����λ\n��Enter�Խ�������",a*b*c);
    getchar();
    getchar();
}