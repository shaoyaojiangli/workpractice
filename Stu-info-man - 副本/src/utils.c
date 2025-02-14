#include "utils.h"

extern struct info Stu[N];

int Menu1()
{

    int chs1 = 0;
    printf("-----1.登录-----2.注册-----3.退出-----\n");
    scanf("%d", &chs1);
    return chs1;
}

void Menu2()
{
    Prints_StructArray(Stu);
    while (1)
    {
        printf("-----1.增加---2.删除---3.修改---4.查找---5.排序---6.退出-----\n");
        int chs2 = 0;
        scanf("%d", &chs2);
        switch (chs2)
        {
        case 1:
            // 增
            Add_Information();
            break;
        case 2:
            // 删
            Del_Information();
            break;
        case 3:
            // 改
            Mod_Information();
            break;
        case 4:
            // 查
            Fin_Information();
            break;
        case 5:
            // 排序
            Sort_Information();
            break;
        case 6:
            // 退出
            return;
        default:
            printf("输入有误，请重新输入\n");
            break;
        }
    }
}

void Clear()
{
    while (getchar() != '\n')
        ;
}

void PerfectFgets(char *p)
{
    while (*p != '\n')
        p++;
    *p = '\0';
}

void Prints_StructArray(struct info *p)
{
    printf("学号\t姓名\t成绩\t\n");
    for (int i = 0; i < N; i++)
    {
        if (p[i].id == 0)
            continue;
        printf("%d\t%s\t%d\t\n", p[i].id, p[i].name, p[i].grades);
    }
}

int Check_ID(int a)
{
    for (int i = 0; i < N; i++)
    {
        if (Stu[i].id == a)
        {
            return 1;
        }
    }
    return 0;
}
