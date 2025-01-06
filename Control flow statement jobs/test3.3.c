// 两个乒乓球队进行比赛，各出 3 人。甲对为 A、B、C 3 人，乙队为 X、Y、Z 3 人。已抽签决定比//赛名单。有人向队员打听比赛的名单，A 说他不和 X 比，C 说他不和 X、Z 比，编程找出 3 对//赛手的名单。

#include <stdio.h>
int main()
{
    char a, b, c;
    for (a = 'X'; a <= 'Z'; a++)
    {
        for (b = 'X'; b <= 'Z'; b++)
        {
            for (c = 'X'; c <= 'Z'; c++)
            {
                if (a != b && b != c && c != a)
                {
                    if (a != 'X' && c == 'Y')
                    {
                        printf("A = %c, B = %c, C = %c\n", a, b, c);
                    }
                }
            }
        }
    }

    return 0;
}