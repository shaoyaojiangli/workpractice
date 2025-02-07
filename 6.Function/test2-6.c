// 写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果，两个整数由键盘输入。
#include <stdio.h>
int Max_divisor(int x, int y);
int Min_multiple(int x, int y);
int main()
{
    int a = 0, b = 0;
    int Max = 0, Min = 0;
    printf("请输入两个整数:");
    scanf("%d %d", &a, &b);
    Max = Max_divisor(a, b);
    Min = Min_multiple(a, b);
    printf("这两个整数最大公约数是%d,最小公倍数是%d", Max, Min);
    return 0;
}
int Max_divisor(int x, int y)
{

    int tmp = 0;
    while (y)
    {
        tmp = x % y;
        x = y;
        y = tmp;
    }
    return x;
}
int Min_multiple(int x, int y)
{
    int i = 1;
    while ((x * i) % y)
        i++;
    return x * i;
}