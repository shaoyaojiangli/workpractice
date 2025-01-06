// 求 Sn = a + aa + aaa +……+ aa..aa(n 个 a) 之值，其中 a 是一个数字，n 表示 a 的位数。//例如：2 + 22 + 222 + 2222 + 22222（此时 n = 5），n 由键盘输入。

#include <stdio.h>
int main()
{
    int a, n, x;
    int sum = 0;

    printf("请输入0-9的数字与位数:");
    scanf("%d %d", &a, &n);
    for (int i = 1; i <= n; i++)
    {
        x = x * 10 + a;
        sum += x;
    }
    printf("%d位 %d + %d%d + %d%d%d  ...的和是：%d\n",
           n, a, a, a, a, a, a, sum);
    return 0;
}
