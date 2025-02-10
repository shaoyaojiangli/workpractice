// 水果营销商卖水果，苹果 5 块一斤，葡萄 6.8 块 1 斤，香蕉 5.2 一斤，消费者输入买入 斤数即可得到总价，利用程序实现

#include <stdio.h>
#define APPLE 5.0
#define BANANA 5.2
#define GRAPE 6.8
float App_Price();
float Ban_Price();
float Gra_Price();
struct Fruit
{
    char name[20];
    float unit;
    float height;
    float money;
};

int main()
{
    struct Fruit fru[3] = {{"苹果", APPLE, 0, 0},
                           {"葡萄", GRAPE, 0, 0},
                           {"香蕉", BANANA, 0, 0}};
    int kind = 0;
    printf("请输入你想要买的水果(1->苹果,2->葡萄,3->香蕉:");
    while (kind == 1 || kind == 2 || kind == 3)
    {
        printf("请输入你想要买的水果(1->苹果,2->葡萄,3->香蕉:");
        scanf("%d", &kind);
        switch (kind)
        {
        case 1:
            printf("你要购买多少苹果:");
            scand("%f", &fru[0].height);
            fru[0].money = App_Price(fru[0].height);
            printf("你购买苹果一共花了%f元", fru[0].money);
            break;
        case 2:
            printf("你要购买多少葡萄:");
            scand("%f", &fru[1].height);
            fru[1].money = Gra_Price(fru[1].height);
            printf("你购买葡萄一共花了%f元", fru[1].money);
            break;
        case 3:
            printf("你要购买多少香蕉:");
            scand("%f", &fru[2].height);
            fru[2].money = Ban_Price(fru[2].height);
            printf("你购买香蕉一共花了%f元", fru[2].money);
            break;
        }
    }
}

float App_Price()
{
}
float Gra_Price()
{
}
float Ban_Price()
{
}
