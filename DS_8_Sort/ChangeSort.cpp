//交换排序：冒泡插入 快速插入
//格式化代码： shift + alt + f

#include <iostream>
#include <stdlib.h>
using namespace std;

//冒泡插入
void BubbleSort(int A[], int n)
{
    bool flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = false;
        for (int j = n - 1; j > i; j--)
        {
            if (A[j - 1] > A[j])
            {
                swap(A[j - 1], A[j]);
                flag = true;
            }
        }
        if (flag == false) //没有发生交换代表原来就是有顺序的
            return;
    }
}

//快速排序
void QuickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int pivotpos = Partition(A, low, high);
        QuickSort(A, low, pivotpos - 1);
        QuickSort(A, pivotpos + 1, high);
    }
}

int Partition(int A[], int low, int high)
{
    int pivot = A[low];
    while (low < high)
    {
        while (low < high && A[high] >= pivot)
            --high;
        A[low] = A[high];
        while (low < high && A[low] <= pivot)
            ++low;
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}

int main()
{
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    cout << "排序前 原始数组：\n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    BubbleSort(a, 10);
    cout << "\n排序后的数组为：\n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    system("pause"); // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}
