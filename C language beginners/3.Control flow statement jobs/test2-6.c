// 已知银行定期存款利率为 r = 2.25 %，输入存款本金 x,
//      存款年数 n，输出本利之和 r = x(1 + r)
// （1 + r）(1 + r), 共 n 个(1 + r).

#include <stdio.h>
#define r 0.0225
int main()
{
    float x = 0;
    int year = 0;
    float sum = 0;
    int i, j, temp;

    printf("请输入你的本金和存款年数：");
    scanf("%f %d", &x, &year);
    temp = x; // 将本金数值备份
    for (i = 1; i <= year; i++)
    {
        sum += x * r;
        x = x + x * r; // 算利息和
    }
    printf("本息和为：%f", sum + temp); // 本息和
    return 0;
}