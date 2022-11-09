//交换排序： 快速插入
//格式化代码： shift + alt + f 
#include <iostream>
#include <stdlib.h>
using namespace std;

int Partition(int A[], int low, int high);

//*快速排序 排序后数据应该是从小到大
//*用第一个元素把待排序序列“划分”为两个部分,
//*左边更小，右边更大，且移动后该元素的位置就是最终位置
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
    int pivot = A[low];//*当前区最低位设为轴（不一定是数组最低位是本区）
    while (low < high)
    {
        while (low < high && A[high] >= pivot)
        {//*∵从小到大排∴后面的数肯定是大的 如果现高位>=低位 便不需弄了 
            --high;     
        }
        A[low] = A[high];//*将比轴小的元素移动到左端
        while (low < high && A[low] <= pivot)
        {//*∵从小到大∴找出下标比轴小值比轴大的元素 放到最高位
            ++low;
        }
        A[high] = A[low];//将比轴大的元素
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

    QuickSort(a,0,9);
    cout << "\n排序后的数组为：\n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    system("pause"); // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}
