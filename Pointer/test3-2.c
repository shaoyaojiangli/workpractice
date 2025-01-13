// 利用指针 p 将一篇文章三行字符串，进行输入，并统计输入的大写小写，以及数字，空格，和其他字符的个数。
#include <stdio.h>
#define ROW 3
#define COL 20
int main()
{
    int Z = 0, z = 0, dig = 0, space = 0, o = 0;
    char str[ROW][COL];
    char(*p)[COL] = str;
    for (int i = 0; i < 3; i++)
    {
        printf("请输入第%d行字符串:", i + 1);
        fgets((char *)(p + i), 20, stdin);
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL && (*(*(p + i) + j)) != '\n'; j++)
        {
            if (*(*(p + i) + j) >= 'A' && *(*(p + i) + j) <= 'Z')
                Z++;
            else if (*(*(p + i) + j) >= 'a' && *(*(p + i) + j) <= 'z')
                z++;
            else if (*(*(p + i) + j) >= '1' && *(*(p + i) + j) <= '9')
                dig++;
            else if (*(*(p + i) + j) == ' ')
                space++;
            else
                o++;
        }
    }
    printf("您输入的内容是:\n");
    for (int i = 0; i < 3; i++)
        fputs((char *)(p + i), stdout);
    printf("其中\n大写字母:%d\n小写字母:%d\n数字:%d\n空格:%d\n其他字符:%d\n", Z, z, dig, space, o);
    return 0;
}