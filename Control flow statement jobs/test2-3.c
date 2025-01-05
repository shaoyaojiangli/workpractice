// 打印所有水仙花数。所谓水仙花是指一个三位数，其各位数字的立方和等于该数。
// 例如：153 = 1 * 1 * 1 + 5 * 5 * 5 + 3 * 3 * 3 = 1 + 125 + 27

#include <stdio.h>
int main()
{
    int i;
    int a, b, c;
    for (i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if (a * a * a + b * b * b + c * c * c == i)
        {
            printf("%d是水仙花数\n", i);
        }
    }

    return 0;
}