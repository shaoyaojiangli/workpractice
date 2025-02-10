// 写一个函数，其功能是求两个数中较小者。
#include <stdio.h>
int Min(int x, int y);
int main()
{
    int a = 0, b = 0;
    printf("输入'q'退出\n");
    printf("请输入要比较的两个数字：");
    while (scanf("%d %d", &a, &b) == 2)
    {
        int c = Min(a, b);
        printf("这两个数较小的是：%d\n", c);
        printf("请输入要比较的两个数字：");
    }
    return 0;
}
int Min(int x, int y)
{
    return x < y ? x : y;
}