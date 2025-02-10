// 用数组实现求 10 个数的和。
#include <stdio.h>
int main()
{
    printf("请输入十个数：\n");
    float sum[10];
    int i = 0;
    float su = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &sum[i]);
    }
    for (i = 0; i < 10; i++)
    {
        su += sum[i];
    }
    printf("这十个数的和是：%f", su);
    return 0;
}