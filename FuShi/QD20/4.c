#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// TODO 求π近似值

int main()
{
    float value=0,temp=1,flag=1;   
    for (int i = 1; fabs(temp) >= 1e-5; i+=2)     //* 注意题目要求是绝对值
    {
        temp=1/(float)i;
        temp*=flag;                 //奇数为正 偶数为负
        printf("%f\n",temp);        //显示每一次的数值
        value+=temp;                
        flag*=-1;                   //改变flag的值 使temp奇数为正 偶数为负
    }
    printf("π/4的近似值为：%f\n",value);

    system("pause"); // 防止运行后自动退出
    return 0;
}