// 输出 100 到 200 以内的所有素数（只能被本身或则 1 整除的数）

#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    for (i = 100; i <= 200; i++)
    {
        int flag = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d是素数\n", i);
    }
    return 0;
}