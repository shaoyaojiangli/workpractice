#ifndef __STU_H_
#define __STU_H_

#include "public.h"
#include "utils.h"
#include "string.h"

extern void Add_Information(struct Node *phead);  // 增加学生信息
extern void Del_Information(struct Node *phead);  // 删除学生信息
extern void Mod_Information(struct Node *phead);  // 修改学生信息
extern void Fin_Information(struct Node *phead);  // 查找学生信息
extern void Sort_Information(struct Node *phead); // 排序学生信息

#endif