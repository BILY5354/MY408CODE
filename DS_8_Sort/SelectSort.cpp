//选择排序：简单选择 堆排序
//格式化代码： shift + alt + f

#include <iostream>
#include <stdlib.h>
using namespace std;

// START 简单选择排序
void SelectSort(int A[], int n)
{
    int min = -1; //记录最小元素位置
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
                min = j;
        }
        if (min != i)
            swap(A[i], A[min]);
    }
}
// END 简单选择排序

// START 堆排序
void HeadAdjust(int A[], int k, int len);

void buildMaxHeap(int A[], int len)
{
    for (int i = len / 2; i > 0; i--)
    {
        HeadAdjust(A, i, len);
    }
}

void HeadAdjust(int A[], int k, int len)
{
    //函数 HeadAdjust 将元素 k 为根的子树进行调整
    A[0] = A[k];
    for (int i = 2 * k; i <= len; i *= 2)
    {
        if (i < len && A[i] < A[i + 1])
            i++;
        if (A[0] >= A[i])
            break;
        else
        {
            A[k] = A[i];
            k = i;
        }
    }
    A[k] = A[0];
}

void HeapSort(int A[], int len)
{
    buildMaxHeap(A, len);
    for (int i = len; i > 1; i--)
    {
        swap(A[i], A[1]);
        HeadAdjust(A, 1, i - 1);
    }
}
// END 堆排序

int main()
{
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    cout << "排序前 原始数组：\n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    // SelectSort(a, 10);
    HeapSort(a, 10);
    cout << "\n排序后的数组为：\n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    system("pause"); // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}
