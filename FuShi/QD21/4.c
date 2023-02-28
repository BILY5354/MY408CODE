#include <stdlib.h>
#include <stdio.h>

// TODO 求可逆素数

// 判断是否为素数
int pd(int val)
{
    int i = 2;
    for (; i < val; i++)
    {
        if (val % i == 0)
            return 0; // 可以整除 跳出循环
    }
    if (i == val)
        return 1;
    else
        return 0;
}

int overturn(int val)
{
    int ot_val = val % 10, temp;
    val /= 10; // 先弄掉一位方便计算
    while (val != 0)
    {
        temp = val % 10;
        ot_val = (ot_val * 10 + temp); //! 超过1个就不要简写 不要写成 ot_val += (ot_val * 10 + temp);
        val /= 10;
    }
    return ot_val;
}

// 判断是否为可逆素数 会先判断是否为素数
int pdk(int val)
{
    int ot_val;
    if (pd(val)) // 先判断原数是否为素数
    {
        // printf("是质数\n");
        ot_val = overturn(val);
        if (pd(ot_val))
            return 1;
        else // 调转后的数非质数
            return 0;
    }
    else // 非素质
    {
        return 0;
    }
}

int main()
{
    printf("所有四位可逆素数：\n");
    for (int i = 0, j = 0; i < 1000; i++)
    {
        if (pdk(i))
        {
            printf("%d\t", i);
            j++; // 用于每行输出10个
            if (j % 10 == 0)
                printf("\n");
        }
    }
    printf("\n");

    system("pause"); // 防止运行后自动退出
    return 0;
}