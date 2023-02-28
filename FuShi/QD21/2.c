#include <stdlib.h>
#include <stdio.h>

// TODO

int main()
{
    int a[6][5] = {0}, temp[5] = {0}, i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 5 && j == 2)
            {
                break;
            }
            scanf("%d", &a[i][j]); //! 数组输入也需要用 &
        }
    }

    // 交换
    int line1 = a[5][0], line2 = a[5][1]; // 行列
    if (line1 == line2)
    {
        for (int target_row = 0; target_row < 5; target_row++)
        {
            a[line1][target_row] = 0;
        }
    }
    else if (line1 != line2)
    {
        // 把目标行存储起来
        for (int target_row = 0; target_row < 5; target_row++)
        {
            temp[target_row] = a[line1][target_row];
        }
        // 把复制过去
        for (int target_row = 0; target_row < 5; target_row++)
        {
            a[line1][target_row] = a[line2][target_row];
        }
        for (int target_row = 0; target_row < 5; target_row++)
        {
            a[line2][target_row] = temp[target_row];
        }
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    system("pause"); // 防止运行后自动退出
    return 0;
}

/*  float test;
    scanf("%5f",&test);
    printf("%f\n",test);
 */