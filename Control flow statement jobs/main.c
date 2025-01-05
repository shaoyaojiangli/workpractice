#include <stdio.h>

extern int Add(int x, int y);

int main()
{
    int a = 20;
    int b = 30;
    int sum = Add(a, b);
    printf("%d", sum);

    return 0;
}