#ifndef __UTILS_H__
#define __UTILS_H__

// 所需内容
#include "public.h"
#include "stu.h"

// 暴露内容
extern int Menu1();
extern void Menu2();
extern int Check_ID(struct Node *phead, int a);
extern void Prints_StructArray(struct info *p);
extern void PerfectFgets(char *p);
extern void Clear();

extern struct Node *create_node();
extern void printf_node(struct Node *phead);
#endif
