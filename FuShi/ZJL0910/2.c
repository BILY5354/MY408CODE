#include <stdlib.h>
#include <stdio.h>

// TODO A卷 输出程序
double sumn(int n);  // 计算1+2+...+n
double mypow(int n); // 计算n^n

int main()
{
    int n, tag = 1;
    double sum = 0, fZ, fM; // fZ分子 fM分母
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fZ = mypow(i);
        fM = sumn(i);
        sum = ((sum + (fZ / fM) * tag));
        tag *= -1;
    }
    printf("值为%.2lf\n", sum);

    system("pause"); // 防止运行后自动退出
    return 0;
}

double sumn(int n) // 计算1+2+...+n
{
    double temp = 0;
    for (int i = 1; i <= n; i++)
        temp += i;
    return temp;
}
double mypow(int n) // 计算n^n
{
    double temp = n;
    for (int i = 1; i < n; i++)     //* 注意这里是＜n ∵第一次是自己不用乘
        temp *= n;
    return temp;
}