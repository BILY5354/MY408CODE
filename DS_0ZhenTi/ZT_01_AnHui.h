//安徽工业大学真题头文件
#ifndef ZT_01_AnHui
#define ZT_01_AnHui
#include <iostream>
#include <stdlib.h>
#include "string.h" //引用字符串包
using namespace std;

#define MaxSize 50
#define COMPILE 1 //用于条件编译 


//函数声明
#if COMPILE == 1    //11年真题
void fun_11_1();    //判断读入回文 读入用@结束

#elif COMPILE == 2
#endif


#if COMPILE == 1    //11年真题
void fun_11_1()     //判断读入回文 读入用@结束
{
    char ch[50];
    int i,len;
    scanf("%s",ch);
    len=strlen(ch);
    for ( i = 0; i < len/2; )
    {
        if (ch[i]!=ch[len-i-1])
        {
            cout<<"不是回文";
            return;
        }
        i++;
    }
    cout<<"恭喜是回文";
    return;
}

#elif COMPILE == 2
#endif

#endif