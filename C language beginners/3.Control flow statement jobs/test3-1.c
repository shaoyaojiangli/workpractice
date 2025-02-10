// 输入正整数，将正整数分解质因数。质因数要满足两个条件 : 1）是这个数的因数;
// 2）是质数（素数） 如： 6 = 2 * 3 12 = 2 * 2 * 3。

#include <stdio.h>
int main()
{
    int num;
    printf("请输入一个正整数：");
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num /= i;
        }
    }
    return 0;
}
