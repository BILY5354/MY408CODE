#include <stdlib.h>
#include <stdio.h>

// TODO A卷 输入成绩统计平均分与不合格人数

int main()
{
    int a[4][3] = {0}, b[4] = {0}, temp; // a是学生的分数 数学英语平均分 b是对应的挂科数 0 无 1一科 2两科
    printf("请输入数学与英语成绩");
    for (int i = 0; i < 4; i++)
    {
        printf("\n第%d位，", i+1);
        for (int j = 0; j < 2; j++) // 输入两次即可 第3列是平均分
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] < 60)
                b[i]++; // 该学生不合格科目加1
        }
        // 计算平均分
        temp = 0;
        for (int j = 0; j < 2; j++)
            temp += a[i][j];
        a[i][2] = temp / 2;
    }

    // 屏幕输出
    printf("\n平均分为：");
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d", a[i][2]);
    }
    int f1 = 0, f2 = 0; // f1为挂一科 f2为挂两科
    for (int i = 0; i < 4; i++)
    {
        if (b[i] == 1)
            f1++;
        else if (b[i] == 2)
            f2++;
    }
    printf("\n挂一门科的人数为%d，挂两门科的人数为%d", f1, f2);

    system("pause"); // 防止运行后自动退出
    return 0;
}