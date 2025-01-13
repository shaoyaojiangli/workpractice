// 仿写字符串函数功能：复制，比较，求长度，以及字符串连接。
#include <stdio.h>
int main()
{
    char str1[20] = "shao";
    char str2[20] = "shaoyao";
    char *a = str1;
    char *b = str2;
    int count;
    while (*a == *b && *a != '\0' && *b != '\0') // 比较
    {
        a++;
        b++;
    }
    if (*a == '\0' && *b == '\n')
        printf("相同\n");
    else
        printf("不同\n");
    a = str1; // 复制
    b = str2;
    for (int i = 0; i < 10; i++)
        *a++ = *b++;
    a = str1;
    printf("复制后%s\n", a);
    while (*a++ != '\0') // 长度
        count++;
    printf("长度%d\n", count);
    a = str1;
    b = str2;
    int n = 0;
    while (*(b + n) != '\0')
        *(a + count++) = *(b + n++);
    *(a + count) = '\0';
    printf("拼接后字符串为%s\n", a);

    return 0;
}
