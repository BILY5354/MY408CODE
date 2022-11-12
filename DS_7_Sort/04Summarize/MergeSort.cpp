//交换排序：归并排序
//格式化代码： shift + alt + f

#include <iostream>
#include <stdlib.h>
using namespace std;

//前后相邻的两个有序表归并为一个有序表
/* int *B = (int *)malloc(10) * sizeof(int); //辅助数组B
void Merge(int A[],int low,int mid,int high) {
    for (int k = 0; k <= high; k++)
    {
        B[k]=A[k];
    }
    for (int i = low; i < lowount; i++)low    {
        /* code */
    }
    
} */
//合并

int main()
{
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    cout << "排序前 原始数组：\n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n排序后的数组为：\n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    system("pause"); // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}
