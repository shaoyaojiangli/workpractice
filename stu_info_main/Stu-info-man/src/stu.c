#include "stu.h"

void Add_Information(struct Node *phead)
{
    struct Node *pnew = create_node();
    int res = 0;
    int id = 0;
    do
    {
        printf("请输入你要添加的学号:");
        scanf("%d", &id);
        res = Check_ID(phead, id);
        if (res == 1)
        {
            printf("学号重复请重新输入:\n");
        }
    } while (res);
    pnew->data.id = id;
    Clear();
    printf("请输入姓名:");
    fgets(pnew->data.name, 20, stdin);
    PerfectFgets(pnew->data.name);
    printf("请输入成绩:");
    scanf("%d", &pnew->data.grades);
    struct Node *ptemp = phead;
    while (ptemp->next != NULL)
    {
        ptemp = ptemp->next;
    }
    ptemp->next = pnew;
    printf("添加成功！\n");
    printf("当前链表内容是:\n");
    printf_node(phead);
}

void Del_Information(struct Node *phead)
{
    if (phead->next == NULL)
    {
        printf("链表为空\n");
        return;
    }
    printf("请输入你要删除的学号:\n");
    int id = 0;
    scanf("%d", &id);

    struct Node *ptemp = phead;
    while (ptemp->next != NULL)
    {
        if (ptemp->next->data.id == id)
        {
            struct Node *pdel = ptemp->next;
            ptemp->next = ptemp->next->next;
            free(pdel);
            printf("删除成功\n");
            printf_node(phead);
            return;
        }
        ptemp = ptemp->next;
    }
    printf("没有找到该节点\n");
}

void Mod_Information(struct Node *phead)
{
    if (phead->next == NULL)
    {
        printf("链表为空\n");
        return;
    }
    printf("请输入你要修改学生的学号:");
    int id = 0;
    scanf("%d", &id);
    struct Node *ptemp = phead;

    while (ptemp != NULL)
    {
        if (ptemp->data.id == id)
        {
            do
            {
                printf("请选择你要修改的内容:");
                printf("-----1.修改姓名---2.修改成绩-----\n");
                int flag = 0;
                scanf("%d", &flag);
                switch (flag)
                {
                case 1:
                    Clear();
                    printf("请输入新的姓名:");
                    fgets(ptemp->data.name, 20, stdin);
                    PerfectFgets(ptemp->data.name);
                    goto Flag;
                case 2:
                    printf("请输入新的成绩:");
                    scanf("%d", &ptemp->data.grades);
                    goto Flag;
                default:
                    printf("不合法，请重新输入");
                }
            } while (1);
        }
        ptemp = ptemp->next;
    }
    printf("无此人，修改失败\n");
    return;
Flag:
    printf("修改成功！\n");
    printf_node(phead);
    return;
}

void Fin_Information(struct Node *phead)
{
    // 1.判断是否为空
    if (phead->next == NULL)
    {
        printf("链表为空\n");
        return;
    }
    // 2.输入要查找的学号
    printf("请输入你要查找的学号:\n");
    int id = 0;
    scanf("%d", &id);

    // 3.找到要查找的节点
    struct Node *ptemp = phead;
    while (ptemp != NULL)
    {
        if (ptemp->data.id == id)
        {
            printf("\t\t学号\t姓名\t成绩\t\n");
            printf("你查找的数据是:\t%d\t%s\t%d\t\n", ptemp->data.id, ptemp->data.name, ptemp->data.grades);
            return;
        }
        ptemp = ptemp->next;
    }
    printf("没有找到该节点\n");
}

void Sort_Information(struct Node *phead)
{
    if (phead->next == NULL)
    {
        printf("链表为空！\n");
        return;
    }
    printf("-----1.按学号排序---2.按成绩排序-----");
    int flag = 0;
    struct Node *p1 = NULL;
    struct Node *p2 = NULL;
    scanf("%d", &flag);
    switch (flag)
    {
    case 1:
        for (p1 = phead->next; p1 != NULL; p1 = p1->next)
        {
            for (p2 = p1->next; p2 != NULL; p2 = p2->next)
            {
                if (p1->data.id > p2->data.id)
                {
                    struct Node *tmp;
                    tmp->data = p1->data;
                    p1->data = p2->data;
                    p2->data = tmp->data;
                }
            }
        }
        break;
    case 2:
        for (p1 = phead->next; p1 != NULL; p1 = p1->next)
        {
            for (p2 = p1->next; p2 != NULL; p2 = p2->next)
            {
                if (p1->data.grades < p2->data.grades)
                {
                    struct Node *tmp;
                    tmp->data = p1->data;
                    p1->data = p2->data;
                    p2->data = tmp->data;
                }
            }
        }
        break;
    }
    printf_node(phead);
}