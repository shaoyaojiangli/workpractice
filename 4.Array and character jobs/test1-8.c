// 输入密码, 设置一个密码，
// 然后输入密码，机会为 3 次，三次密码错误就直接退出

#include <stdio.h>
int main()
{
    char str[7] = {0}, sec[7] = "123456";
    int count = 1, f = 0;
    printf("请输入密码：");
    while (count <= 3)
    {
        // fgets(str, 15, stdin);
        scanf("%s", str);

        for (int i = 0; i < 7; i++)
        {
            if (str[i] == sec[i])
                f++;
            else
                break;
        }
        if (f == 7)
        {
            printf("密码正确！\n");
            break;
        }
        printf("您还有%d次输入机会", 3 - count);
        count++;
    }
    return 0;
}