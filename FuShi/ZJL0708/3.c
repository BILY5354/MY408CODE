#include <stdlib.h>
#include <stdio.h>

// TODO B卷 输入字符串 统计各类字符
void Func(char *s, int *pEng, int *pNu, int *pEls)
{
    char *tS = s;
    while (*tS)
    {
        if ((*tS >= 'a' && *tS <= 'z') || (*tS >= 'A' && *tS <= 'Z'))
        {
            *pEng+=1;; // 英文字符      //! 不能写 *PEng++ 需要写(*Peng)++ ∵它们优先级相同并且自右向左
        }
        else if (*tS >= '0' && *tS <= '9')
        {
            (*pNu)++; //  数字字符
        }
        else
        {
            *pEls+=1; // 其它字符
        }

        tS++; //  下一个字符
    }
}

int main()
{
    int valEng = 0, valNu = 0, valEls = 0, *pEng, *pNu, *pEls; // 英文 数字 其它 及对应指针
    pEng = &valEng;
    pNu = &valNu;
    pEls = &valEls;
    char str[20], *s; // 输入字符串的方法
    s = str;          // 先指定
    scanf("%s", s);   // 再使用

    Func(s, pEng, pNu, pEls);
    printf("英文字符数量为%d，数字为%d，其它为%d\n", *pEng, *pNu, *pEls);

    system("pause"); // 防止运行后自动退出
    return 0;
}