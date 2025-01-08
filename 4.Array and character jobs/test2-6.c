// 按以下输出格式打印杨辉三角的前 10 行
#include <stdio.h>
#define ROW 10
#define COL 10
int main()
{
    char arr[ROW][COL] = {0};
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            arr[i][j] = ' ';
    for (int i = 0; i < ROW; i++)
        arr[i][i] = 1; // 将主对角线置为1
    for (int i = 0; i < COL; i++)
        arr[i][0] = 1; // 将第一列置为1

    for (int m = 2; m < ROW; m++) // 第1，2，3，4层斜对角循环
    {
        for (int i = m, j = 1; i < ROW; i++, j++) // 斜对角内循环
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            // 斜对角内加和赋值
        }
    }
    printf("输出的杨辉三角：\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}