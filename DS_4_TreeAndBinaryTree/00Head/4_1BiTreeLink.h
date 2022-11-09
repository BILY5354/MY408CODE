//链式存储的二叉树

#ifndef BitTreeHead
#define BitTreeHead
#include <iostream>
#include <stdlib.h>
using namespace std;

#define MaxSize 50

//*STRAT定义模块
struct ElemType
{
    int value;
};

typedef struct BitNode
{
    ElemType data;
    struct BitNode *lchild, *rchild;
} BitNode, *BiTree;

//*END定义模块

//*STRAT实现模块
void InitTree(BiTree root)
{
    root = (BiTree)malloc(sizeof(BitNode));
    root->data = {1};
    root->lchild = nullptr;
    root->rchild = nullptr;
}

//插入新节点
bool InsertNode(BiTree T,ElemType val){
    BitNode *p=(BitNode *)malloc(sizeof(BitNode));
    p->data=val;
    p->lchild=nullptr;
    p->rchild=nullptr;
    T->lchild=p;//作为左孩子
}
//*END实现模块

//*STRAT模块
//*END模块
//函数声明/*

#endif