// 有 10 个按从小到大顺序排好的数，要求输入一个新的数，并按原来的规律将它插入数组中。
#include <stdio.h>
#define N 10
int main()
{
    int arr[N] = {3, 5, 12, 14, 23, 34, 67, '\0'};
    int i = 0, n = 0, j = 0;
    printf("原始数据：");
    for (i = 0; arr[i] != '\0'; i++)
        printf("%d ", arr[i]);
    printf("\n您输入了%d个元素\n", i);
    printf("请输入一个要插入的元素：");
    scanf("%d", &n);
    for (j = 0; j < i; j++)
    {
        if (arr[j] >= n)
            break;
    }
    for (i -= 1; i >= j; i--)
        arr[i + 1] = arr[i];
    arr[i + 1] = n;
    printf("插入后数据：");
    for (i = 0; arr[i] != '\0'; i++)
        printf("%d ", arr[i]);
    return 0;
}