#include <stdio.h>
int main()
{
    int a, b, c;
    printf("输入立方体的长宽高（整数）:\n");
    printf("长:"); 
    scanf_s("%d",&a);
    printf("宽:");
    scanf_s("%d", &b);
    printf("高:");
    scanf_s("%d", &c);
    printf("立方体的体积为:%d\n输入单位即为结果单位\n按Enter以结束程序",a*b*c);
    getchar();
    getchar();
}