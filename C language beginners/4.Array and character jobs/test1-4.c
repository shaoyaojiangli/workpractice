// 有一个 3 * 4 的矩阵，找出其中值最大的元素，及其行列号

#include <stdio.h>
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 12, 7, 8, 9, 10, 11, 6};
    int max = arr[0][0], row, col;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                row = i + 1;
                col = j + 1;
            }
        }
    }
    printf("最大值是%d ,行：%d,列：%d\n", max, row, col);
    return 0;
}