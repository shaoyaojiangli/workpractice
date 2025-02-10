// 编写一个函数实现该功能：从键盘输入一个字串符， 再输入两个正整数 m 和 n, 输出字符串中从 m 开始， 连续 n 个字符。例如， 输入 abcdefg, 2, 3, 输出 bcd.
#include <stdio.h>
char *Output(char arr[], int m, int n);
int main()
{
        int m = 0, n = 0;
        printf("请输入一串字符串");
        char arr[20];
        fgets(arr, 20, stdin);
        printf("请输入起始值与连续值：");
        scanf("%d %d", &m, &n);
        char *p = Output(arr, m, n);
        printf("%s", p);
        return 0;
}
char *Output(char arr[], int m, int n)
{
        static char ar[20];
        int o = 0;
        for (int i = m - 1; i < m + n - 1; i++)
        {
                ar[o] = arr[i];
                o++;
        }
        ar[o] = '\0';
        return ar;
}