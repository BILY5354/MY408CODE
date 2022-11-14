// 12年统考链表真题
#ifndef LinkList12
#define LinkList12
#include <iostream>
#include <stdlib.h>
#include "string.h"
using namespace std;

#define MaxSize 50
#define ElementType char

/*
 *本题最重要的是：现在已给的两个链表就是存在公共后缀 然找这个下标
 !而是不是随便给两个链表来判断是否存在公共后缀
 *∴如果是第一种思路：直接从头结点开始即可 判断地址是否相同
 !而错误的思路是从尾部开始 一一判断值是否相同
 */

//结构定义
typedef struct Node
{
    ElementType data;
    struct Node *next; //指向 LNode 结构体变量 其中 省略了 struct
} SNode;  //指针变量 LinkList 指向 LNode 类型的数据

//函数声明/*

void CreatL1(char c[], SNode *(&head))
{
    head = (SNode *)malloc(sizeof(Node));
    SNode *s, *r = head; // r为尾指针
    for (int i = 0; i < 7; i++)
    {
        s = (SNode *)malloc(sizeof(Node));
        s->data = c[i];
        r->next = s;
        r = s;
    }
    r->next = nullptr;
}

void CreatL2(char c[], SNode *(&head))
{
    head = (SNode *)malloc(sizeof(Node));
    SNode *s, *r = head; // r为尾指针
    for (int i = 0; i < 5; i++)
    {
        s = (SNode *)malloc(sizeof(Node));
        s->data = c[i];
        r->next = s;
        r = s;
    }
    r->next = nullptr;
}


int listLen(SNode *head)
{
    int len = 0;
    while (head->next != nullptr)
    {
        len++;
        head = head->next;
    }
    return len;
}

SNode *find_addr(SNode *str1, SNode *str2)
{
    int m, n;
    SNode *p, *q;
    m = listLen(str1);
    n = listLen(str2);
    for (p = str1; m > n; m--) // m>n
    {
        p = p->next;
    }
    for (q = str2; m < n; n--) // m<n
    {
        q = q->next;
    }
    while (p->next != nullptr && p->next != q->next)
    {
        p = p->next;
        q = q->next;
    }
    return p->next;
}

void PrintList(SNode *L)
{
    //循环打印整个链表
    SNode *p = L->next; //扫描指针
    int j = 0;
    if (p == NULL)
        printf("这是一个空表\n");
    while (p != NULL)
    {
        printf("LinkList[%d]=%d\n", j, p->data);
        p = p->next;
        j++;
    }
}

#endif