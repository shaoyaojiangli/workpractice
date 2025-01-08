// 将 n 个整数由小到大排序。
#include <stdio.h>
int main()
{
    int n = 0, tmp = 0;

    printf("你要输入的个数：");
    scanf("%d", &n);
    int arr[n];
    printf("请输入要排序的数列：");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}