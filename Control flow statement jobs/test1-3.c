// 输出所有 200 - 400 以内能被 3 整除且个位数字为 7 的整数。

#include <stdio.h>
int main()
{
    int i = 0;
    for (i = 200; i <= 400; i++)
    {
        if (!(i % 7) && i % 10 == 7)
            printf("%d ", i);
    }
    return 0;
}
