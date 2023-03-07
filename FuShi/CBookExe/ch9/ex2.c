#include <stdlib.h>
#include <stdio.h>

// TODO 将文件1打开输出字符串到数组a，将该字符串的小写转为大写再输出到文件2

int main()
{
    // 将file1.txt中小写字母转换成大写后，另存为file2.txt
    FILE *fin, *fout; // 定义文件类型指针
    int ch;

    fin = fopen("file1.txt", "r"); // 以只读文本方式打开文件file1.txt
    if (fin == NULL)
    {
        printf("fail to open file1.txt\n");
        exit(0);
    }

    fout = fopen("file2.txt", "w"); // 以写文本方式打开文件file2.txt, 如果文件不存在，就创建一个
    if (fout == NULL)
    {
        printf("fail to open or create file2.txt\n");
        exit(0);
    }

    while (!feof(fin))
    {
        ch = fgetc(fin); // 从fin指向的文件file1.txt中读取单个字符，暂存在字符变量ch中
        if (ch >= 'a' && ch <= 'z') // 如果是小写字母，则转换成大写
            ch -= 32;

        fputc(ch, fout); // 将字符变量ch中的字符写入fout指向的文件file2.txt中
    }
    fclose(fin);
    fclose(fout);

    system("pause"); // 防止运行后自动退出
    return 0;
}