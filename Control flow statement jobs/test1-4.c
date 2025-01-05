// 使用 break 和 continue 来分别显示一个 4 之后函数就不再打印 i。（i 的变化范围是0 ~10）

#include <stdio.h>
int main()
{

    printf("这是break：");
    int i, j = 0;
    for (i = 0; i <= 10; i++)
    {
        if (i == 5)
            break;
        else
            printf("%d ", i);
    }
    printf("\n");
    printf("这是continue：");
    while (j <= 10)
    {
        if (j > 4)
        {
            j++;
            continue;
        }
        else
        {
            printf("%d ", j);
            j++;
        }
    }
    printf("\n");
    return 0;
}