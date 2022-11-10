#include <iostream>
#include <stdlib.h>
//二叉树基本文件
#include "00Head/4_1BiTreeLink.h"
//添加各种题目的头文件

using namespace std;

#define COMPILE 1 //用于条件编译 

//函数声明

int main()
{
    BiTree T;
    InitTree(T,1);

    for (int i = 0; i < 5; i++)
    {
        InsertNode(T,i);    
    }
    cout << "先序：";
    PreOder(T);
    cout << "\n中序：";
    InOrder(T);
    cout << "\n先序：";
    PostOder(T);
//START 题目验证程序
#if COMPILE == 0
    
#elif COMPILE == 1

#endif
    //END   题目验证程序

    system("pause"); // 防止运行后自动退出
    return 0;
}