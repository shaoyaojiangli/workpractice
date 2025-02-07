// 用函数实现求 1 + 1 / 2 + 1 / 3 + 1 / 4 +……1 / n 的值！

#include <stdio.h>
float sum(float x);
int main()
{
    int n = 0;
    printf("请输入n的值:");
    scanf("%d", &n);
    float su = sum(n);
    printf("1 + 1 / 2 + 1 / 3 + 1 / 4 +……1 / n 的值是：%f\n", su);
    return 0;
}
float sum(float x)
{
    float sum = 0;
    for (float i = 1; i <= x; i++)
    {
        sum += 1 / i;
    }
    return sum;
}