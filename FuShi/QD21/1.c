#include <stdlib.h>
#include <stdio.h>

// TODO 算车费

int main()
{

    int wait_time;
    float li_chen, price = 10;

    printf("请按顺序输入里程（公里）与等待时间（分钟）：");
    scanf("%f%d", &li_chen, &wait_time);                //! C的scanf并不可以控制精度 但可以控制长度

    // 用不了switch ∵case必须是常量
    if (li_chen <= 3)
    {
        price = price;
    }
    else if (li_chen <= 10)
    {
        price += (li_chen - 3) * 2;
    }
    else if (li_chen > 10)
    {
        price += (li_chen - 3) * 2;
        price += (li_chen - 10) * 3;
    }

    if (wait_time < 5)
    {
        price = price;
    }
    else
    {
        price += ((wait_time / 5) * 2);
    }

    printf("乘客应该支付车费为%.0f元\n", price); //* 四舍五入用 %.0f 并且什么类型就用对应输出 浮点型用%d值为0

    system("pause"); // 防止运行后自动退出
    return 0;
}