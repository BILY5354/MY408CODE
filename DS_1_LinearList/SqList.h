//顺序表 9月9
#ifndef SqList_H
#define SqList_H
#include <iostream>
#include <stdlib.h>
using namespace std;

#define MaxSize 50

//线性表的位序从1开始的
typedef struct
{ 
    //在 struct 前用 typedef 表示声明新类型名
    //注意 SqList 是新类型名 而不是结构体变量名 以便用此定义新变量
    int data[MaxSize];
    int length;
} SqList; 

//函数声明/*
void InitList(SqList &L);                        //初始化 指定 L 为线性表的引用 以便修改该地址的具体值 （地址传递方式）
bool Empty(SqList L);                            //判空
bool ListInsert(SqList &L, int i, int e);        //插入
bool ListDelete(SqList &L, int i, int &e);       //删除
int GetElem(SqList L, int i);                    //按位查找
int LocateElem(SqList L, int e);                 //按值查找
bool LocateChangeElem(SqList &L, int e, int em); //按值修改
bool getChangeElem(SqList &L, int i, int em);    //按位修改

void PrintSqList(SqList L); //打印函数
void testModule();          //测试模块

void InitList(SqList &L)
{
    for (int i = 0; i < MaxSize; i++)
    {
        L.data[i] = 0;
        L.length = 0;
    }
}

bool Empty(SqList L)
{
    return (L.length == 0);
}

//插入 i 为插入位置 e 为插入元素
bool ListInsert(SqList &L, int i, int e)
{
    //判断插入的位置 线性表现长度为10 我插入到20是不行的 ∵顺序表！
    if (i < 1 || i > L.length + 1) //这里的 i 是指线性表的首元素 本质是判断数组下标是否 ＜0
        return false;

    //判断是否还有空间插入
    if (L.length >= MaxSize)
        return false;

    //移动元素（或不移） 从最后面开始移动
    for (int j = L.length; j >= i; j--) //注意这里判断用 length ∵这是线性表的长度 即“逻辑上”线性表的最后一位
    {
        L.data[j] = L.data[j - 1]; //注意这里为什么是 j 而不是 j+1 ∵这是数组 ∴这里实际是“逻辑上”线性表的 (length + 1)
    }
    L.data[i - 1] = e; //数组嘛 与线性表差 1
    L.length++;
    return true;
}

//这里的 e 是引用变量 用于返回删除的元素是啥
bool ListDelete(SqList &L, int i, int &e)
{
    //判断 i 范围 这里的范围检查包含 length ∴无需再判断线性表是否为空
    if (i < 1 || i > L.length)
        return false;

    //取出将要删除的元素 用于返回
    e = L.data[i - 1];

    //前移
    for (int j = i; j <= L.length; j++)
    {
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return true;
}
int GetElem(SqList L, int i);
int LocateElem(SqList L, int e);
bool LocateChangeElem(SqList &L, int e, int em);
bool getChangeElem(SqList &L, int i, int em);

void PrintSqList(SqList L)
{
    //循环打印
    if(L.length==0)
    {
        cout<<"顺序表无值"<<endl;
        return ;
    }
    printf("开始打印顺序表\n");
    for (int i = 0; i < L.length; i++)
    {
        printf("Data[%d]==%d\n", i, L.data[i]);
    }
    cout<<"打印结束！"<<endl;
}

#endif