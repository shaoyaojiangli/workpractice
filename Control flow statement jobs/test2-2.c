// 编程计算 1 * 2 * 3 + 3 * 4 * 5 +……+ 99 * 100 * 101 的值。
#include <stdio.h>
int main()
{
    int i = 0;
    int sum = 0;

    for (i = 1; i < 101; i += 2)
        sum += i * (i + 1) * (i + 2);

    printf("1*2*3+3*4*5+......101是：%d", sum);

    return 0;
}