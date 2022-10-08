#ifndef LinkList_09_H
#define LinkList_09_H
#include <iostream>
#include <stdlib.h>
#include "../00Head/LinkListHead.h"

#define SUCCESS 1
#define FAILURE 0

/*
 * 思路：先遍历一次看有多少元素 其中寻找的下标为 n - i + 1 i为倒数第几位
 */
int fun(LinkList &L, int i)
{
    int LLlong = 0;         //链表长度
    LinkList Ltemp = L;     //记录原始链表位置
    if (L->next == nullptr) //如果为空
    {
        return FAILURE;
    }
    L = L->next;
    LLlong++;
    while (L->next != nullptr)
    {
        L = L->next;
        LLlong++;
    }
    //现在已经得到数组 便是按序号拿值
    L = Ltemp;
    for (int j = 0; j < (LLlong - i + 1); j++)
    {
        L = L->next;
    }
    cout<<"倒数第"<<i<<"的值为"<<L->data<<endl;
    return SUCCESS;
}

#endif