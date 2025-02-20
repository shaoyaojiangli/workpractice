#ifndef __PUBLIC_H_
#define __PUBLIC_H_

#include <stdio.h>
#include <stdlib.h>
#define N 7

struct info
{
    int id;
    char name[20];
    int grades;
};

struct Node
{
    struct info data;  // 数据域
    struct Node *next; // 指针域
};

#endif