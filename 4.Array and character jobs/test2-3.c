// 输入 10 进制数转换为二进制进行输出

#include <stdio.h>
int main()
{
    int n = 0, i = 0;
    int arr[16] = {0};

    printf("请输入一个十进制数：");
    scanf("%d", &n);
    while (n > 0)
    {
        arr[i] = n % 2;
        i++;
        n /= 2;
    }

    printf("二进制数是：");
    for (i = 15; i >= 0; i--)
    {
        if ((i + 1) % 4 == 0)
            printf(" ");
        printf("%d", arr[i]);
    }
}