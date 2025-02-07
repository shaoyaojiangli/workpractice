// 使用递归实现十进制转二进制
#include <stdio.h>
void fun(int n);
int main()
{
    int a = 0;
    printf("请输入一个十进制数:");
    scanf("%d", &a);
    fun(a);
    return 0;
}
void fun(int n)
{
    if (n == 0)
        return;
    int a = n % 2;
    n /= 2;
    fun(n);
    printf("%d", a);
}