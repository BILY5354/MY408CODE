#include <iostream>
#include <stdlib.h>
//顺序表基本文件
#include "../DS_1_LinearList/00Head/SqList.h"

//添加各种题目的头文件
#include "ZT_01_AnHui.h"

using namespace std;

#define MAINCOMPILE 1 //用于条件编译

//函数声明
void addDataToSqList(SqList &);

int main()
{

// START 题目验证程序
#if MAINCOMPILE == 1
    //安徽工业大学11年试题
    SqList n;
    addDataToSqList(n);
    // PrintSqList(n);
    BiTree T;
    InitTree(T, 3);
    for (int i = 0; i < 3; i++)
    {
        InsertNode(T, i);
    }
    for (int i = 4; i < 6; i++)
    {
        InsertNode(T, i);
    }
    int a[10] = {-9999};
    int b[10] = {-9999};
    int a_len = 0, b_len = 0;   //最长路径的长度 不是原本数组的长度
    int *Maxlen = &a_len, *CurrentLen = &b_len; //对应的指针变量

    cout << "\n\n下面是解答的输出";
    // fun_11_1();
    // fun_11_2(n);
    // PrintSqList(n);
    fun_11_3(T, a, Maxlen, b, CurrentLen);
    printf_11_3(a, Maxlen);

#elif MAINCOMPILE == 2
    
#endif
    // END   题目验证程序

    system("pause"); // 防止运行后自动退出
    return 0;
}

//插入 初始化一个 1 2 3 4 5 的顺序表
void addDataToSqList(SqList &L)
{
    //    初试化一些值
    L.data[0] = -1;
    L.data[1] = 2;
    L.data[2] = -3;
    L.data[3] = -4;
    L.data[4] = 5;
    L.length = 5;
}

/* 二叉树模样
    3
0       4
 1       5
  2
 */