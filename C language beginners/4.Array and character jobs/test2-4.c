// 将一个 3×3 矩阵转置，（行变列列变行）

// 11 12 13     11 21 31
// 21 22 23     12 22 32
// 31 32 33     13 23 33

#include <stdio.h>
int main()
{
    int arr[3][3] = {{11, 12, 13}, {21, 22, 23}, {31, 32, 33}};
    printf("转置前数组：\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[j][i]);
        printf("\n");
    }
}