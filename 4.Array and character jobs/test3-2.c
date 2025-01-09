// 打印以下图案：
//     *
//    ***
//   *****
//  *******
//  扩展： 如果打印 N 行，怎么办
#include <stdio.h>
int main()
{
    int row = 0, col = 0;
    int i = 0, j = 0;

    printf("请输入你要打印多少行：");
    scanf("%d", &row);
    col = 2 * row;
    char arr[row][col];
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            arr[i][j] = ' ';

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (j == row - i - 1)
            {
                for (int m = 0; m < 2 * (i + 1) - 1; m++)
                    arr[i][j + 1 + m] = '*';
            }
        }
    }

    // 打印
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%c", arr[i][j]);
        printf("\n");
    }
    return 0;
}