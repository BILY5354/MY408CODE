#include <stdlib.h>
#include <stdio.h>

// TODO 文本替换加密程序

void encode(char *s, int a, int b);
void decode(char *s, int a, int b);

int main()
{
    printf("按顺序输入明文与a、b的值（用空格分开）");

    char *s, str[10];
    int a, b;
    s = str;                    //* 欲使用指针一定要先有确定值（指向str）再使用scanf
    scanf("%s%d%d", s, &a, &b); //! 没有指向直接使用可能会指向已存放数据内容段
    printf("输入的明文为：%s，a的值为：%d,b的值为：%d\n", s, a, b);

    encode(s, a, b); // 加密
    decode(s, a, b); // 解密
    system("pause"); // 防止运行后自动退出
    return 0;
}

void encode(char *s, int low_plus, int upper_plus)
{
    char *temp_s; // 保存s指针地址
    temp_s = s;

    while (*temp_s) //! 这里判空 判的是指针的值 而不是地址 记得加*
    {
        if (*temp_s >= 'a' && *temp_s <= 'z')
        {
            if (low_plus % 26 + *temp_s - 'a' + 1 > 26) // 超过一圈
            {
                // 'a'+位移量-(25-'字母表的位置')-1 注意a的序号为0 z为25
                // 因为a的位置是65 所以现在变成
                // 'a'+位移量-(25-('现在字母表位置'-'a'))-1
                *temp_s = low_plus % 26 - 25 + *temp_s - 1;
            }
            else // 未足一圈
            {
                *temp_s += low_plus % 26;
            }
        }
        else if (*temp_s >= 'A' && *temp_s <= 'Z')
        {
            /* *temp_s += upper_plus; 线性加*/
            if (upper_plus % 26 + *temp_s - 'A' + 1 > 26)
            {
                *temp_s = upper_plus % 26 - 25 + *temp_s - 1;
            }
            else
            {
                *temp_s += upper_plus % 26;
            }
        }
        temp_s++;
    }
    printf("encode:%s\n", s);
}

void decode(char *s, int low_plus, int upper_plus)
{
    char *temp_s; // 保存s指针地址
    temp_s = s;

    while (*temp_s) //! 这里判空 判的是指针的值 而不是地址 记得加*
    {
        if (*temp_s >= 'a' && *temp_s <= 'z')
        {
            if (*temp_s - 'a' - (low_plus % 26)  < 0)
            {
                *temp_s = 'z' - (low_plus % 26 - *temp_s + 'a') + 1;
            }
            else
            {
                *temp_s -= low_plus % 26;
            }
        }
        else if (*temp_s >= 'A' && *temp_s <= 'Z')
        {
            if (*temp_s - 'a' - (upper_plus % 26)  < 0)
            {
                *temp_s = 'z' - (upper_plus % 26 - *temp_s + 'a') + 1;
            }
            else    //未满一圈 直接减就好
            {
                *temp_s -= upper_plus % 26;
            }
        }
        temp_s++;
    }
    printf("decode:%s\n", s);
}