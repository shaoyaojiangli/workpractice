// 用 1 元人民币兑换 5 分（20）， 2 分（50）， 1 分（100）的硬币共 50 枚， 每种
// 硬币至少 1 枚，问共有多少种兑换方案， 输出每一种方案三种硬币的数量。

#include <stdio.h>
int main()
{
    int cent5 = 1;
    int cent2 = 1;
    int cent1 = 1;
    int count = 0;
    for (cent5 = 1; cent5 < 20; cent5++)
    {
        for (cent2 = 1; cent2 < 50; cent2++)
        {
            cent1 = 50 - cent5 - cent2;
            if (cent1 + cent2 * 2 + cent5 * 5 == 100)
            {
                printf("5分 = %d个,2分 = %d个,1分 = %d个\n",
                       cent5, cent2, cent1);
                count++;
                        }
        }
    }
    printf("一共有%d种换法\n", count);
    return 0;
}