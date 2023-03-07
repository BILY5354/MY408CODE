#include <stdlib.h>
#include <stdio.h>

// TODO A卷 计算值并输出到指定文件夹文件中

double Func(int n)
{
    double val = 1;
    for (int i = 2; i <= n; i++)
        val = val + (double)1 / (double)i;
    FILE *fp = NULL;
    fp = fopen("a.txt", "w");
    fprintf(fp, "%.2lf", val);
    fclose(fp);
    return val;
}

int main()
{
    printf("%.2lf\n", Func(2));
    system("pause"); // 防止运行后自动退出
    return 0;
}