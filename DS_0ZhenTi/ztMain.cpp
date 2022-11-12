#include <iostream>
#include <stdlib.h>
//顺序表基本文件
#include "../DS_1_LinearList/00Head/SqList.h"

//添加各种题目的头文件
#include "ZT_01_AnHui.h"


using namespace std;

#define COMPILE 1 //用于条件编译 

//函数声明
void addDataToSqList(SqList &);


int main()
{


//START 题目验证程序
#if COMPILE == 1 
    //安徽工业大学11年试题
    SqList n;
    addDataToSqList(n);
    PrintSqList(n);

    cout<<"\n\n下面是解答的输出";
    //fun_11_1();
    fun_11_2(n);
    PrintSqList(n);

#elif COMPILE == 2
    PrintSqList(L);
#endif
//END   题目验证程序

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