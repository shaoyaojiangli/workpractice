// 编写一个函数，使得输入的一个字符串逆序存放。
#include <stdio.h>
void Reversal(char ar[]);
int main()
{
    printf("请输入一串字符串:");
    char arr[20];
    fgets(arr, 20, stdin);
    Reversal(arr);
    char *n = arr;
    printf("字符串逆序后为:%s", n);
    return 0;
}
void Reversal(char ar[])
{
    char *q = ar;
    char *p = ar;
    while (*q != '\n')
        q++;
    *q = '\0';
    q--;
    while (*q != *p)
    {
        char tmp = *p;
        *p = *q;
        *q = tmp;
        p++;
        q--;
    }
}