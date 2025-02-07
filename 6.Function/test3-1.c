// 用递归方法求 n!。
#include <stdio.h>
int fun(int n);
int main()
{
    int a = 0;
    printf("请输入一个数:");
    scanf("%d", &a);
    printf("%d!是%d\n", a, fun(a));

    return 0;
}
int fun(int n)
{
    if (n == 1)
        return 1;
    return fun(n - 1) * n;
}