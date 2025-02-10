
// 计算200-400内不能被3整除的数的和
#include <stdio.h>

int main()
{
    int i = 0;
    int sum = 0;
    for (i = 200; i <= 400; i++)
    {
        if (i % 3)
            sum += i;
        else
            continue;
    }
    printf("200-400内不能被3整除的数的和是：%d\n", sum);

    return 0;
}
