#include <iostream>
#include <stdlib.h>
//链表基本文件
#include "LinkListHead.h"

//添加各种题目的头文件

using namespace std;

#define COMPILE 0 //用于条件编译 需要编译哪一道题目就该对应的值

//函数声明

int main()
{

    LinkList L;
    CreateLLByTailInsert(L); //使用尾插建立 1 2 3 4 5
    PrintList(L);
// START 题目验证程序
#if COMPILE == 0                 //测试用程序
    LinkList l2 = GetElem(L, 2); //注意 0是头结点 ∴链表第一个数据下标为1
    cout << "l2的值为：" << l2->data << endl;
    LinkList l3 = LocateElem(L, 2);
    cout << "按值查找表结点 L3的值为：" << l3->data << endl;
#elif COMPILE == 1

#endif
    // END   题目验证程序

    system("\npause"); // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}