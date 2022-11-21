#include <iostream>
#include <stdlib.h>
//堆排序

//添加各种题目的头文件

using namespace std;

#define COMPILE 1 //用于条件编译

//函数声明

// 建立大根堆
void BuildMaxHeap(int A[], int len)
{
    for (int i = len / 2; i > 0; i--)
    {
        HeadAjust(A, i, len);
    }
}

// 将以 k 为根的子树调整为大根堆
void HeadAjust(int A[], int k, int len)
{
    A[0] = A[k];
    for (int i = 2 * k; i <= len; i *= 2)
    {
        if (i < len && A[i] < A[i + 1])
        {
            i++;
        }
        if (A[0] >= A[i])
        {
            break;
        }
        else
        {
            A[k] = A[i];
            k = i;
        }
        A[k] = A[0];
    }
}

// 堆排序
void HeapSort(int A[], int len)
{
    BuildMaxHeap(A, len);
    for (int i = len; i > 1; i--)
    {
        swap(A[i], A[1]);
        HeadAjust(A, 1, i - 1);
    }
}

int main()
{

// START 题目验证程序
#if COMPILE == 1

#elif COMPILE == 2
    PrintSqList(L);
#endif
    // END   题目验证程序

    system("pause"); // 防止运行后自动退出
    return 0;
}