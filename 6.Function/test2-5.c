// 给一个不多于 5 位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
#include <stdio.h>

char PS(int x, char *q);

int main()
{
    printf("请给出不多于五位正整数:");
    int a = 0;
    char arr[10];
    char *p = arr;
    int many;
    scanf("%d", &a);
    many = PS(a, arr);
    printf("它有%d位数字,逆序后数字为:%s", many, p);

    return 0;
}

char PS(int x, char *q)
{
    char n = 0;

    while (x > 0)
    {
        *q = x % 10 + '0';
        x /= 10;
        n++;
        q++;
    }

    *q = '\0';
    return n;
}