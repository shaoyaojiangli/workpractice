#include "utils.h"

int Menu1()
{

    int chs1 = 0;
    printf("-----1.登录-----2.注册-----3.退出-----\n");
    printf("请选择:");
    scanf("%d", &chs1);
    return chs1;
}

void Menu2()
{
    struct Node *phead = create_node(); // 开辟一段空间
    printf_node(phead);                 // 先打印该空间的数据
    while (1)
    {
        printf("-----1.增加---2.删除---3.修改---4.查找---5.排序---6.退出-----\n");
        printf("请选择你对系统的操作:");
        int chs2 = 0;
        scanf("%d", &chs2);
        switch (chs2)
        {
        case 1:
            // 增
            Add_Information(phead);
            break;
        case 2:
            // 删
            Del_Information(phead);
            break;
        case 3:
            // 改
            Mod_Information(phead);
            break;
        case 4:
            // 查
            Fin_Information(phead);
            break;
        case 5:
            // 排序
            Sort_Information(phead);
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

int Check_ID(struct Node *phead, int a)
{
    struct Node *ptemp = phead;
    while (ptemp != NULL)
    {
        if (ptemp->data.id == a)
        {
            return 1;
        }
        ptemp = ptemp->next;
    }
    // printf("没有找到该节点\n");
    return 0;
}

// 创建新节点
struct Node *create_node()
{
    // 开辟空间
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    // 初始化
    memset(p, 0, sizeof(struct Node));
    // 返回开辟后空间地址
    return p;
}

// 打印链表的数据
void printf_node(struct Node *phead)
{
    if (phead->next == NULL)
    {
        printf("链表为空\n");
        return;
    }
    // 第三方指针
    struct Node *ptemp = phead->next;
    printf("\t学号\t姓名\t成绩\t\n");
    while (ptemp != NULL)
    {
        printf("\t%d\t%s\t%d\t\n ", ptemp->data.id, ptemp->data.name, ptemp->data.grades);
        ptemp = ptemp->next;
    }
}