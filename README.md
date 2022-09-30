# 408复习代码

- 
## vsCode快捷键
    ```
    快速复制本行：shift+alt+ 下箭头/上箭头
    单行注释：Ctrl + /
    块注释：Alt+Shift+A
    打开markdwon：ctrl+k v
    ```

## 1.需要注意的点
1. 头文件模板 不加的话不同头文件相互调用会出错
    ```cpp
    #ifndef A_H
    #define A_H

    #endif
    ```
2. 快速复习指针
   - ```&```取地址，```*```指针运算符
    - ```int a = 0; *&a```即等于```*地址```拿的是值
        - ```*&a = *pointer_1;```
    - ```int *pointer_1; &*pointer_1```即等于```&变量```拿的是地址
        -  ```&*pointer_1 = &a;```
3. 在debug中查看顺序表的值
   - [vscode断点调试的时候，如何显示出vector中各个元素的值?](#https://ask.csdn.net/questions/7706531)
   - 直接使用监视表达式 (type()[number])name。其中type是数组的类型，number是数量(暂时不知道如何看到不指定数量的方法)，name是数组名。
    - ex.```*(int(*)[5])L.data```
4. ```main.cpp```模板
    ```cpp
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
    ```
5. ```.h```的头文件模板
    ```cpp
    //带头结点的单链表 9月30
    #ifndef 
    #define 
    #include <iostream>
    #include <stdlib.h>
    using namespace std;

    #define MaxSize 50

    //定义结构


    //函数声明/*

    #endif
    ```
## 2.做题技巧
1. 看需要什么便返回什么便定义函数类型是什么
    - 如果返回的是布尔 ```bool fun(){}```
    - 如果返回的是地址 ```int* fun(){}``` 
        - 甚至是结构体的地址(12年) ```SNode* fun(){}```