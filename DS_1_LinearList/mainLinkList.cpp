#include <iostream>
#include <stdlib.h>
//链表基本文件
#include "LinkListHead.h"

//添加各种题目的头文件

using namespace std;

#define COMPILE 1 //用于条件编译 需要编译哪一道题目就该对应的值


//函数声明


int main()
{
   
    LinkList L;
    CreateLLByTailInsert(L);
    PrintList(L);
    //START 题目验证程序
    #if COMPILE == 1
    
    #elif COMPILE == 2
    
    #endif
    //END   题目验证程序

    system("\npause"); // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}