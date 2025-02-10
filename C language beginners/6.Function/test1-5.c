// 从键盘输入一个表示年份的数（1000－4000），判断该年是否闰年，并输出对应提示信息（闰年的计算算法是能被 4 整除，不能被 100 整除，则是闰年，结束；或能被 400 整除，则是闰年，结束）
#include <stdio.h>
int isyear(int x);
int main()
{
    int year = 0;
    printf("请输入一个1000到4000的年份(q退出):");
    while (scanf("%d", &year) == 1)
    {
        int yn = isyear(year);
        if (yn == 1)
            printf("是闰年\n");
        else
            printf("不是闰年\n");
        printf("请输入一个年份(q退出):");
    }
    return 0;
}

int isyear(int x)
{
    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
        return 1;
    else
        return 0;
}