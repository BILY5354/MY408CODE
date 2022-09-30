//带头结点的单链表 9月30
#ifndef LinkListHead
#define LinkListHead
#include <iostream>
#include <stdlib.h>
using namespace std;

#define MaxSize 50

//定义结构 
typedef struct LNode
{
    int data;
    LNode *next;        //指向 LNode 结构体变量 其中 省略了 struct
}LNode, *LinkList;      //指针变量 LinkList 指向 LNode 类型的数据
//三种等价的形式 LNode.data (*LinkList).data LinkList->data


//函数声明
bool InitList(LinkList &L);     //初始化

bool Empty(LinkList L);         //判空
bool ListInsert(LinkList &L, int i, int e);//按位插入
bool InsertNextNode(LNode *p, int e);//指定节点的后插操作
bool InsertPriorNode(LNode *p, int e);//指定节点的前插操作————先完成后插，再交换数据以实现前插
bool ListDelete(LinkList &L, int i, int &e);//按指定位序删除节点并返回其值
bool DeleteNode(LNode *p);//删除指定节点

//函数实现

//初始化（带头结点）
bool InitList(LinkList &L) //L 相当于: LNode lNode;  LNode *L=&lNode;
{
    L = (LNode *)malloc(sizeof(LNode));//分配一个头结点
    if(L==NULL)
        return false;
    L->next = NULL;
    return true;
}






#endif