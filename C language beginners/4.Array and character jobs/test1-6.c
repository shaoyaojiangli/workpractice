// 输入一行字符，统计其中大写字母的个数，并将所有的大写字母转化成小写字母后输出。

#include <stdio.h>
int main()
{
    int n = 10;
    char str[n];
    int count = 0;
    printf("请输入一行字符：");
    fgets(str, n, stdin);
    int len = sizeof(str) / sizeof(str[0]);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
            printf("%c ", str[i]);
            count++;
        }
    }
    printf("\n有%d位大写字母", count);
    return 0;
}