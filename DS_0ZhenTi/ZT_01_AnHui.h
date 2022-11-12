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
#define COMPILE 1 //用于条件编译

//*START 函数声明 & 数据类型声明
#if COMPILE == 1 // 11年真题

void fun_11_1();         //判断读入回文 读入用@结束
void fun_11_2(SqList &); //将负数前移
void fun_11_3(BiTree);   //二叉树最长路径

#elif COMPILE == 2
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

void fun_11_3(BiTree) //二叉树最长路径
{
    
}

#elif COMPILE == 2
#endif

#endif