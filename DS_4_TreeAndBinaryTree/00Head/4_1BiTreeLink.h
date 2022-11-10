//链式存储的二叉树
#ifndef BitTreeHead
#define BitTreeHead
#include <iostream>
#include <stdlib.h>
using namespace std;

#define MaxSize 50

//*STRAT定义模块
typedef struct BitNode
{
    int data;
    struct BitNode *lchild, *rchild;
} BitNode, *BiTree;

//*END定义模块

//*START函数声明
void InitTree(BiTree root);
bool InsertNode(BiTree T, int val);
void visit(BiTree T);

void PreOder(BiTree T);
void InOrder(BiTree T);
void PostOder(BiTree T);
//*END函数声明

//初始化
void InitTree(BiTree T)
{
    T = (BiTree)malloc(sizeof(BitNode));
    T->data = {1};
    T->lchild = nullptr;
    T->rchild = nullptr;
}

//插入
bool InsertNode(BiTree T, int val)
{
    if (T == nullptr)
    { //二叉树一个玩意也没有
        BitNode *t = (BitNode *)malloc(sizeof(BitNode));
        T = t;
        T->data = val;
        return true;
    }

    BitNode *p = T;
    while (p != nullptr)
    {
        if (val > p->data)
        {
            if (p->rchild == nullptr)
            {
                p->rchild = (BitNode *)malloc(sizeof(BitNode));
                p->rchild->data = val;
                return true;
            }
            p = p->rchild; //右孩子不为空 继续寻找
        }
        else
        { // data < p.data
            if (p->lchild == nullptr)
            {
                p->lchild = (BitNode *)malloc(sizeof(BitNode));
                p->lchild->data = val;
                return true;
            }
            p = p->lchild;
        }
    }
}

//访问函数
void visit(BiTree T)
{
    cout << T->data << endl;
}

//先序遍历
void PreOder(BiTree T)
{
    if (T != nullptr)
    {
        visit(T);
        PreOder(T->lchild);
        PreOder(T->rchild);
    }
}

//中序遍历
void InOrder(BiTree T)
{
    if (T != nullptr)
    {
        InOrder(T->lchild);
        visit(T);
        InOrder(T->rchild);
    }
}

//后序遍历
void PostOder(BiTree T)
{
    if (T != nullptr)
    {
        PostOder(T->lchild);
        PostOder(T->rchild);
        visit(T);
    }
}

#endif