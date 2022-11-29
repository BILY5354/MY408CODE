//插入排序：直接插入 折半插入 希尔排序
//格式化代码： shift + alt + f

#include <iostream>
#include <stdlib.h>
using namespace std;

//王道书的直接插入实现 L(1)~L(n)的排序 L(0)为哨兵 ∵线性表 L 从 1 开始
//所以对于数组来说 A[0] temp数据 排序排的是 A[1]~A[n-1] 
void InsertSort(int A[], int n)
{
    int i=0, j=0;
    for (i = 2; i <= n; i++)                    //10 9 8
    {
        if (A[i] < A[i - 1])
        {
            A[0] = A[i];                        //8 9 8 ... //7 8 9 ...
            for (j = i - 1; A[0] < A[j]; --j)   
            {
                A[j + 1] = A[j];  //8 9 9 （首次只执行一次for） //7 8 9 9  → 7 8 8 9
            }
            A[j + 1] = A[0];                    //8 8 9    //7 7 8 9
        }
    }
}

int main()
{
    int a[10] = {-99, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    cout<<"排序前 原始数组：\n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    
    InsertSort(a,10);
    cout<<"\n排序后的数组为：\n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }


    cout << endl;
    system("pause"); // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}
