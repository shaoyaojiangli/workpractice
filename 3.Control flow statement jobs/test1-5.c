// 写一段程序，输入 x，输出 y 值。
//         x               x < 1
//   y =   2x - 1          1 <= x < 10
//         3x - 11         x >= 10

#include <stdio.h>
int main()
{

    while (1)
    {
        printf("请输入一个数：");
        float x, y;
        scanf("%f", &x);
        if (x < 1)
            y = x;
        else if (x >= 1 && x < 10)
            y = 2 * x - 1;
        else
            y = 3 * x - 11;

        printf("得到的y等于:%f\n", y);
    }
    return 0;
}