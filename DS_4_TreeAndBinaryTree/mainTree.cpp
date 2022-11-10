#include <iostream>
#include <stdlib.h>
//二叉树基本文件
#include "00Head/4_1BiTreeLink.h"
//添加各种题目的头文件

using namespace std;

#define COMPILE 1 //用于条件编译

//函数声明
/* 二叉树模样
    3
0       4
 1       5
  2
 */

int main()
{
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
    cout << "先序：";
    PreOder(T);
    cout << "\n中序：";
    InOrder(T);
    cout << "\n后序：";
    PostOder(T);
// START 题目验证程序
#if COMPILE == 0

#elif COMPILE == 1 
    //青岛2016 二叉树高度
    cout<<"\n二叉树高度为："<<CountHei(T)<<endl;
 
#endif
    // END   题目验证程序

    system("\npause"); // 防止运行后自动退出
    return 0;
}