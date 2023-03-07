#include <stdlib.h>
#include <stdio.h>

// TODO A卷 输入整数保存数组并求最大元素和下标

int main()
{
    int a[10] = {0}, tVal = 0, tTag = 0;
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    tVal = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (tVal < a[i])
        {
            tVal = a[i];
            tTag = i;
        }
    }
    printf("最大值%d，其下标%d\n", tVal, tTag);

    system("pause"); // 防止运行后自动退出
    return 0;
}