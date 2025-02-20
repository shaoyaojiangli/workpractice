#include "file_info.h"

// 写入
void output_file_stu(struct Node *phead)
{
    FILE *fp = fopen("student.csv", "w");
    if (fp == NULL)
    {
        perror("fopen");
        return;
    }
    if (phead->next == NULL)
    {
        printf("没有数据要写入\n");
        return;
    }
    fprintf(fp, "学号\t姓名\t成绩\n");
    struct Node *ptemp = phead->next;
    while (ptemp != NULL)

    {
        fprintf(fp, "%d\t%s\t%d\n", ptemp->data.id,
                ptemp->data.name,
                ptemp->data.grades);
        ptemp = ptemp->next;
    }
    printf("正在保存。。。。\n");
    sleep(1);
    printf("保存成功\n");
    fclose(fp);
}

// 读取
void input_file_stu(struct Node *phead)
{
    FILE *fp = fopen("student.csv", "r");
    if (fp == NULL)
    {
        printf("没有历史数据\n");
        return;
    }
    fseek(fp, sizeof("学号\t姓名\t成绩"), SEEK_SET);
    while (fgetc(fp) != EOF)
    {
        fseek(fp, -1, SEEK_CUR);
        // 读取数据保存到节点数据域
        struct Node *pnew = create_node();

        // 填充数据
        fscanf(fp, "%d\t%s\t%d\n", &pnew->data.id,
               pnew->data.name,
               &pnew->data.grades);
        // 链接
        struct Node *ptemp = phead;
        while (ptemp->next != NULL)
        {
            ptemp = ptemp->next;
        }
        ptemp->next = pnew;
    }
    fclose(fp);
}