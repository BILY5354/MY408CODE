# 408复习代码


## 1.需要注意的点
1. 头文件模板 不加的话不同头文件相互调用会出错
```cpp
#ifndef A_H
#define A_H

#endif
```
2. 在debug中查看顺序表的值
```*(int(*)[5])L.data```