// 编写程序，将用户输入的字符串中的所有的字符 a 用指定字符作代替，然后输出
#include <stdio.h>
#include <stdlib.h>
void replace(char *st, char a);
int main()
{
    char a;
    char *str = (char *)malloc(sizeof(char) * 100);
    printf("请输入一串字符以及将要把a覆盖的字符:");
    while (scanf("%s %c", str, &a) && *str != 0)
    // while (scanf("%s %c", str, &a))
    {

        printf("请输入一串字符以及将要把a覆盖的字符:\n");
        printf("覆盖前的字符串是：%s\n", str);
        replace(str, a);
        printf("覆盖后的字符串是：%s\n", str);
    }
}
void replace(char *st, char a)
{

    while (*st != '\0')
    {
        if (*st == 'a')
            *st = a;
        st++;
    }
}