// 写一个函数，其功能是计算 m 到 n(设 m < n) 之间所有整数的和。然后利用它计算并输出 1到 10、10 到 20、400 到 600 的和。
#include <stdio.h>
int sum(int x, int y);
int main()
{
    int m = 0, n = 0;
    printf("请输入两个从小到大的整数(q退出):");
    while (scanf("%d %d", &m, &n) == 2)
    {
        int su = 0;
        su = sum(m, n);
        printf("%d到%d之间所有整数的和是:%d\n", m, n, su);
        printf("请输入两个从小到大的整数(q退出):");
    }
    return 0;
}
int sum(int x, int y)
{
    int sum = 0;
    for (int i = x; i <= y; i++)
        sum += i;
    return sum;
}