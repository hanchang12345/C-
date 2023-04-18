#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//c++中允许函数名相同

//条件：
//1.函数名相同
//2.函数所在的作用域相同 
//3.函数形参的类型不同，或者形参的顺序不同，或者形参的个数不同


//注意:函数的返回值不能作为函数重载的条件

//形参的个数不同
void func()
{
	cout << "func 函数的调用" << endl;
}
void func(int a)
{
	cout << "func (int a)函数的调用" << endl;
}
//形参的类型不同
void func(double b)
{
	cout << "func (double b)函数的调用" << endl;
}
//形参的顺序不同
void func(int a,double b)
{
	cout << "func (int a,double b)函数的调用" << endl;
}

void func(double a,int b)
{
	cout << "func (double a,int b)函数的调用" << endl;
}
//注意:函数的返回值不能作为函数重载的条件
//int func(double a, int b)
//{
//	cout << "func (double a,int b)函数的调用" << endl;
//}

int main()
{
	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 10);

	return 0;
}


