#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//函数重载的注意事项
//1. 重载时遇到引用
void func(int& a)//int &a=10 非法
{
	cout << "func(int &a )函数的引用" << endl;
}

void func(const int& a)//const int &a=10 合法
{
	cout << "func(const int &a )函数的引用" << endl;
}

//2.重载时遇到默认参数

void func2(int a)
{
	cout << "func2(int a)函数的调用" << endl;
}
void func2(int a,int b=10)
{
	cout << 
		"func2(int a)函数的调用" << endl;
}
int main()
{
	int a = 10;
	func(a);//调用不带const的函数，因为传的是一个可读可写的变量

	func(10);//调用带const的函数 ，因为传的是一个只可读不可写的常量

	//func2(10);
	//func2函数调用时，不知道调用哪一个func2函数，有二义性
	//func2(10,20);//调用有两个函数参数的
	
	//建议：函数重载时不要加上默认参数


	return 0;
}