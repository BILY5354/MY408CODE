#include <stdlib.h>
#include <stdio.h>

// TODO B卷 计算一个式子的值
double Func(int n)
{
    double val = 1, temp = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n > 1 && i > 1) // 计算其中一项 n! 的值 并让 i＞1时才进入
        {
            temp = 1;
            for (int j = 2; j <= i; j++)
            {
                temp *= j;
            }
        }
        if (i > 1)                  //防止只有1项
            val = val + 1 / temp;
    }
    return val;
}

int main()
{
    int i;
    scanf("%d", &i);
    printf("%.3lf\n", Func(i));

    system("pause"); // 防止运行后自动退出
    return 0;
}