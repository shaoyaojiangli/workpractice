// 输入一个字符串，判断是否是回文。（回文：这个字符串顺读和反读是一样的。如“abcba”和”123321”都是回文。

#include <stdio.h>
#include <string.h>
#define N 10
int main()
{
    char arr[N] = {0};
    printf("请输入字符串：");
    fgets(arr, 10, stdin);
    int len = strlen(arr) - 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (arr[i] != arr[len - i - 1])
        {
            printf("不是回文\n");
            goto loop;
        }
    }
    printf("是回文\n");
loop:
    return 0;
}