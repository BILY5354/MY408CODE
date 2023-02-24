#include <stdlib.h>
#include <stdio.h>

//TODO 输入速度时间求平均速度

int main()
{

    float v0, v1;
    int t;
    while (1)
    {
        printf("请分别输入初速度v0、末速度v1与时间t\t");
        scanf("%f%f%d", &v0, &v1, &t); //* double 需要用lf
        if (v0 > -1 && v1 > -1 && t > -1)
        {
            break;
        }
        else
        {
            printf("检测到有负数请重新输入\n");
        }
    }
    printf("v0、v1与t的数值为%f,%f,%d\n", v0, v1, t);
    printf("加速度a=%.2f\n", (v1 - v0) / t); //* 保留2位小数用 %.2，3位 %.3

    system("pause"); // 防止运行后自动退出
    return 0;
}