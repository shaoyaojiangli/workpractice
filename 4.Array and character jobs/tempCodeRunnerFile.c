#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, z = 0, k = 0, s = 0, o = 0;
    printf("请输入一串字符：");
    fgets(str, 100, stdin);
    while (str[i] != '\n')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            z++;
        else if (str[i] == ' ')
            k++;
        else if (str[i] >= '1' && str[i] <= '9')
            s++;
        else
            o++;
        i++;
    }
    printf("字母%d个\n空格%d个\n数字%d个\n其他%d个\n", z, k, s, o);
}