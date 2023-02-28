#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// TODO 进制转换
int cov10to2(int value, int func_tag);
int cov10to8(int value, int func_tag);
int cov10to16(int value, int func_tag);

int main()
{
    int value, func_tag;
    printf("按顺序输入原数值和进制：");
    scanf("%d%d", &value, &func_tag);

    switch (func_tag)
    {
    case 2:
        cov10to2(value, func_tag);
        break;
    case 8:
        cov10to8(value, func_tag);
        break;
    case 16:
        cov10to16(value, func_tag);
        break;
    default:
        printf("请再次输入需要转换的数值和进制\n");
        break;
    }

    system("pause"); // 防止运行后自动退出
    return 0;
}

int cov10to2(int value, int func_tag)
{
    int i = 0, val = value, j = 0, num[20]; // i 是数组的长度 val 是转换后的数值
    printf("十进制转换为二进制，原始：%d，转换结果：", value);

    do
    {
        num[i++] = val % 2;
        val = val / 2;
    } while (val != 0);

    for (j = i - 1; j >= 0; j--) // 倒序输出
    {
        printf("%d", num[j]);
        if (j % 4 == 0) // 空格方便看结果
        {
            printf("\ ");
        }
    }

    return 0;
}
int cov10to8(int value, int func_tag)
{
    int i = 0, j = 0, val = value, num[20];
    printf("十进制转换为八进制：原始：%d，转换结果：", value);

    do
    {
        num[i++] = val % 8;
        val = val / 8;
    } while (val != 0);

    for (j = i - 1; j >= 0; j--)
    {
        printf("%o", num[j]);
    }

    return 0;
}
int cov10to16(int value, int func_tag)
{
    char a[17] = "0123456789ABCDEF"; //! 字符数组长度=元素个数+1
    char b[20];                      // 存储转换的十六进制
    int val = value;
    int i, j; // i 是数组长度 j会赋值为数组末尾下标

    if (val == 0)
    {
        printf("0");
    }
    while (val != 0)
    {
        b[i++] = a[val % 16];
        val /= 16;
    }

    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", b[j]);
    }

    return 0;
}