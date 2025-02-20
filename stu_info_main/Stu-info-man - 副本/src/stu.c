#include "stu.h"
extern struct info Stu[N];

void Add_Information()
{
    for (int i = 0; i < N; i++)
    {
        if (Stu[i].id == 0)
        {
            int res = 0;
            int id = 0;
            do
            {
                printf("请输入学生的学号:");
                scanf("%d", &id);
                res = Check_ID(id);
                if (res == 1)
                {
                    printf("学号重复请重新输入:\n");
                }
            } while (res);
            Stu[i].id = id;
            Clear();
            printf("请输入姓名:");
            fgets(Stu[i].name, 20, stdin);
            PerfectFgets(Stu[i].name);
            printf("请输入成绩:");
            scanf("%d", &Stu[i].grades);
            printf("添加成功!\n");
            Prints_StructArray(Stu);
            return;
        }
    }
    printf("空间不足！\n");
}

void Del_Information()
{
    printf("请输入你要删除学生的学号:");
    int id = 0;
    scanf("%d", &id);
    for (int i = 0; i < N; i++)
    {
        if (Stu[i].id == id)
        {
            Stu[i].id = 0;
            strcpy(Stu[i].name, "\0");
            Stu[i].grades = 0;
            printf("删除成功\n");
            Prints_StructArray(Stu);
            return;
        }
    }
    printf("无此人，删除失败\n");
}

void Mod_Information()
{
    printf("请输入你要修改学生的信息:");
    int id = 0;
    scanf("%d", &id);
    for (int i = 0; i < N; i++)
    {
        if (Stu[i].id == id)
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
                    fgets(Stu[i].name, 20, stdin);
                    PerfectFgets(Stu[i].name);
                    goto Flag;
                case 2:
                    printf("请输入新的成绩:");
                    scanf("%d", &Stu[i].grades);
                    goto Flag;
                default:
                    printf("不合法，请重新输入");
                }
            } while (1);
        // Clear();
        // printf("请输入新的姓名:");
        // fgets(Stu[i].name, 20, stdin);
        // PerfectFgets(Stu[i].name);
        // printf("请输入新的成绩:");
        // scanf("%d", &Stu[i].grades);
        // printf("修改成功\n");
        // Prints_StructArray(Stu);
        Flag:
            printf("修改成功！\n");
            Prints_StructArray(Stu);
            return;
        }
    }
    printf("无此人，修改失败\n");
}

void Fin_Information()
{
    printf("请输入你要查找的学生的学号:");
    int id = 0;
    scanf("%d", &id);
    for (int i = 0; i < N; i++)
    {
        if (Stu[i].id == id)
        {
            printf("学号\t姓名\t成绩\t\n");
            printf("%d\t%s\t%d\t\n", Stu[i].id, Stu[i].name, Stu[i].grades);
            return;
        }
    }
    printf("无此人，查找失败\n");
}

void Sort_Information()
{
    printf("-----1.按学号排序---2.按成绩排序-----");
    int flag = 0;
    scanf("%d", &flag);
    switch (flag)
    {
    case 1:
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = 0; j < N - 1 - i; j++)
            {
                if (Stu[j].id > Stu[j + 1].id)
                {
                    struct info stu = Stu[j];
                    Stu[j] = Stu[j + 1];
                    Stu[j + 1] = stu;
                }
            }
        }
        break;
    case 2:
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = 0; j < N - 1 - i; j++)
            {
                if (Stu[j].grades < Stu[j + 1].grades)
                {
                    struct info stu = Stu[j];
                    Stu[j] = Stu[j + 1];
                    Stu[j + 1] = stu;
                }
            }
        }
        break;
    }
    Prints_StructArray(Stu);
}