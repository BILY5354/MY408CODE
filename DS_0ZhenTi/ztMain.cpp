#include <iostream>
#include <stdlib.h>
//顺序表基本文件

//添加各种题目的头文件

using namespace std;

#define COMPILE 1 //用于条件编译 

//函数声明

int main()
{


//START 题目验证程序
#if COMPILE == 1
    
#elif COMPILE == 2
    PrintSqList(L);
#endif
//END   题目验证程序

    system("pause"); // 防止运行后自动退出
    return 0;
}