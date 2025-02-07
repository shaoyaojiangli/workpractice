// 写一个功能函数。字符串的连接。 "hello" "world"把两个字符串连接成一个字符串，并且返回连接好的字符串的首地址。 //仿写：char *strcat(char *dest, const char *src)

#include <stdio.h>
char *connect(char *p1, char *p2);
int main()
{
    char s1[80], s2[40];
    printf("请输入两个字符串：");
    scanf("%s%s", s1, s2);
    printf("%s", connect(s1, s2));
    return 0;
}

char *connect(char *p1, char *p2)
{
    int i, j;
    char *q = p1;
    for (i = 0; p1[i] != '\0'; i++)
        ;
    for (j = 0; p2[j] != '\0'; j++)
    {
        p1[i] = p2[j];
        i++;
    }
    p1[i] = '\0';
    return q;
}
