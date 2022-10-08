#ifndef EXERCISE1_H
#define EXERCISE1_H
#include <iostream>
#include <stdlib.h>
#include "../00Head/SqList.h"


/**
 * 题目要求：返回被删除的元素
 */
bool exercise1(SqList &L, int &e)
{
    if (L.length == 0)
    {
        cout << "error！顺序表为空" << endl;
        return false;
    }
    int MIN = L.data[0];
    int pos = 0; //最小元素的下标
    for (int i = 1; i < L.length; i++)
    {
        if (MIN > L.data[i])
        {
            MIN = L.data[i];
            pos = i;
        }
    }
    L.data[pos]= L.data[L.length-1];
    e = MIN;
    return true;
}
#endif