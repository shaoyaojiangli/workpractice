// 编写一个程序，该程序使用一个函数来计算用户输入的 5 个 float 值得平均值。
#include <stdio.h>
#define N 5
// float div(float arr[]);
float div(float *p);
int main()
{
    float arr[N];
    float *p = arr;
    printf("请输入5个小数:");
    for (int i = 0; i < 5; i++)
        scanf("%f", &arr[i]);
    float d = div(arr);
    printf("平均值是：%f\n", d);
    return 0;
}
float div(float *p)
{
    float sum;
    for (int i = 0; i < 5; i++)
        sum += p[i];
    return sum / 5;
}