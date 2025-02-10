// 写一个功能函数，求字符串的长度（用指针来实现）。（类比 strlen 库函数）
#include <stdio.h>
#define N 20
int getlength(char *a);
int main()
{
    char arr[N] = {0};
    int len;
    printf("请输入字符串:");
    scanf("%s", arr);
    len = getlength(arr);
    printf("这个字符串长度是:%d", len);
    return 0;
}

int getlength(char *a)
{
    int len = 0;
    while (*a != '\0')
    {
        len++;
        a++;
    }

    return len;
}