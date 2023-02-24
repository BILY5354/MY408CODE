#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//TODO 判断3条边是否构成三角形 

int pb(int a1, int a2, int a3) //* C89标准并没有布尔类型
{
    if (a1 + a2 <= a3 || a1 + a3 <= a2 || a2 + a3 <= a1) //! 判断条件是小于等于
    {
        printf("这不是三角形");
        return 0;
    }
    else
    {
        if (a1 * a1 + a2 * a2 == a3 * a3 || a1 * a1 + a3 * a3 == a2 * a2 || a2 * a2 + a3 * a3 == a1 * a1)
        {
            printf("等腰直角三角形");
            return 1;
        }
        else
        {
            printf("这是一个普通三角形");
            return 2;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL)); // 设置伪随机数生成器的起始种子值
    int a1, a2, a3;
    a1 = rand() % 100 + 1;
    a2 = rand() % 100 + 1;
    a3 = rand() % 100 + 1;
    printf("%d,%d,%d\n",a1,a2,a3);
    int temp = pb(a1, a2, a3);
    printf("temp的值为%d", temp);
    system("pause"); // 防止运行后自动退出
    return 0;
}

/* // 生成n个随机数
void RangedRand(int range_min, int range_max, int n)
{
    for (int i = 0; i < n; i++)
    {
        int r = rand() % 100 + 1; // 生成1~100的随机数
        printf("%6d\n", r);
    }
} */