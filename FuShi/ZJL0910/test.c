#include <stdlib.h>
#include <stdio.h>

// TODO B卷 09-10 第六题
struct stu
{
    char c;
    char s[80];
};

void f(struct stu t)
{
    int i = 0;
    while (t.s[i] != '\0')
    {
        if (t.s[i] == t.c)
        {
            printf("%s\n", t.s + i + 1);
            return;
        }
        i++;
    }
    printf("%s\n", t.s);
    return;
}

int main()
{
    int k;
    struct stu str[4] = {{'e', "hello"}, {'h', "hello"}, {'l', "hello"}, {'a', "hello"}};
    for (k = 0; k < 4; k++)
    {
        f(str[k]);
    }

    system("pause"); // 防止运行后自动退出
    return 0;
}