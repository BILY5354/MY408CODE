//测试程序 9月9
//格式化代码： shift + alt + f

#include <iostream>
using namespace std;
 
// main() 是程序开始执行的地方
 
void fun(int *arg)
{
    cout<<"the value of arg int fun is: "<<*arg<<endl;
}

int main()
{
   int a=3;
   fun(&a);
   system("pause"); // 防止运行后自动退出
   return 0;
}

