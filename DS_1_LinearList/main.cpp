#include <iostream>
#include <stdlib.h>
//顺序表基本文件
#include "SqList.h"
//添加各种题目的头文件
using namespace std;
void addDataToSqList(SqList &L);

int main()
{
    SqList L;
    InitList(L); //初始化顺序表
    PrintSqList(L);//打印空表
    addDataToSqList(L); //插入 1 2 3 4 5 的顺序表 并输出

    //START 题目验证程序
    //END   题目验证程序

    system("pause"); // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}

//插入 初始化一个 1 2 3 4 5 的顺序表
void addDataToSqList(SqList &L)
{
    //    初试化一些值
    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    L.data[3] = 4;
    L.data[5] = 5;
    L.length = 5;

    PrintSqList(L);
}
