// 输入一个字符，如果是大写字母则，将其以小写形式输出，如果是小写字母，则将其以大写形式输//出。如果不是英文字母，则原样输出。

#include <stdio.h>
int main()
{
    char i;
    printf("请输入一个字母：");
    scanf("%c", &i);
    if (i >= 65 && i <= 90)
        printf("输入为大写字母 %c,转化为小写字母 %c", i, i + 32);

    else if (i >= 97 && i <= 122)
        printf("输入为小写字母 %c,转化为大写字母 %c", i, i - 32);
    else
        printf("请输入合法字符");
    return 0;
}