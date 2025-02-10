// 一篇文章，有三行文字，每行有 80 个字符。
// 要求统计出其中英文大写字母、小写字母、数字、空格以及其他字符的个数。
// （二维数组）

#include <stdio.h>
#define ROW 3
#define COL 80
int main()
{
    int Z = 0, z = 0, dig = 0, space = 0, o = 0;
    char arr[ROW][COL];
    for (int i = 0; i < 3; i++)
    {
        printf("请输入第%d行文字:", i + 1);
        fgets(arr[i], COL + 1, stdin);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; arr[i][j] != '\n'; j++)
        {
            if (arr[i][j] >= 'A' && arr[i][j] <= 'Z')
                Z++;
            else if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
                z++;
            else if (arr[i][j] >= '1' && arr[i][j] <= '9')
                dig++;
            else if (arr[i][j] == ' ')
                space++;
            else
                o++;
        }
    }
    printf("大写字母:%d\n小写字母:%d\n数字:%d\n空格:%d\n其他字符:%d\n",
           Z, z, dig, space, o);
    return 0;
}