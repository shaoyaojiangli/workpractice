// 编写符号函数：
//                   1      x > 0
//    sign(x) =      0      x = 0
//                   -1     x < 0
// 在主函数中输入一个整数，调用 sign 函数并输出其符号函数的值。

#include <stdio.h>
int Sign(int x);
int main()
{
    int a = 0, res = 0;
    printf("请输入一个整数(q结束):");
    while (scanf("%d", &a))
    {
        res = Sign(a);
        printf("其函数符号的值是：%d\n", res);
        printf("请输入一个整数(q结束):");
    }
    return 0;
}

int Sign(int x)
{
    if (x > 0)
        return 1;
    else if (x < 0)
        return -1;
    else
        return 0;
}