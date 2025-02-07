// 已知银行定期存款利率为 r = 2.25 %，输入存款本金 x, 存款年数 n，输出本利之和 r = x(1 + r)（1 + r ） .....(1 + r), 共 n 个(1 + r).
#include <stdio.h>
#define R 0.00225
float Sum(float x, int y);
int main()
{
    float x = 0;
    int n = 0;
    printf("请输入本金与存款年数：");
    scanf("%f %d", &x, &n);
    printf("本利之和为：%f", Sum(x, n));
}

float Sum(float x, int y)
{
    float sum = 0;
    float t = x;
    for (int i = 0; i < y; i++)
    {
        sum += x * R;
        x = x * R + x;
    }
    return sum + t;
}