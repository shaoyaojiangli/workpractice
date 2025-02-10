// 已知 a，b，c 都是 1 位整数，求当三位数 abc + cba 的值为 1333 时 a, b, c 的值。

#include <stdio.h>
int main()
{
    int a, b, c;
    int abc = 0, cba = 0;
    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            for (c = 0; c < 10; c++)
            {
                abc = a * 100 + b * 10 + c;
                cba = c * 100 + b * 10 + a;
                if (abc + cba == 1333)
                    printf("a = %d, b = %d, c = %d\n", a, b, c);
            }
        }
    }
    return 0;
}