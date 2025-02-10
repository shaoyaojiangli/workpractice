// 一个皮球从 100 米高度自由落下，每次落地后反弹回原高度的一半再落下，再反弹。求当它第 n 次落地式时，共经过了多少米

#include <stdio.h>
float Distance(int n);
int main()
{
    int n = 0;
    printf("请输入他第几次落地:");
    scanf("%d", &n);
    printf("当他第%d次落地时,一共经过了%f米", n, Distance(n));

    return 0;
}
float Distance(int n)
{
    float high = 100;
    float sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += high / 2;
        high /= 2;
    }
    return sum + 100;
}
