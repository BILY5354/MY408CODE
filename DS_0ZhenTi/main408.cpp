#include <iostream>
#include <stdlib.h>
#define MAINCOMPILE 2 //用于条件编译
using namespace std;
//顺序表基本文件

//添加各种题目的头文件
#if MAINCOMPILE == LL12 //链表12年 寻找公共后缀
#include "408/LinkList12.h"
#elif MAINCOMPILE == 2 //线性表12年真题

#endif




//函数声明

int main()
{

// START 题目验证程序
#if MAINCOMPILE == LL12 //链表12年 寻找公共后缀

    char ch1[7] = {'l', 'o', 'a', 'd', 'i', 'n', 'g'};//记得写元素数量
    char ch2[5] = {'b', 'e', 'i', 'n', 'g'};
    SNode *str1, *str2, *p;
    
    CreatL1(ch1, str1);
    CreatL2(ch2, str2);
    p = find_addr(str1, str2);
    PrintList(p);

#elif MAINCOMPILE == 2 //线性表12年真题
    int a[5]={0,1,2,3,4};
    cout<<a[5];
#endif
    // END   题目验证程序

    system("pause"); // 防止运行后自动退出
    return 0;
}