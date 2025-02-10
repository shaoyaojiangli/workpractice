// 别给出 3 个学生的 4 门课程的成绩，求其中的最高成绩、各门课程的平均成绩和总平均成绩。

#include <stdio.h>
#define ROW 3
#define COL 4
int main()
{

    int max = 0, esum = 0, csum = 0, msum = 0;
    float div = 0, sdiv = 0;
    int arr[ROW][COL];
    printf("请输入学生成绩：");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            scanf("%d", &arr[i][j]);
    }
    for (int i = 0; i < COL; i++)
    {
        csum += arr[0][i];
        max = arr[0][i] > max ? arr[0][i] : max;
    }
    printf("语文最高分是：%d\n", max);
    for (int i = 0; i < COL; i++)
    {
        msum += arr[1][i];
        max = arr[0][i] > max ? arr[0][i] : max;
    }
    printf("数学最高分是：%d\n", max);
    for (int i = 0; i < COL; i++)
    {
        esum += arr[2][i];
        max = arr[0][i] > max ? arr[0][i] : max;
    }
    printf("英语最高分是：%d\n", max);
    printf("语文平均成绩：%f\n", csum / 4.0);
    printf("数学平均成绩：%f\n", msum / 4.0);
    printf("英语平均成绩：%f\n", esum / 4.0);
    printf("总平均成绩：%f\n", (csum + msum + esum) / 12.0);
    return 0;
}