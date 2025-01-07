// 从键盘输入 10 个数，计算并输出它们的最大值、最小值和平均值。
#include <stdio.h>
int main()
{
    int max, min;
    float div;
    int arr[10];
    printf("请输入十个数字：\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        // max = arr[i] >= max ? arr[i] : max;
        // min = arr[i] <= min ? arr[i] : min;

        arr[i] >= max ? max = arr[i] : max;
        arr[i] <= min ? min = arr[i] : min;
        div += arr[i];
    }
    printf("最大值是:%d,最小值是:%d,平均值是:%f", max, min, div / 10);
    return 0;
}