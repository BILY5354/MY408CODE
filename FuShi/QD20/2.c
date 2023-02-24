#include <stdlib.h>
#include <stdio.h>

//TODO 求s(n)=a+aa+aaa+

int main()
{
    int n;
    long a,copy_a,sum=0,temp=0;
    printf("请输入a与n的值：");
    scanf("%d%d",&a,&n);
    printf("a,n=%d,%d\n",a,n);
    copy_a=a;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a);
        sum+=a;
        a=a*10+copy_a;
    }
    printf("\ns(n)=a+aa+aaa+...=%ld",sum);

    system("pause"); // 防止运行后自动退出
    return 0;
}