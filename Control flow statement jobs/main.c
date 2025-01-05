#include <stdio.h>

extern int Add(int x, int y);

int main()
{
    int a = 78;
    int b = 23;
    int sum = Add(a, b);
    printf("%d", sum);

    return 0;
}