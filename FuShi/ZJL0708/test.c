#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// TODO B卷 试题6检验
struct student
{
    char name[80];
    int grade;
};

struct student *Find(char *s, struct student *p, int n)
{
    int i;
    for (int i = 0; i < n - 1; i++)
    {
        if (!strcmp(s, (*(p + i)).name))
        {
            return (p + i + 1);
        }
    }
    return p + n - 1;
};

int main()
{

    char str[80];
    struct student a[4] = {{"Tom", 60}, {"Jerry", 80}, {"Marry", 70},{"Bill", 90}}, *pt;

    gets(str);
    pt = Find(str, a, 4);
    printf("%s,%d\n", pt->name, pt->grade);

    system("pause"); // 防止运行后自动退出
    return 0;
}