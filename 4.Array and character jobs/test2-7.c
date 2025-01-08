// 不使用 strlen 函数，实现字符串的求长度，复制，比较，连接。

#include <stdio.h>
#define N 15
int main()
{
    int count = 0;
    char str1[N] = {0};
    char str2[N] = {0};
    char str3[N] = {0};
    printf("请输入str1字符串：");
    fgets(str1, 15, stdin);
    while (str1[count] != '\n') // 求长度
        count++;
    printf("字符串长度为：%d\n", count);
    for (int i = 0; i < N; i++) // 将str1中的数据复制到str2中
        str2[i] = str1[i];
    printf("str2字符串为:%s", str2);
    int flag = 1;
    for (int i = 0; i < N; i++) // 求是否相等
    {
        if (str1[i] != str2[i])
        {
            printf("字符串不相同\n");
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("字符串相同\n");
    int n = 0;
    while (str2[n] != '\n')
    {
        str1[count++] = str2[n++];
    }
    str1[count] = '\0';
    printf("拼接后字符串为%s\n", str1);
    return 0;
}