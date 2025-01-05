// 求 1-1/2+1/3-1/4+……+1/99-1/100 的值

#include <stdio.h>
int main()
{
    int i = 0;
    int s = 1;
    float sum = 0;
    for (i = 1; i < 101; i++)
    {
        sum += 1.0 / i * s;
        s = -s;
    }
    printf("最终的值为:%f", sum);
}