// 小猴摘了很多桃子，第一天吃了一半又多吃一个，第二天又吃掉一半再多吃一个，如此下去，到第真//十天恰好还剩一个桃子。问第一天小猴摘了多少桃子？

#include <stdio.h>
int main()
{
    int i, sum, d;
    i = 1;
    d = 9;
    while (d > 0)
    {
        sum = 2 * (i + 1);
        i = sum;
        d--;
    }
    printf("第一天摘了%d个桃子\n", sum);
    return 0;
}