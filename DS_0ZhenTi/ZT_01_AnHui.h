//安徽工业大学真题头文件
#ifndef ZT_01_AnHui
#define ZT_01_AnHui
#include <iostream>
#include <stdlib.h>
#include "string.h" //引用字符串包
#include "../DS_1_LinearList/00Head/SqList.h"
#include "../DS_4_TreeAndBinaryTree/00Head/4_1BiTreeLink.h"

using namespace std;

#define MaxSize 50
#define COMPILE 2 //用于条件编译

//*START 函数声明 & 数据类型声明
#if COMPILE == 1 // 11年真题

void fun_11_1();                                   //判断读入回文 读入用@结束
void fun_11_2(SqList &);                           //将负数前移
void fun_11_3(BiTree, int[], int *, int[], int *); //二叉树最长路径
void printf_11_3(int[], int *);                    //二叉树最长路径显示函数

#elif COMPILE == 2 // 12年真题

int CountHeight(BiTree); //计算二叉树层高
int sift(SqList *, int); //给定关键字序列 k1 kn-1 并调整为堆

#endif
//*END 函数声明 & 数据类型声明

#if COMPILE == 1 // 11年真题

void fun_11_1() //判断读入回文 读入用@结束
{
    char ch[50];
    int i, len;
    scanf("%s", ch);
    len = strlen(ch);
    for (i = 0; i < len / 2;)
    {
        if (ch[i] != ch[len - i - 1])
        {
            cout << "不是回文";
            return;
        }
        i++;
    }
    cout << "恭喜是回文";
    return;
}

void fun_11_2(SqList &n) //将负数前移
{
    int temp;
    int j = 0; //用于存储被移动的下标
    for (int i = 0; i < n.length; i++)
    {
        if (n.data[i] < 0)
        {
            temp = n.data[j];
            n.data[j++] = n.data[i]; // j从1开始，有负数先赋值再自增
            n.data[i] = temp;
        }
    }
}

//*本题思想：采用深度优先并设立两个数组，其一方最长路径，其二放当前最长路径，留意判断到达叶子结点的时机
// TODO Maxlen CurrentLlen 一开始为 0
void fun_11_3(BiTree T, int a[], int *Maxlen, int b[], int *CurrentLlen) //二叉树最长路径
{
    int j;
    if (T == nullptr)
    {
        if (*CurrentLlen > *Maxlen)
        {
            //当前路径为最长路径
            for (j = 0; j < *CurrentLlen; j++)
            {
                a[j] = b[j];
            }
            *Maxlen = *CurrentLlen;
        }
    }
    else
    {
        b[(*CurrentLlen)++] = T->data;                      //*要加括号 取值再自增
        fun_11_3(T->lchild, a, &*Maxlen, b, &*CurrentLlen); // Maxlen是指针 *Maxlen是拿值 &*Maxlen是拿指针的地址
        fun_11_3(T->rchild, a, &*Maxlen, b, &*CurrentLlen);
        --(*CurrentLlen); //访问了左右孩子后，返回到父结点，所以路径长度减1
    }
}

void printf_11_3(int a[], int *Maxlen)
{
    int j;
    cout << "路径长度是：" << *Maxlen << "\t最长的一条路径是：";
    for (j = 0; j < *Maxlen; j++)
    {
        cout << a[j] << "\t";
    }
}

#elif COMPILE == 2 // 12年真题

int CountHeight(BiTree T)
{
    if (T == nullptr)
    {
        return;
    }
    int lHei = CountHeight(T->lchild);
    int rHei = CountHeight(T->rchild);
    return lHei > rHei ? lHei + 1 : rHei + 1;
}

int sift(SqList *s, int x) //给定关键字序列 k1 kn-1 并调整为堆
{
    int n = s->length;
    int j = n;
    int i = j / 2;
    s->data[0] = x;
    while ((i >= 1) && (s->data[0] > s->data[i]))
    {
        s->data[j] = s->data[i];
        j = i;
        i = i / 2;
    }
    s->data[j] = s->data[0];
}

#endif

#endif