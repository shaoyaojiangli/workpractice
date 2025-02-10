// 输入一行字符串，统计其中有多少个单词，单词之间用空格分开。

#include <stdio.h>
#define N 10
int main()
{
    char arr[N];
    printf("请输入一串字符：");
    fgets(arr, 10, stdin);
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z' ||
            arr[i] >= 'a' && arr[i] <= 'z')
        {
            printf("%c ", arr[i]);
            count++;
        }
    }
    printf("\n共有%d个字母\n", count);
    return 0;
}