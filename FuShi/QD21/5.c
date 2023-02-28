#include <stdlib.h>
#include <stdio.h>

// TODO 编写函数

int cmax(char **outputstr, char *inputstr); //* outputste中的**意思是指向（字符）指针的指针

int main()
{
    char **outputstr, *inputstr, strIn[20], *strOut[20], c; // ∵outputstr是指向指针的指针 所以需指向指针数组，c用于输出
    inputstr = strIn;                                       // 先指定再使用
    outputstr = strOut;                                     // 先指定再使用
    printf("请输入字符串：");
    scanf("%s", inputstr);
    int len = cmax(outputstr, inputstr); // 定义是什么就传什么

    printf("最长数字串：");
    for (int i = 0; i < len; i++)       //一个字符串输出单个字符的方法
    {
        c = *(*outputstr + i);
        printf("%c", c);
    }
    printf("，长度：%d\n", len);

    system("pause"); // 防止运行后自动退出
    return 0;
}

int cmax(char **outputstr, char *inputstr)
{
    int pos = 0, tPos = 0, len = 0, tLen = 0; // pos用于存储最长数字段的下标 j中间变量 tPos暂时最长 len用来记录最长数字段的长度 tLen 是暂时最长长度

    if (inputstr == NULL) // 空字符串 返回空
    {
        *outputstr = NULL;
        return 0;
    }

    for (int i = 0; *(inputstr + i) != NULL; i++)
    {
        if (*(inputstr + i) <= '9' && *(inputstr + i) >= '0')
        {
            tPos = i; // 存储数字段首位下标 并假定是最长
            tLen = 0; // 重新计算该数字段长度
            for (int j = i; *(inputstr + j) <= '9' && *(inputstr + j) >= '0'; j++)
            {
                tLen++;
                if (len < tLen)
                {
                    len = tLen; // 存储最长数字段长度
                    pos = tPos; // 存粗最长数字段下标
                }
            }
            // printf("%c\t", *(inputstr + i)); //测试用
        }
    }
    if (len == 0) // 无数字 返回空字符串
    {
        *outputstr = NULL;
        return 0;
    }
    else
    {
        inputstr += pos;
        // outputstr = &inputstr; //!错误 ∵在调用函数中无法通过改变指针变量的值（即地址是无效的）改的只能是指针指向的值
        *outputstr = inputstr;  //* 想要有多个“返回值” 只能通过指针 并改变指针指向的值 ∵C语言是值传递的
        // printf("%s", *outputstr);
        return len;
    }
}