template <typename AnyType>
/*
* 也可以写作
* template <class T>这样更省键盘
* 注意：
* template应该紧跟着函数声明或者定义
*/
void Swap(AnyType &a, AnyType &b)
{
    AnyType temp;
    temp = a;
    a = b;
    b = temp;
}